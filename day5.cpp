// COMMON START

#include <windows.h>

int get_length(char* string)
{
    int result = 0;
    while (string[result] != '\0') { result++; }
    return result;
}

HANDLE stdout;

void initialize_printing() { stdout = GetStdHandle(STD_OUTPUT_HANDLE); }

void panic()
{
    char message[] = "panic\n";
    WriteConsole(stdout, message, sizeof(message) - 1, nullptr, nullptr);
    ExitProcess(1);
}

void print(char* message) { WriteConsole(stdout, message, get_length(message), nullptr, nullptr); }

void print(char c) { WriteConsole(stdout, &c, 1, nullptr, nullptr); }

void print(int value)
{
    char buffer[21];
    int count = 0;
    do
    {
        buffer[count] = value % 10 + '0';
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
    WriteConsole(stdout, buffer, count, nullptr, nullptr);
}

bool is_digit(char c) { return c >= '0' && c <= '9'; }

// COMMON END

char* SOURCE =
/*
"    [D]    \n"
"[N] [C]    \n"
"[Z] [M] [P]\n"
" 1   2   3 \n"
"\n"
"move 1 from 2 to 1\n"
"move 3 from 1 to 3\n"
"move 2 from 2 to 1\n"
"move 1 from 1 to 2\n"
*/
"    [V] [G]             [H]        \n"
"[Z] [H] [Z]         [T] [S]        \n"
"[P] [D] [F]         [B] [V] [Q]    \n"
"[B] [M] [V] [N]     [F] [D] [N]    \n"
"[Q] [Q] [D] [F]     [Z] [Z] [P] [M]\n"
"[M] [Z] [R] [D] [Q] [V] [T] [F] [R]\n"
"[D] [L] [H] [G] [F] [Q] [M] [G] [W]\n"
"[N] [C] [Q] [H] [N] [D] [Q] [M] [B]\n"
" 1   2   3   4   5   6   7   8   9 \n"
"\n"
"move 3 from 2 to 5\n"
"move 2 from 9 to 6\n"
"move 4 from 7 to 1\n"
"move 7 from 3 to 4\n"
"move 2 from 9 to 8\n"
"move 8 from 8 to 6\n"
"move 1 from 7 to 4\n"
"move 8 from 6 to 4\n"
"move 4 from 5 to 7\n"
"move 3 from 4 to 9\n"
"move 2 from 6 to 3\n"
"move 11 from 4 to 1\n"
"move 1 from 3 to 4\n"
"move 2 from 3 to 1\n"
"move 1 from 7 to 6\n"
"move 14 from 1 to 6\n"
"move 7 from 4 to 3\n"
"move 2 from 5 to 9\n"
"move 5 from 6 to 4\n"
"move 9 from 6 to 1\n"
"move 3 from 4 to 8\n"
"move 1 from 7 to 6\n"
"move 3 from 4 to 1\n"
"move 7 from 3 to 8\n"
"move 5 from 9 to 5\n"
"move 4 from 1 to 4\n"
"move 3 from 7 to 2\n"
"move 5 from 6 to 2\n"
"move 3 from 4 to 1\n"
"move 7 from 8 to 5\n"
"move 3 from 6 to 8\n"
"move 11 from 2 to 1\n"
"move 1 from 4 to 3\n"
"move 1 from 3 to 9\n"
"move 2 from 2 to 9\n"
"move 8 from 5 to 4\n"
"move 1 from 1 to 7\n"
"move 1 from 9 to 5\n"
"move 8 from 4 to 1\n"
"move 1 from 6 to 8\n"
"move 2 from 9 to 1\n"
"move 4 from 5 to 3\n"
"move 2 from 7 to 3\n"
"move 40 from 1 to 2\n"
"move 24 from 2 to 9\n"
"move 1 from 5 to 6\n"
"move 11 from 2 to 3\n"
"move 9 from 3 to 5\n"
"move 12 from 9 to 4\n"
"move 6 from 5 to 7\n"
"move 4 from 7 to 4\n"
"move 2 from 5 to 1\n"
"move 2 from 1 to 9\n"
"move 1 from 6 to 8\n"
"move 9 from 4 to 8\n"
"move 6 from 4 to 9\n"
"move 17 from 9 to 6\n"
"move 1 from 4 to 6\n"
"move 17 from 6 to 5\n"
"move 1 from 1 to 4\n"
"move 2 from 7 to 9\n"
"move 1 from 6 to 7\n"
"move 2 from 2 to 9\n"
"move 2 from 7 to 2\n"
"move 6 from 3 to 8\n"
"move 3 from 5 to 9\n"
"move 1 from 4 to 9\n"
"move 2 from 3 to 7\n"
"move 4 from 5 to 6\n"
"move 1 from 7 to 4\n"
"move 1 from 4 to 2\n"
"move 1 from 7 to 5\n"
"move 9 from 8 to 1\n"
"move 1 from 1 to 2\n"
"move 2 from 9 to 3\n"
"move 7 from 2 to 7\n"
"move 1 from 9 to 5\n"
"move 12 from 8 to 7\n"
"move 3 from 1 to 9\n"
"move 2 from 6 to 4\n"
"move 9 from 9 to 3\n"
"move 1 from 6 to 7\n"
"move 1 from 9 to 5\n"
"move 1 from 6 to 1\n"
"move 9 from 7 to 1\n"
"move 7 from 1 to 8\n"
"move 4 from 3 to 9\n"
"move 5 from 7 to 1\n"
"move 3 from 9 to 1\n"
"move 4 from 7 to 2\n"
"move 12 from 1 to 5\n"
"move 2 from 9 to 4\n"
"move 7 from 8 to 2\n"
"move 7 from 5 to 7\n"
"move 4 from 3 to 4\n"
"move 1 from 8 to 1\n"
"move 2 from 2 to 1\n"
"move 2 from 3 to 1\n"
"move 3 from 2 to 7\n"
"move 13 from 5 to 4\n"
"move 1 from 8 to 3\n"
"move 1 from 3 to 8\n"
"move 1 from 3 to 5\n"
"move 1 from 8 to 7\n"
"move 17 from 4 to 8\n"
"move 5 from 2 to 6\n"
"move 2 from 1 to 6\n"
"move 5 from 6 to 3\n"
"move 9 from 7 to 1\n"
"move 4 from 4 to 3\n"
"move 1 from 6 to 2\n"
"move 4 from 7 to 4\n"
"move 1 from 6 to 5\n"
"move 2 from 3 to 2\n"
"move 15 from 1 to 4\n"
"move 6 from 5 to 4\n"
"move 4 from 3 to 5\n"
"move 4 from 5 to 2\n"
"move 2 from 2 to 4\n"
"move 11 from 8 to 1\n"
"move 2 from 8 to 3\n"
"move 5 from 3 to 7\n"
"move 4 from 2 to 8\n"
"move 2 from 2 to 9\n"
"move 4 from 7 to 8\n"
"move 11 from 4 to 6\n"
"move 2 from 5 to 4\n"
"move 3 from 6 to 9\n"
"move 4 from 1 to 4\n"
"move 15 from 4 to 9\n"
"move 1 from 7 to 3\n"
"move 2 from 1 to 2\n"
"move 6 from 4 to 5\n"
"move 11 from 8 to 2\n"
"move 16 from 9 to 4\n"
"move 2 from 9 to 1\n"
"move 4 from 2 to 3\n"
"move 8 from 4 to 9\n"
"move 1 from 8 to 7\n"
"move 5 from 4 to 7\n"
"move 6 from 7 to 3\n"
"move 10 from 9 to 5\n"
"move 5 from 3 to 1\n"
"move 1 from 1 to 4\n"
"move 5 from 1 to 9\n"
"move 5 from 1 to 7\n"
"move 5 from 4 to 1\n"
"move 4 from 1 to 6\n"
"move 3 from 1 to 9\n"
"move 10 from 5 to 9\n"
"move 2 from 7 to 1\n"
"move 5 from 3 to 6\n"
"move 4 from 5 to 7\n"
"move 4 from 2 to 6\n"
"move 2 from 5 to 6\n"
"move 5 from 2 to 7\n"
"move 18 from 6 to 1\n"
"move 5 from 9 to 2\n"
"move 7 from 9 to 6\n"
"move 16 from 1 to 7\n"
"move 4 from 6 to 1\n"
"move 1 from 2 to 6\n"
"move 2 from 2 to 6\n"
"move 1 from 2 to 4\n"
"move 4 from 9 to 3\n"
"move 1 from 2 to 8\n"
"move 5 from 7 to 5\n"
"move 2 from 9 to 3\n"
"move 1 from 5 to 9\n"
"move 7 from 3 to 4\n"
"move 1 from 9 to 7\n"
"move 8 from 1 to 9\n"
"move 1 from 8 to 9\n"
"move 3 from 6 to 9\n"
"move 17 from 7 to 5\n"
"move 3 from 4 to 8\n"
"move 3 from 4 to 2\n"
"move 3 from 8 to 3\n"
"move 3 from 3 to 7\n"
"move 7 from 9 to 3\n"
"move 6 from 5 to 9\n"
"move 4 from 9 to 3\n"
"move 10 from 7 to 2\n"
"move 15 from 5 to 2\n"
"move 4 from 6 to 3\n"
"move 1 from 3 to 2\n"
"move 23 from 2 to 5\n"
"move 2 from 4 to 6\n"
"move 2 from 6 to 7\n"
"move 1 from 7 to 2\n"
"move 1 from 6 to 9\n"
"move 5 from 9 to 8\n"
"move 3 from 8 to 7\n"
"move 5 from 2 to 6\n"
"move 2 from 2 to 3\n"
"move 2 from 6 to 3\n"
"move 3 from 6 to 2\n"
"move 3 from 6 to 8\n"
"move 10 from 5 to 9\n"
"move 2 from 7 to 5\n"
"move 1 from 5 to 8\n"
"move 13 from 9 to 5\n"
"move 6 from 5 to 6\n"
"move 1 from 6 to 1\n"
"move 1 from 7 to 3\n"
"move 1 from 7 to 3\n"
"move 13 from 5 to 6\n"
"move 3 from 3 to 5\n"
"move 1 from 2 to 1\n"
"move 4 from 8 to 9\n"
"move 2 from 2 to 6\n"
"move 2 from 5 to 3\n"
"move 2 from 3 to 6\n"
"move 5 from 6 to 4\n"
"move 9 from 5 to 9\n"
"move 10 from 6 to 9\n"
"move 1 from 1 to 7\n"
"move 3 from 3 to 9\n"
"move 1 from 8 to 1\n"
"move 3 from 6 to 3\n"
"move 1 from 7 to 6\n"
"move 1 from 8 to 7\n"
"move 2 from 6 to 1\n"
"move 2 from 6 to 4\n"
"move 3 from 4 to 6\n"
"move 2 from 1 to 4\n"
"move 10 from 9 to 6\n"
"move 6 from 4 to 9\n"
"move 17 from 9 to 1\n"
"move 4 from 9 to 5\n"
"move 19 from 1 to 7\n"
"move 4 from 5 to 6\n"
"move 1 from 9 to 3\n"
"move 5 from 3 to 4\n"
"move 5 from 4 to 8\n"
"move 17 from 6 to 9\n"
"move 17 from 9 to 2\n"
"move 1 from 6 to 1\n"
"move 1 from 1 to 2\n"
"move 1 from 8 to 3\n"
"move 2 from 3 to 2\n"
"move 5 from 7 to 1\n"
"move 1 from 7 to 3\n"
"move 5 from 2 to 9\n"
"move 4 from 8 to 2\n"
"move 2 from 7 to 8\n"
"move 3 from 9 to 3\n"
"move 7 from 3 to 9\n"
"move 2 from 8 to 7\n"
"move 8 from 2 to 9\n"
"move 5 from 9 to 6\n"
"move 4 from 3 to 9\n"
"move 11 from 2 to 3\n"
"move 2 from 6 to 5\n"
"move 1 from 9 to 4\n"
"move 10 from 7 to 3\n"
"move 3 from 1 to 8\n"
"move 2 from 6 to 7\n"
"move 15 from 3 to 8\n"
"move 2 from 3 to 2\n"
"move 2 from 1 to 3\n"
"move 14 from 9 to 6\n"
"move 1 from 4 to 9\n"
"move 14 from 6 to 3\n"
"move 5 from 7 to 2\n"
"move 2 from 9 to 2\n"
"move 1 from 5 to 3\n"
"move 1 from 5 to 8\n"
"move 12 from 3 to 7\n"
"move 13 from 7 to 8\n"
"move 1 from 6 to 7\n"
"move 5 from 2 to 6\n"
"move 1 from 6 to 2\n"
"move 1 from 7 to 6\n"
"move 4 from 6 to 8\n"
"move 31 from 8 to 7\n"
"move 15 from 7 to 8\n"
"move 7 from 7 to 5\n"
"move 4 from 2 to 3\n"
"move 1 from 6 to 2\n"
"move 3 from 5 to 8\n"
"move 9 from 7 to 4\n"
"move 2 from 2 to 9\n"
"move 4 from 5 to 6\n"
"move 13 from 3 to 9\n"
"move 3 from 3 to 5\n"
"move 13 from 9 to 1\n"
"move 1 from 3 to 2\n"
"move 2 from 6 to 5\n"
"move 1 from 3 to 4\n"
"move 2 from 6 to 5\n"
"move 1 from 9 to 1\n"
"move 6 from 8 to 9\n"
"move 5 from 5 to 2\n"
"move 2 from 9 to 8\n"
"move 2 from 1 to 6\n"
"move 1 from 9 to 4\n"
"move 12 from 8 to 4\n"
"move 2 from 6 to 9\n"
"move 11 from 4 to 3\n"
"move 9 from 4 to 2\n"
"move 4 from 9 to 7\n"
"move 2 from 5 to 6\n"
"move 8 from 3 to 4\n"
"move 2 from 3 to 9\n"
"move 2 from 8 to 9\n"
"move 4 from 4 to 9\n"
"move 2 from 6 to 7\n"
"move 1 from 3 to 7\n"
"move 2 from 9 to 1\n"
"move 5 from 4 to 2\n"
"move 9 from 1 to 8\n"
"move 1 from 4 to 9\n"
"move 4 from 9 to 3\n"
"move 1 from 3 to 6\n"
"move 4 from 8 to 7\n"
"move 1 from 3 to 6\n"
"move 4 from 1 to 7\n"
"move 1 from 3 to 8\n"
"move 1 from 1 to 8\n"
"move 2 from 6 to 7\n"
"move 2 from 9 to 1\n"
"move 1 from 4 to 5\n"
"move 1 from 1 to 5\n"
"move 11 from 8 to 4\n"
"move 12 from 2 to 8\n"
"move 1 from 9 to 8\n"
"move 2 from 4 to 5\n"
"move 1 from 1 to 8\n"
"move 5 from 2 to 1\n"
"move 1 from 3 to 2\n"
"move 9 from 7 to 3\n"
"move 6 from 7 to 5\n"
"move 1 from 3 to 4\n"
"move 1 from 5 to 1\n"
"move 4 from 2 to 5\n"
"move 4 from 4 to 1\n"
"move 2 from 7 to 3\n"
"move 3 from 4 to 1\n"
"move 6 from 3 to 7\n"
"move 9 from 8 to 7\n"
"move 3 from 8 to 7\n"
"move 11 from 5 to 9\n"
"move 2 from 4 to 8\n"
"move 5 from 8 to 7\n"
"move 1 from 9 to 8\n"
"move 12 from 9 to 5\n"
"move 1 from 4 to 5\n"
"move 5 from 1 to 8\n"
"move 6 from 8 to 3\n"
"move 1 from 3 to 8\n"
"move 3 from 7 to 9\n"
"move 4 from 7 to 6\n"
"move 3 from 1 to 3\n"
"move 3 from 1 to 6\n"
"move 1 from 8 to 1\n"
"move 7 from 6 to 2\n"
"move 3 from 1 to 8\n"
"move 7 from 3 to 4\n"
"move 3 from 4 to 1\n"
"move 1 from 4 to 2\n"
"move 3 from 1 to 2\n"
"move 1 from 7 to 6\n"
"move 1 from 8 to 5\n"
"move 9 from 5 to 3\n"
"move 1 from 6 to 9\n"
"move 11 from 3 to 6\n"
"move 1 from 4 to 1\n"
"move 1 from 3 to 4\n"
"move 8 from 6 to 9\n"
"move 1 from 3 to 1\n"
"move 1 from 9 to 1\n"
"move 2 from 6 to 2\n"
"move 5 from 5 to 7\n"
"move 5 from 9 to 3\n"
"move 2 from 8 to 5\n"
"move 1 from 1 to 2\n"
"move 1 from 9 to 1\n"
"move 15 from 7 to 4\n"
"move 1 from 1 to 6\n"
"move 1 from 6 to 9\n"
"move 3 from 9 to 3\n"
"move 1 from 3 to 5\n"
"move 5 from 5 to 3\n"
"move 9 from 2 to 9\n"
"move 5 from 4 to 1\n"
"move 1 from 6 to 7\n"
"move 7 from 9 to 3\n"
"move 1 from 4 to 7\n"
"move 1 from 9 to 6\n"
"move 1 from 6 to 5\n"
"move 2 from 1 to 4\n"
"move 3 from 9 to 3\n"
"move 1 from 5 to 6\n"
"move 7 from 4 to 3\n"
"move 1 from 9 to 3\n"
"move 16 from 3 to 1\n"
"move 9 from 1 to 3\n"
"move 5 from 4 to 2\n"
"move 1 from 6 to 9\n"
"move 12 from 1 to 9\n"
"move 3 from 2 to 9\n"
"move 5 from 7 to 3\n"
"move 2 from 4 to 8\n"
"move 2 from 7 to 2\n"
"move 12 from 3 to 5\n"
"move 6 from 2 to 9\n"
"move 12 from 3 to 1\n"
"move 2 from 8 to 6\n"
"move 1 from 6 to 1\n"
"move 6 from 5 to 8\n"
"move 5 from 3 to 2\n"
"move 2 from 5 to 8\n"
"move 8 from 1 to 8\n"
"move 13 from 9 to 7\n"
"move 4 from 7 to 5\n"
"move 4 from 1 to 4\n"
"move 8 from 5 to 6\n"
"move 1 from 1 to 6\n"
"move 4 from 7 to 3\n"
"move 1 from 3 to 1\n"
"move 1 from 1 to 9\n"
"move 4 from 9 to 5\n"
"move 3 from 3 to 7\n"
"move 12 from 8 to 7\n"
"move 2 from 4 to 3\n"
"move 2 from 6 to 9\n"
"move 4 from 8 to 2\n"
"move 2 from 3 to 9\n"
"move 2 from 4 to 7\n"
"move 3 from 5 to 7\n"
"move 2 from 9 to 7\n"
"move 3 from 6 to 1\n"
"move 4 from 6 to 7\n"
"move 1 from 5 to 4\n"
"move 1 from 9 to 3\n"
"move 12 from 2 to 5\n"
"move 4 from 9 to 7\n"
"move 11 from 5 to 1\n"
"move 1 from 6 to 5\n"
"move 1 from 1 to 4\n"
"move 10 from 1 to 2\n"
"move 2 from 5 to 1\n"
"move 1 from 3 to 5\n"
"move 7 from 2 to 5\n"
"move 8 from 7 to 8\n"
"move 2 from 2 to 8\n"
"move 3 from 9 to 4\n"
"move 5 from 4 to 3\n"
"move 1 from 5 to 7\n"
"move 3 from 7 to 1\n"
"move 3 from 5 to 8\n"
"move 1 from 2 to 5\n"
"move 12 from 7 to 6\n"
"move 4 from 1 to 3\n"
"move 2 from 5 to 6\n"
"move 7 from 3 to 7\n"
"move 14 from 6 to 4\n"
"move 1 from 5 to 6\n"
"move 3 from 1 to 3\n"
"move 4 from 3 to 2\n"
"move 2 from 5 to 8\n"
"move 11 from 7 to 4\n"
"move 7 from 4 to 5\n"
"move 1 from 3 to 4\n"
"move 1 from 5 to 6\n"
"move 14 from 8 to 7\n"
"move 11 from 7 to 3\n"
"move 2 from 2 to 6\n"
"move 1 from 2 to 3\n"
"move 5 from 5 to 4\n"
"move 4 from 6 to 4\n"
"move 8 from 7 to 8\n"
"move 3 from 7 to 3\n"
"move 1 from 2 to 1\n"
"move 5 from 8 to 2\n"
"move 4 from 4 to 3\n"
"move 1 from 2 to 9\n"
"move 1 from 1 to 9\n"
"move 3 from 2 to 1\n"
"move 1 from 5 to 4\n"
"move 3 from 8 to 1\n"
"move 1 from 7 to 4\n"
"move 4 from 3 to 9\n"
"move 1 from 8 to 7\n"
"move 2 from 9 to 1\n"
"move 6 from 3 to 4\n"
"move 28 from 4 to 7\n"
"move 15 from 7 to 8\n"
"move 3 from 3 to 8\n"
"move 1 from 2 to 9\n"
"move 2 from 3 to 2\n"
"move 7 from 1 to 4\n"
"move 10 from 4 to 5\n"
"move 10 from 5 to 6\n"
"move 3 from 8 to 2\n"
"move 1 from 1 to 7\n"
"move 1 from 4 to 7\n"
"move 1 from 9 to 6\n"
"move 9 from 6 to 7\n"
"move 1 from 2 to 4\n"
"move 1 from 9 to 5\n"
;

int get_stack_height(char* stack)
{
    int i = 0;
    while (stack[i] != ' ') { i++; }
    return i;
}

void add_to_stack(char crate, char* stack)
{
    stack[get_stack_height(stack)] = crate;
}

void move_one_crate(int from, int to, char* stacks)
{
    auto from_stack = stacks + from * 64;
    auto from_stack_height = get_stack_height(from_stack);
    auto to_stack = stacks + to * 64;
    auto to_stack_height = get_stack_height(to_stack);
    if (from_stack_height == 0) { panic(); }

    auto crate = from_stack[from_stack_height - 1];
    from_stack[from_stack_height - 1] = ' ';
    to_stack[to_stack_height] = crate;
}

void move_crates_9000(int how_many, int from, int to, char* stacks)
{
    for (int i = 0; i < how_many; i++)
    {
        move_one_crate(from, to, stacks);
    }
}

void move_crates_9001(int how_many, int from, int to, char* stacks)
{
    auto from_stack = stacks + from * 64;
    auto from_stack_height = get_stack_height(from_stack);
    auto to_stack = stacks + to * 64;
    auto to_stack_height = get_stack_height(to_stack);
    if (from_stack_height < how_many) { panic(); }

    for (int i = 0; i < how_many; i++)
    {
        to_stack[to_stack_height + i] = from_stack[from_stack_height - how_many + i];
        from_stack[from_stack_height - how_many + i] = ' ';
    }
}

int main()
{
    initialize_printing();

    char initial_stacks[9][64]; // 9 stacks each up to 64 crates high

    // initialize stacks
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 64; j++)
        {
            initial_stacks[i][j] = ' ';
        }
    }

    // load the initial stack configuration upside down
    int i;
    char previous_character;
    int stack_index = 0;
    for (i = 0; i < get_length(SOURCE); i++)
    {
        if (SOURCE[i] == '[')
        {
            add_to_stack(SOURCE[i + 1], initial_stacks[stack_index]);
            stack_index++;
            i += 3;
        }
        else if (SOURCE[i] == ' ')
        {
            stack_index++;
            i += 3;
        }
        else if (SOURCE[i] == '\n' && previous_character == '\n')
        {
            i++;
            break;
        }
        else
        {
            panic();
        }

        if (i != 0 && SOURCE[i] == '\n')
        {
            stack_index = 0;
        }

        previous_character = SOURCE[i];
    }

    // reverse the crates vertically to achieve correct configuration
    for (int stack_i = 0; stack_i < 9; stack_i++)
    {
        for (int crate_i = 0; crate_i < get_stack_height(initial_stacks[stack_i]) / 2; crate_i++)
        {
            auto temp = initial_stacks[stack_i][crate_i];
            initial_stacks[stack_i][crate_i] = initial_stacks[stack_i][get_stack_height(initial_stacks[stack_i]) - crate_i - 1];
            initial_stacks[stack_i][get_stack_height(initial_stacks[stack_i]) - crate_i - 1] = temp;
        }
    }

    int original_i = i;
    // follow instructions (part 1)
    {
        char stacks[9][64];
        for (int stack_i = 0; stack_i < 9; stack_i++)
        {
            for (int crate_i = 0; crate_i < 64; crate_i++)
            {
                stacks[stack_i][crate_i] = initial_stacks[stack_i][crate_i];
            }
        }

        while (i < get_length(SOURCE))
        {
            // parsing
            i += sizeof("move ") - 1;
            int how_many = 0;
            for (; is_digit(SOURCE[i]); i++) { how_many = how_many * 10 + SOURCE[i] - '0'; }

            i += sizeof(" from ") - 1;
            int from = 0;
            for (; is_digit(SOURCE[i]); i++) { from = from * 10 + SOURCE[i] - '0'; }
            from--; // 0-based indexing

            i += sizeof(" to ") - 1;
            int to = 0;
            for (; is_digit(SOURCE[i]); i++) { to = to * 10 + SOURCE[i] - '0'; }
            to--; // 0-based indexing

            i += sizeof("\n") - 1;

            // and now the actual logic
            move_crates_9000(how_many, from, to, (char*)stacks);
        }

        print("Answer to part 1: ");
        for (int stack_i = 0; stack_i < 9; stack_i++)
        {
            auto stack = stacks[stack_i];
            auto stack_height = get_stack_height(stack);
            if (stack_height != 0)
            {
                print(stack[stack_height - 1]);
            }
            else
            {
                print(" ");
            }
        }
        print("\n");
    }

    i = original_i;
    // part 2
    {
        char stacks[9][64];
        for (int stack_i = 0; stack_i < 9; stack_i++)
        {
            for (int crate_i = 0; crate_i < 64; crate_i++)
            {
                stacks[stack_i][crate_i] = initial_stacks[stack_i][crate_i];
            }
        }

        while (i < get_length(SOURCE))
        {
            // parsing
            i += sizeof("move ") - 1;
            int how_many = 0;
            for (; is_digit(SOURCE[i]); i++) { how_many = how_many * 10 + SOURCE[i] - '0'; }

            i += sizeof(" from ") - 1;
            int from = 0;
            for (; is_digit(SOURCE[i]); i++) { from = from * 10 + SOURCE[i] - '0'; }
            from--; // 0-based indexing

            i += sizeof(" to ") - 1;
            int to = 0;
            for (; is_digit(SOURCE[i]); i++) { to = to * 10 + SOURCE[i] - '0'; }
            to--; // 0-based indexing

            i += sizeof("\n") - 1;

            // and now the actual logic
            move_crates_9001(how_many, from, to, (char*)stacks);
        }

        print("Answer to part 2: ");
        for (int stack_i = 0; stack_i < 9; stack_i++)
        {
            auto stack = stacks[stack_i];
            auto stack_height = get_stack_height(stack);
            if (stack_height != 0)
            {
                print(stack[stack_height - 1]);
            }
            else
            {
                print(" ");
            }
        }
        print("\n");
    }
}
