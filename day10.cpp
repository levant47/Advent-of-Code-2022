#include "common.cpp"

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
