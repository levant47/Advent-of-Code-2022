#include <windows.h>

typedef signed char        s8;
typedef short              s16;
typedef int                s32;
typedef long long          s64;
typedef unsigned char      u8;
typedef unsigned short     u16;
typedef unsigned int       u32;
typedef unsigned long long u64;

#ifndef max
template <typename T>
T max(T left, T right) { return left > right ? left : right; }
#endif

#ifndef min
template <typename T>
T min(T left, T right) { return left < right ? left : right; }
#endif

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

s64 myabs(const s64 value) { return value >= 0 ? value : -value; }

HANDLE stdout;

bool is_printing_initialized;
void initialize_printing()
{
    stdout = GetStdHandle(STD_OUTPUT_HANDLE);
    is_printing_initialized = true;
}

void print(char* message, int length)
{
    if (!is_printing_initialized) { initialize_printing(); }
    WriteFile(stdout, message, length, nullptr, nullptr);
}

void print(char* message) { print(message, get_length(message)); }

void panic()
{
    print("panic\n");
    if (IsDebuggerPresent()) { __debugbreak(); }
    ExitProcess(1);
}

void print(char c) { print(&c, 1); }

void print(u64 value)
{
    char buffer[21];
    u64 count = 0;
    do
    {
        buffer[count] = remainder(value, 10) + '0';
        value /= 10;
        count++;
    }
    while (value != 0);
    for (int i = 0; i < count / 2; i++)
    {
        auto temp = buffer[i];
        buffer[i] = buffer[count - i - 1];
        buffer[count - i - 1] = temp;
    }
    print(buffer, count);
}

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
    print(buffer, count);
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

#ifdef MEMORY_CAPACITY
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

template <typename T>
void add_unique(T item, Array<T>* array)
{
    if (!contains(item, *array)) { add(item, array); }
}

template <typename T>
T get(u64 i, Array<T> array) { return array.data[i]; }

template <typename T>
bool contains(T item, Array<T> array)
{
    for (u64 i = 0; i < array.size; i++)
    {
        if (get(i, array) == item)
        {
            return true;
        }
    }
    return false;
}
#endif
