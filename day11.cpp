// COMMON START

#include <windows.h>

typedef signed char        s8;
typedef short              s16;
typedef int                s32;
typedef long long          s64;
typedef unsigned char      u8;
typedef unsigned short     u16;
typedef unsigned int       u32;
typedef unsigned long long u64;

int get_length(char* string)
{
    int result = 0;
    while (string[result] != '\0') { result++; }
    return result;
}

s64 remainder(s64 dividend, s64 divisor)
{
    auto modulo = dividend % divisor;
    if (modulo < 0) { return modulo + divisor; }
    return modulo;
}

int abs(int value) { return value >= 0 ? value : -value; }

HANDLE stdout;

void initialize_printing() { stdout = GetStdHandle(STD_OUTPUT_HANDLE); }

void panic()
{
    char message[] = "panic\n";
    WriteConsole(stdout, message, sizeof(message) - 1, nullptr, nullptr);
    if (IsDebuggerPresent()) { __debugbreak(); }
    ExitProcess(1);
}

void print(char* message) { WriteConsole(stdout, message, get_length(message), nullptr, nullptr); }

void print(char* message, int length) { WriteConsole(stdout, message, length, nullptr, nullptr); }

void print(char c) { WriteConsole(stdout, &c, 1, nullptr, nullptr); }

void print(s64 value)
{
    bool is_negative = value < 0;
    if (is_negative) { value = -value; }
    char buffer[21];
    if (is_negative) { buffer[0] = '-'; }
    int count = is_negative ? 1 : 0;
    do
    {
        buffer[count] = remainder(value, 10) + '0';
        value /= 10;
        count++;
    }
    while (value != 0);
    for (int i = is_negative ? 1 : 0; i < count / 2; i++)
    {
        auto temp = buffer[i];
        buffer[i] = buffer[count - i - 1];
        buffer[count - i - 1] = temp;
    }
    WriteConsole(stdout, buffer, count, nullptr, nullptr);
}

void print(int value) { print((s64)value); }

bool is_digit(char c) { return c >= '0' && c <= '9'; }

bool starts_with(char* target, char* source)
{
    for (int i = 0; target[i] != '\0'; i++)
    {
        if (target[i] != source[i])
        {
            return false;
        }
    }
    return true;
}

bool starts_with(char* target, int length, char* source)
{
    for (int i = 0; target[i] == source[i]; i++)
    {
        if (i == length - 1)
        {
            return true;
        }
    }
    return false;
}

// COMMON END

char* TEST_SOURCE =
"Monkey 0:\n"
"Starting items: 79, 98\n"
"Operation: new = old * 19\n"
"Test: divisible by 23\n"
"If true: throw to monkey 2\n"
"If false: throw to monkey 3\n"
"\n"
"Monkey 1:\n"
"Starting items: 54, 65, 75, 74\n"
"Operation: new = old + 6\n"
"Test: divisible by 19\n"
"If true: throw to monkey 2\n"
"If false: throw to monkey 0\n"
"\n"
"Monkey 2:\n"
"Starting items: 79, 60, 97\n"
"Operation: new = old * old\n"
"Test: divisible by 13\n"
"If true: throw to monkey 1\n"
"If false: throw to monkey 3\n"
"\n"
"Monkey 3:\n"
"Starting items: 74\n"
"Operation: new = old + 3\n"
"Test: divisible by 17\n"
"If true: throw to monkey 0\n"
"If false: throw to monkey 1\n"
"\n"
;

char* SOURCE =
"Monkey 0:\n"
"  Starting items: 62, 92, 50, 63, 62, 93, 73, 50\n"
"  Operation: new = old * 7\n"
"  Test: divisible by 2\n"
"    If true: throw to monkey 7\n"
"    If false: throw to monkey 1\n"
"\n"
"Monkey 1:\n"
"  Starting items: 51, 97, 74, 84, 99\n"
"  Operation: new = old + 3\n"
"  Test: divisible by 7\n"
"    If true: throw to monkey 2\n"
"    If false: throw to monkey 4\n"
"\n"
"Monkey 2:\n"
"  Starting items: 98, 86, 62, 76, 51, 81, 95\n"
"  Operation: new = old + 4\n"
"  Test: divisible by 13\n"
"    If true: throw to monkey 5\n"
"    If false: throw to monkey 4\n"
"\n"
"Monkey 3:\n"
"  Starting items: 53, 95, 50, 85, 83, 72\n"
"  Operation: new = old + 5\n"
"  Test: divisible by 19\n"
"    If true: throw to monkey 6\n"
"    If false: throw to monkey 0\n"
"\n"
"Monkey 4:\n"
"  Starting items: 59, 60, 63, 71\n"
"  Operation: new = old * 5\n"
"  Test: divisible by 11\n"
"    If true: throw to monkey 5\n"
"    If false: throw to monkey 3\n"
"\n"
"Monkey 5:\n"
"  Starting items: 92, 65\n"
"  Operation: new = old * old\n"
"  Test: divisible by 5\n"
"    If true: throw to monkey 6\n"
"    If false: throw to monkey 3\n"
"\n"
"Monkey 6:\n"
"  Starting items: 78\n"
"  Operation: new = old + 8\n"
"  Test: divisible by 3\n"
"    If true: throw to monkey 0\n"
"    If false: throw to monkey 7\n"
"\n"
"Monkey 7:\n"
"  Starting items: 84, 93, 54\n"
"  Operation: new = old + 1\n"
"  Test: divisible by 17\n"
"    If true: throw to monkey 2\n"
"    If false: throw to monkey 1\n"
"\n"
;

#define MEMORY_CAPACITY (32 * 1024)
char memory[MEMORY_CAPACITY];
int allocated = 0;

void* allocate(int size)
{
    if (allocated + size > MEMORY_CAPACITY) { panic(); }
    void* result = memory + allocated;
    allocated += size;
    return result;
}

template <typename T>
struct Array
{
    int capacity;
    int size;
    T* data;
};

template <typename T>
Array<T> make_array(int capacity)
{
    Array<T> result;
    result.capacity = capacity;
    result.size = 0;
    result.data = (T*)allocate(sizeof(T) * capacity);
    return result;
}

template <typename T>
void add(T item, Array<T>* array)
{
    if (array->size == array->capacity) { panic(); }
    array->data[array->size] = item;
    array->size++;
}

enum WorryOperationType
{
    WorryOperationTypeAdd,
    WorryOperationTypeMultiply,
    WorryOperationTypeSquare,
};

struct WorryOperation
{
    WorryOperationType type;
    int parameter; // only for Add and Multiply types
};

struct RemainderCache
{
    int divisor;
    int value;
};

int apply(WorryOperation worry_operation, int item)
{
    switch (worry_operation.type)
    {
        case WorryOperationTypeAdd: return item + worry_operation.parameter;
        case WorryOperationTypeMultiply: return item * worry_operation.parameter;
        case WorryOperationTypeSquare: return item * item;
        default: panic();
    }
}

void apply(WorryOperation worry_operation, Array<RemainderCache> item)
{
    for (int i = 0; i < item.size; i++)
    {
        auto remainder = &item.data[i];
        switch (worry_operation.type)
        {
            case WorryOperationTypeAdd:
                remainder->value += worry_operation.parameter;
                break;
            case WorryOperationTypeMultiply:
                remainder->value *= worry_operation.parameter;
                break;
            case WorryOperationTypeSquare:
                remainder->value *= remainder->value;
                break;
            default: panic();
        }
        remainder->value %= remainder->divisor;
    }
}

struct Monkey
{
    Array<int> item_values; // for part 1
    Array<Array<RemainderCache>> item_remainder_caches; // for part 2
    WorryOperation worry_operation;
    int test_factor;
    int if_true_throw_to;
    int if_false_throw_to;
    int business;
};

s64 solve(char* source, bool part_2 = false)
{
    auto monkeys = make_array<Monkey>(8);
    auto all_starting_item_values = make_array<Array<int>>(8);
    for (int i = 0; source[i] != '\0'; i++)
    {
        // skip first line
        for (; source[i] != '\n'; i++); i++;

        // on the second line, skip to the beginning of the starting items
        for (; source[i] != ':'; i++); i += 2;

        // parse starting items
        auto current_starting_item_values = make_array<int>(64);
        while (source[i] != '\n')
        {
            if (source[i] == ',') { i += 2; }
            int current = 0;
            for (; is_digit(source[i]); i++) { current = current * 10 + source[i] - '0'; }
            add(current, &current_starting_item_values);
        }
        add(current_starting_item_values, &all_starting_item_values);
        i++;

        // skip to the important part of the operation
        for (; source[i] != '*' && source[i] != '+'; i++);

        WorryOperation worry_operation;
        if (starts_with("* old", source + i))
        {
            worry_operation.type = WorryOperationTypeSquare;
        }
        else
        {
            if (source[i] == '*') { worry_operation.type = WorryOperationTypeMultiply; }
            else // must be plus
            { worry_operation.type = WorryOperationTypeAdd; }

            i += 2;
            int parameter = 0;
            for (; is_digit(source[i]); i++) { parameter = parameter * 10 + source[i] - '0'; }
            i++;
            worry_operation.parameter = parameter;
        }

        // parse the test factor
        while (!is_digit(source[i])) { i++; }
        int test_factor = 0;
        for (; is_digit(source[i]); i++) { test_factor = test_factor * 10 + source[i] - '0'; }

        // parse the first monkey index
        while (!is_digit(source[i])) { i++; }
        int if_true_throw_to = 0;
        for (; is_digit(source[i]); i++) { if_true_throw_to = if_true_throw_to * 10 + source[i] - '0'; }

        // parse the second monkey index
        while (!is_digit(source[i])) { i++; }
        int if_false_throw_to = 0;
        for (; is_digit(source[i]); i++) { if_false_throw_to = if_false_throw_to * 10 + source[i] - '0'; }

        Monkey monkey;
        monkey.worry_operation = worry_operation;
        monkey.test_factor = test_factor;
        monkey.if_true_throw_to = if_true_throw_to;
        monkey.if_false_throw_to = if_false_throw_to;
        monkey.business = 0;
        add(monkey, &monkeys);

        i++;
    }

    for (int monkey_i = 0; monkey_i < monkeys.size; monkey_i++)
    {
        auto monkey = &monkeys.data[monkey_i];
        auto starting_item_values = all_starting_item_values.data[monkey_i];

        if (part_2)
        {
            monkey->item_remainder_caches = make_array<Array<RemainderCache>>(32);
            for (int item_i = 0; item_i < starting_item_values.size; item_i++)
            {
                auto item_value = starting_item_values.data[item_i];
                auto item_remainder_caches = make_array<RemainderCache>(8);
                for (int factor_i = 0; factor_i < monkeys.size; factor_i++)
                {
                    auto divisor = monkeys.data[factor_i].test_factor;
                    RemainderCache remainder_cache;
                    remainder_cache.divisor = divisor;
                    remainder_cache.value = item_value % divisor;
                    add(remainder_cache, &item_remainder_caches);
                }
                add(item_remainder_caches, &monkey->item_remainder_caches);
            }
        }
        else
        {
            monkey->item_values = starting_item_values;
        }
    }

    for (int round = 0; round < (part_2 ? 10000 : 20); round++)
    {
        for (int monkey_i = 0; monkey_i < monkeys.size; monkey_i++)
        {
            auto monkey = &monkeys.data[monkey_i];
            for (int i = 0; i < (part_2 ? monkey->item_remainder_caches.size : monkey->item_values.size); i++)
            {
                if (part_2)
                {
                    apply(monkey->worry_operation, monkey->item_remainder_caches.data[i]);
                    bool test_true = false;
                    for (int j = 0; j < monkey->item_remainder_caches.data[i].size; j++)
                    {
                        auto factor = monkey->item_remainder_caches.data[i].data[j];
                        if (factor.divisor == monkey->test_factor && factor.value == 0)
                        {
                            test_true = true;
                            break;
                        }
                    }
                    int monkey_to_throw_to = test_true
                        ? monkey->if_true_throw_to
                        : monkey->if_false_throw_to;
                    add(monkey->item_remainder_caches.data[i], &monkeys.data[monkey_to_throw_to].item_remainder_caches);
                }
                else
                {
                    auto new_item_value = apply(monkey->worry_operation, monkey->item_values.data[i]) / 3;
                    auto monkey_to_throw_to = new_item_value % monkey->test_factor == 0
                        ? monkey->if_true_throw_to
                        : monkey->if_false_throw_to;
                    add(new_item_value, &monkeys.data[monkey_to_throw_to].item_values);
                }
                monkey->business++;
            }
            monkey->item_values.size = 0;
            monkey->item_remainder_caches.size = 0;
        }
    }

    s64 top_2[2] = {0, 0};
    for (int i = 0; i < monkeys.size; i++)
    {
        s64 current = monkeys.data[i].business;
        for (int j = 0; j < 2; j++)
        {
            if (current > top_2[j])
            {
                auto temp = top_2[j];
                top_2[j] = current;
                current = temp;
            }
        }
    }

    return top_2[0] * top_2[1];
}

int main()
{
    initialize_printing();

    auto test_1_answer = solve(TEST_SOURCE);
    if (test_1_answer != 10605) { print("Test 1 answer incorrect, expected 10605, got "); print(test_1_answer); print("\n"); }
    auto test_2_answer = solve(TEST_SOURCE, /* part_2: */ true);
    if (test_2_answer != 2713310158) { print("Test 2 answer incorrect, expected 2713310158, got "); print(test_2_answer); print("\n"); }

    print("Answer to part 1: "); print(solve(SOURCE)); print("\n");
    print("Answer to part 2: "); print(solve(SOURCE, /* part_2: */ true)); print("\n");
}
