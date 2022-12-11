// COMMON START

#include <windows.h>

int get_length(char* string)
{
    int result = 0;
    while (string[result] != '\0') { result++; }
    return result;
}

int remainder(int dividend, int divisor)
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
    ExitProcess(1);
}

void print(char* message) { WriteConsole(stdout, message, get_length(message), nullptr, nullptr); }

void print(char* message, int length) { WriteConsole(stdout, message, length, nullptr, nullptr); }

void print(char c) { WriteConsole(stdout, &c, 1, nullptr, nullptr); }

void print(int value)
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
"addx 15\n"
"addx -11\n"
"addx 6\n"
"addx -3\n"
"addx 5\n"
"addx -1\n"
"addx -8\n"
"addx 13\n"
"addx 4\n"
"noop\n"
"addx -1\n"
"addx 5\n"
"addx -1\n"
"addx 5\n"
"addx -1\n"
"addx 5\n"
"addx -1\n"
"addx 5\n"
"addx -1\n"
"addx -35\n"
"addx 1\n"
"addx 24\n"
"addx -19\n"
"addx 1\n"
"addx 16\n"
"addx -11\n"
"noop\n"
"noop\n"
"addx 21\n"
"addx -15\n"
"noop\n"
"noop\n"
"addx -3\n"
"addx 9\n"
"addx 1\n"
"addx -3\n"
"addx 8\n"
"addx 1\n"
"addx 5\n"
"noop\n"
"noop\n"
"noop\n"
"noop\n"
"noop\n"
"addx -36\n"
"noop\n"
"addx 1\n"
"addx 7\n"
"noop\n"
"noop\n"
"noop\n"
"addx 2\n"
"addx 6\n"
"noop\n"
"noop\n"
"noop\n"
"noop\n"
"noop\n"
"addx 1\n"
"noop\n"
"noop\n"
"addx 7\n"
"addx 1\n"
"noop\n"
"addx -13\n"
"addx 13\n"
"addx 7\n"
"noop\n"
"addx 1\n"
"addx -33\n"
"noop\n"
"noop\n"
"noop\n"
"addx 2\n"
"noop\n"
"noop\n"
"noop\n"
"addx 8\n"
"noop\n"
"addx -1\n"
"addx 2\n"
"addx 1\n"
"noop\n"
"addx 17\n"
"addx -9\n"
"addx 1\n"
"addx 1\n"
"addx -3\n"
"addx 11\n"
"noop\n"
"noop\n"
"addx 1\n"
"noop\n"
"addx 1\n"
"noop\n"
"noop\n"
"addx -13\n"
"addx -19\n"
"addx 1\n"
"addx 3\n"
"addx 26\n"
"addx -30\n"
"addx 12\n"
"addx -1\n"
"addx 3\n"
"addx 1\n"
"noop\n"
"noop\n"
"noop\n"
"addx -9\n"
"addx 18\n"
"addx 1\n"
"addx 2\n"
"noop\n"
"noop\n"
"addx 9\n"
"noop\n"
"noop\n"
"noop\n"
"addx -1\n"
"addx 2\n"
"addx -37\n"
"addx 1\n"
"addx 3\n"
"noop\n"
"addx 15\n"
"addx -21\n"
"addx 22\n"
"addx -6\n"
"addx 1\n"
"noop\n"
"addx 2\n"
"addx 1\n"
"noop\n"
"addx -10\n"
"noop\n"
"noop\n"
"addx 20\n"
"addx 1\n"
"addx 2\n"
"addx 2\n"
"addx -6\n"
"addx -11\n"
"noop\n"
"noop\n"
"noop\n"
;

char* SOURCE =
"addx 1\n"
"noop\n"
"addx 2\n"
"addx 5\n"
"addx 2\n"
"noop\n"
"noop\n"
"noop\n"
"addx 5\n"
"noop\n"
"noop\n"
"addx 1\n"
"addx 2\n"
"addx -5\n"
"addx 12\n"
"addx 1\n"
"addx 4\n"
"addx 2\n"
"noop\n"
"addx -1\n"
"addx 4\n"
"noop\n"
"noop\n"
"addx -37\n"
"addx 21\n"
"addx -13\n"
"addx -3\n"
"noop\n"
"addx 3\n"
"addx 2\n"
"addx 5\n"
"addx -2\n"
"addx 7\n"
"addx -2\n"
"addx 2\n"
"addx 11\n"
"addx -4\n"
"addx 3\n"
"noop\n"
"addx -18\n"
"addx 7\n"
"addx 14\n"
"addx 2\n"
"addx 5\n"
"addx -39\n"
"addx 1\n"
"addx 5\n"
"noop\n"
"noop\n"
"noop\n"
"addx 1\n"
"addx 4\n"
"noop\n"
"addx 12\n"
"addx 10\n"
"addx -17\n"
"addx 5\n"
"addx -17\n"
"addx 14\n"
"addx 6\n"
"noop\n"
"addx 3\n"
"addx 7\n"
"noop\n"
"noop\n"
"addx 2\n"
"addx 3\n"
"noop\n"
"addx -40\n"
"addx 40\n"
"addx -33\n"
"addx -2\n"
"noop\n"
"addx 3\n"
"addx 2\n"
"addx 5\n"
"addx -7\n"
"addx 8\n"
"noop\n"
"addx 6\n"
"addx 8\n"
"addx -11\n"
"addx 8\n"
"noop\n"
"addx -19\n"
"addx 27\n"
"noop\n"
"addx -2\n"
"addx 4\n"
"noop\n"
"addx -10\n"
"addx -27\n"
"noop\n"
"noop\n"
"addx 7\n"
"addx 4\n"
"addx -3\n"
"addx 2\n"
"addx 5\n"
"addx 2\n"
"addx -4\n"
"addx -3\n"
"addx 10\n"
"addx 15\n"
"addx -8\n"
"addx 2\n"
"addx 3\n"
"addx -2\n"
"addx 5\n"
"addx 2\n"
"addx 2\n"
"addx -39\n"
"addx 1\n"
"addx 3\n"
"addx 3\n"
"addx 3\n"
"noop\n"
"addx 2\n"
"addx 1\n"
"addx 4\n"
"addx -1\n"
"addx 2\n"
"addx 4\n"
"addx 1\n"
"noop\n"
"noop\n"
"addx 2\n"
"addx 5\n"
"addx 3\n"
"noop\n"
"noop\n"
"addx -27\n"
"addx 29\n"
"noop\n"
"addx 3\n"
"noop\n"
"noop\n"
;

enum InstructionType
{
    InstructionTypeAdd,
    InstructionTypeNoop,
};

int solve_part_1(char* source)
{
    int result = 0;
    InstructionType instruction_type;
    int value_to_add;
    int cycle_count = 1;
    int register_x = 1;
    for (int i = 0; i < get_length(source); i++)
    {
        if (source[i] == '\n')
        {
            int run_cycles;
            if (instruction_type == InstructionTypeNoop) { run_cycles = 1; }
            else { run_cycles = 2; }
            for (int j = 0; j < run_cycles; j++)
            {
                if (j == 1) { register_x += value_to_add; }
                cycle_count++;
                if ((cycle_count - 20) % 40 == 0)
                {
                    result += cycle_count * register_x;
                }
            }
        }
        else if (source[i] == 'a')
        {
            instruction_type = InstructionTypeAdd;
            while (source[i] != ' ') { i++; }
        }
        else if (source[i] == 'n')
        {
            instruction_type = InstructionTypeNoop;
            while (source[i] != '\n') { i++; }
            i--;
        }
        else if (source[i] == '-' || is_digit(source[i]))
        {
            bool is_negative = source[i] == '-';
            if (is_negative) { i++; }
            value_to_add = 0;
            for (; is_digit(source[i]); i++) { value_to_add = value_to_add * 10 + source[i] - '0'; }
            if (is_negative) { value_to_add *= -1; }
            i--;
        }
    }
    return result;
}

void solve_part_2(char* source)
{
    int brush = 0;
    char screen[40 * 6];
    InstructionType instruction_type;
    int value_to_add;
    int cycle_count = 1;
    int register_x = 1;
    for (int i = 0; brush < 240; i = (i + 1) % get_length(source))
    {
        if (source[i] == '\n')
        {
            int run_cycles;
            if (instruction_type == InstructionTypeNoop) { run_cycles = 1; }
            else { run_cycles = 2; }
            for (int j = 0; j < run_cycles; j++)
            {
                if (brush >= 40 * 6) { panic(); }
                screen[brush] = brush % 40 >= register_x - 1 && brush % 40 <= register_x + 1 ? '#' : '.';
                if (j == 1) { register_x += value_to_add; }
                cycle_count++;
                brush++;
            }
        }
        else if (source[i] == 'a')
        {
            instruction_type = InstructionTypeAdd;
            while (source[i] != ' ') { i++; }
        }
        else if (source[i] == 'n')
        {
            instruction_type = InstructionTypeNoop;
            while (source[i] != '\n') { i++; }
            i--;
        }
        else if (source[i] == '-' || is_digit(source[i]))
        {
            bool is_negative = source[i] == '-';
            if (is_negative) { i++; }
            value_to_add = 0;
            for (; is_digit(source[i]); i++) { value_to_add = value_to_add * 10 + source[i] - '0'; }
            if (is_negative) { value_to_add *= -1; }
            i--;
        }
    }

    for (int row = 0; row < 6; row++)
    {
        for (int col = 0; col < 40; col++)
        {
            print(screen[row * 40 + col]);
        }
        print("\n");
    }
}

int main()
{
    initialize_printing();

    auto test_answer = solve_part_1(TEST_SOURCE);
    if (test_answer != 13140) { print("Test failed, expected answer 13140, got "); print(test_answer); print("\n"); }

    print("Answer to part 1: "); print(solve_part_1(SOURCE)); print("\n");
    print("Answer to part 2:\n");
    solve_part_2(SOURCE);
    print("\n");
}
