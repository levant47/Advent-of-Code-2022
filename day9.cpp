#define MEMORY_CAPACITY (512 * 1024)
#include "common.cpp"

char* TEST_SOURCE_1 =
"R 4\n"
"U 4\n"
"L 3\n"
"D 1\n"
"R 4\n"
"D 1\n"
"L 5\n"
"R 2\n"
;

char* TEST_SOURCE_2 =
"R 5\n"
"U 8\n"
"L 8\n"
"D 3\n"
"R 17\n"
"D 10\n"
"L 25\n"
"U 20\n"
;

char* SOURCE =
"R 1\n"
"D 1\n"
"L 1\n"
"D 1\n"
"L 2\n"
"U 2\n"
"D 2\n"
"R 1\n"
"D 1\n"
"L 2\n"
"R 1\n"
"L 2\n"
"R 2\n"
"L 1\n"
"R 2\n"
"D 1\n"
"R 1\n"
"D 2\n"
"U 1\n"
"R 1\n"
"D 2\n"
"R 2\n"
"L 1\n"
"D 1\n"
"R 2\n"
"D 2\n"
"R 1\n"
"L 2\n"
"D 1\n"
"L 2\n"
"D 2\n"
"R 2\n"
"D 2\n"
"L 1\n"
"D 1\n"
"L 1\n"
"D 1\n"
"R 2\n"
"L 2\n"
"R 2\n"
"D 2\n"
"R 2\n"
"D 2\n"
"R 2\n"
"L 2\n"
"R 2\n"
"U 1\n"
"R 1\n"
"D 2\n"
"R 1\n"
"L 1\n"
"U 1\n"
"L 2\n"
"U 1\n"
"D 1\n"
"R 1\n"
"U 1\n"
"R 2\n"
"D 2\n"
"U 2\n"
"D 2\n"
"R 1\n"
"L 1\n"
"U 2\n"
"L 2\n"
"D 2\n"
"L 1\n"
"R 2\n"
"D 1\n"
"R 1\n"
"L 2\n"
"U 2\n"
"R 1\n"
"D 1\n"
"U 2\n"
"L 1\n"
"U 2\n"
"L 1\n"
"R 2\n"
"D 2\n"
"R 1\n"
"D 2\n"
"R 1\n"
"D 1\n"
"R 1\n"
"D 1\n"
"L 2\n"
"D 2\n"
"R 2\n"
"D 2\n"
"R 1\n"
"D 1\n"
"R 2\n"
"L 1\n"
"U 2\n"
"R 2\n"
"D 1\n"
"L 2\n"
"U 1\n"
"D 2\n"
"L 2\n"
"D 2\n"
"L 2\n"
"D 1\n"
"R 1\n"
"L 1\n"
"U 2\n"
"L 2\n"
"D 1\n"
"L 2\n"
"U 1\n"
"L 3\n"
"D 1\n"
"R 1\n"
"U 3\n"
"L 2\n"
"U 1\n"
"D 3\n"
"L 1\n"
"D 2\n"
"R 1\n"
"L 3\n"
"D 2\n"
"L 2\n"
"D 1\n"
"L 1\n"
"R 2\n"
"L 3\n"
"D 2\n"
"L 1\n"
"U 3\n"
"L 1\n"
"R 3\n"
"U 1\n"
"R 3\n"
"U 3\n"
"D 1\n"
"L 2\n"
"U 2\n"
"D 2\n"
"U 3\n"
"D 3\n"
"L 1\n"
"U 3\n"
"D 3\n"
"L 3\n"
"R 1\n"
"D 1\n"
"U 2\n"
"R 1\n"
"U 3\n"
"L 3\n"
"D 2\n"
"L 3\n"
"D 1\n"
"R 2\n"
"U 1\n"
"D 2\n"
"L 3\n"
"D 2\n"
"U 2\n"
"R 1\n"
"L 3\n"
"R 2\n"
"L 2\n"
"U 2\n"
"R 2\n"
"L 1\n"
"D 1\n"
"U 3\n"
"D 1\n"
"R 2\n"
"L 1\n"
"U 1\n"
"R 1\n"
"L 1\n"
"D 2\n"
"L 1\n"
"D 1\n"
"L 1\n"
"D 3\n"
"U 3\n"
"D 3\n"
"R 3\n"
"D 2\n"
"L 1\n"
"R 1\n"
"L 1\n"
"D 3\n"
"L 2\n"
"D 1\n"
"R 1\n"
"D 3\n"
"U 3\n"
"L 2\n"
"D 1\n"
"U 1\n"
"D 1\n"
"U 3\n"
"R 2\n"
"L 1\n"
"D 3\n"
"U 3\n"
"D 3\n"
"U 2\n"
"L 1\n"
"R 1\n"
"U 1\n"
"D 3\n"
"R 2\n"
"U 1\n"
"L 2\n"
"U 1\n"
"L 2\n"
"U 2\n"
"D 1\n"
"L 3\n"
"U 1\n"
"R 1\n"
"L 2\n"
"U 1\n"
"D 2\n"
"L 1\n"
"D 4\n"
"L 3\n"
"D 4\n"
"R 2\n"
"D 2\n"
"L 3\n"
"U 2\n"
"L 3\n"
"D 1\n"
"L 4\n"
"R 2\n"
"D 1\n"
"U 4\n"
"L 3\n"
"D 1\n"
"R 1\n"
"D 4\n"
"R 4\n"
"U 3\n"
"D 3\n"
"L 3\n"
"D 3\n"
"U 1\n"
"R 4\n"
"L 2\n"
"D 1\n"
"R 3\n"
"L 4\n"
"D 1\n"
"R 2\n"
"L 4\n"
"U 3\n"
"L 4\n"
"R 1\n"
"L 3\n"
"D 1\n"
"U 4\n"
"L 4\n"
"R 3\n"
"U 4\n"
"D 3\n"
"U 2\n"
"R 3\n"
"D 1\n"
"R 3\n"
"L 3\n"
"D 2\n"
"U 4\n"
"R 3\n"
"U 4\n"
"L 4\n"
"R 4\n"
"L 2\n"
"R 2\n"
"D 3\n"
"L 2\n"
"U 1\n"
"L 4\n"
"U 3\n"
"R 3\n"
"L 4\n"
"U 1\n"
"L 1\n"
"U 1\n"
"D 2\n"
"R 1\n"
"U 1\n"
"L 3\n"
"R 4\n"
"L 2\n"
"D 4\n"
"R 3\n"
"L 2\n"
"R 1\n"
"L 4\n"
"R 1\n"
"D 2\n"
"R 4\n"
"L 3\n"
"U 3\n"
"L 3\n"
"D 1\n"
"R 2\n"
"L 4\n"
"D 2\n"
"R 3\n"
"U 2\n"
"D 3\n"
"R 2\n"
"U 4\n"
"L 1\n"
"U 2\n"
"D 2\n"
"L 1\n"
"D 4\n"
"R 3\n"
"L 3\n"
"R 4\n"
"D 1\n"
"U 2\n"
"R 2\n"
"D 1\n"
"L 3\n"
"U 2\n"
"L 3\n"
"R 1\n"
"D 1\n"
"R 4\n"
"L 4\n"
"R 1\n"
"U 3\n"
"R 4\n"
"L 3\n"
"D 3\n"
"L 4\n"
"R 4\n"
"D 5\n"
"R 2\n"
"U 5\n"
"L 1\n"
"D 5\n"
"L 5\n"
"R 1\n"
"L 5\n"
"U 5\n"
"L 3\n"
"D 3\n"
"L 2\n"
"D 1\n"
"L 1\n"
"U 1\n"
"L 1\n"
"D 2\n"
"L 3\n"
"U 2\n"
"D 3\n"
"L 4\n"
"R 5\n"
"U 2\n"
"L 3\n"
"D 3\n"
"R 4\n"
"U 3\n"
"D 5\n"
"U 1\n"
"R 3\n"
"L 3\n"
"D 1\n"
"U 2\n"
"L 3\n"
"R 5\n"
"D 2\n"
"R 2\n"
"U 4\n"
"L 2\n"
"R 4\n"
"D 5\n"
"R 2\n"
"U 2\n"
"D 5\n"
"L 3\n"
"R 2\n"
"D 2\n"
"L 1\n"
"U 2\n"
"R 1\n"
"D 2\n"
"U 1\n"
"L 2\n"
"U 5\n"
"R 1\n"
"U 4\n"
"D 1\n"
"R 4\n"
"U 4\n"
"R 3\n"
"D 1\n"
"U 2\n"
"L 5\n"
"U 1\n"
"L 3\n"
"D 1\n"
"U 5\n"
"D 5\n"
"U 1\n"
"L 3\n"
"D 1\n"
"R 2\n"
"L 4\n"
"R 4\n"
"L 2\n"
"U 2\n"
"R 5\n"
"U 1\n"
"R 5\n"
"L 1\n"
"D 1\n"
"R 3\n"
"D 2\n"
"R 4\n"
"L 5\n"
"D 3\n"
"L 3\n"
"U 5\n"
"R 2\n"
"D 5\n"
"L 1\n"
"U 2\n"
"D 2\n"
"U 4\n"
"R 4\n"
"L 4\n"
"U 1\n"
"D 1\n"
"U 4\n"
"R 4\n"
"D 3\n"
"L 4\n"
"R 2\n"
"D 3\n"
"R 5\n"
"U 4\n"
"L 4\n"
"R 4\n"
"L 2\n"
"U 4\n"
"R 4\n"
"D 1\n"
"R 3\n"
"D 6\n"
"U 6\n"
"D 5\n"
"L 4\n"
"R 2\n"
"D 5\n"
"R 5\n"
"D 3\n"
"R 3\n"
"U 3\n"
"D 3\n"
"U 2\n"
"L 2\n"
"R 6\n"
"L 6\n"
"D 1\n"
"L 4\n"
"R 6\n"
"D 5\n"
"L 2\n"
"R 4\n"
"U 2\n"
"L 5\n"
"R 6\n"
"U 6\n"
"D 1\n"
"U 3\n"
"D 3\n"
"R 1\n"
"L 4\n"
"D 2\n"
"U 1\n"
"L 2\n"
"R 1\n"
"D 3\n"
"U 5\n"
"R 1\n"
"D 2\n"
"U 5\n"
"D 5\n"
"R 3\n"
"U 2\n"
"D 4\n"
"U 2\n"
"R 5\n"
"U 4\n"
"R 2\n"
"L 4\n"
"U 5\n"
"L 3\n"
"D 1\n"
"R 3\n"
"U 3\n"
"L 1\n"
"U 1\n"
"L 2\n"
"R 5\n"
"U 2\n"
"D 4\n"
"R 1\n"
"D 5\n"
"L 6\n"
"R 6\n"
"U 2\n"
"D 4\n"
"R 4\n"
"D 4\n"
"L 6\n"
"D 3\n"
"U 1\n"
"L 4\n"
"U 5\n"
"R 3\n"
"D 3\n"
"R 6\n"
"D 3\n"
"R 6\n"
"D 1\n"
"L 3\n"
"R 4\n"
"D 5\n"
"R 4\n"
"D 6\n"
"R 3\n"
"U 6\n"
"R 4\n"
"U 1\n"
"D 4\n"
"L 2\n"
"D 4\n"
"L 2\n"
"U 2\n"
"R 4\n"
"D 4\n"
"L 1\n"
"D 4\n"
"U 4\n"
"D 6\n"
"U 3\n"
"D 1\n"
"L 2\n"
"D 5\n"
"R 2\n"
"D 2\n"
"L 5\n"
"R 4\n"
"L 5\n"
"R 5\n"
"U 6\n"
"L 1\n"
"R 3\n"
"U 5\n"
"D 1\n"
"U 2\n"
"R 2\n"
"D 4\n"
"R 4\n"
"D 6\n"
"R 4\n"
"L 4\n"
"D 2\n"
"R 6\n"
"L 1\n"
"D 1\n"
"U 3\n"
"R 1\n"
"D 4\n"
"L 1\n"
"D 3\n"
"U 5\n"
"R 2\n"
"U 2\n"
"D 6\n"
"L 5\n"
"U 4\n"
"L 5\n"
"R 3\n"
"U 7\n"
"R 2\n"
"D 1\n"
"R 6\n"
"D 6\n"
"U 6\n"
"R 5\n"
"D 5\n"
"R 6\n"
"D 6\n"
"R 6\n"
"D 5\n"
"U 5\n"
"D 7\n"
"L 4\n"
"U 3\n"
"D 3\n"
"U 2\n"
"L 2\n"
"U 4\n"
"D 1\n"
"R 7\n"
"U 4\n"
"L 1\n"
"D 4\n"
"L 3\n"
"R 6\n"
"L 1\n"
"R 2\n"
"L 4\n"
"R 5\n"
"U 6\n"
"D 6\n"
"U 2\n"
"R 5\n"
"U 4\n"
"L 5\n"
"U 3\n"
"D 1\n"
"L 6\n"
"R 2\n"
"D 2\n"
"L 3\n"
"U 5\n"
"R 6\n"
"U 7\n"
"R 1\n"
"L 7\n"
"D 5\n"
"U 5\n"
"D 2\n"
"R 4\n"
"U 2\n"
"L 7\n"
"R 4\n"
"D 7\n"
"U 4\n"
"D 3\n"
"R 2\n"
"D 3\n"
"L 3\n"
"U 6\n"
"R 2\n"
"L 6\n"
"D 2\n"
"R 6\n"
"L 3\n"
"R 4\n"
"U 1\n"
"D 3\n"
"U 2\n"
"L 4\n"
"D 6\n"
"U 7\n"
"D 4\n"
"L 3\n"
"R 1\n"
"U 6\n"
"L 3\n"
"R 3\n"
"U 7\n"
"R 7\n"
"U 6\n"
"L 1\n"
"U 8\n"
"L 1\n"
"D 8\n"
"L 6\n"
"R 3\n"
"L 7\n"
"D 5\n"
"U 8\n"
"R 5\n"
"L 4\n"
"U 8\n"
"L 3\n"
"D 2\n"
"U 1\n"
"R 8\n"
"D 8\n"
"R 7\n"
"U 1\n"
"D 2\n"
"R 6\n"
"L 8\n"
"D 5\n"
"L 6\n"
"U 1\n"
"R 2\n"
"U 6\n"
"L 3\n"
"D 6\n"
"U 2\n"
"R 2\n"
"D 1\n"
"U 4\n"
"L 8\n"
"D 8\n"
"R 1\n"
"L 2\n"
"R 2\n"
"D 7\n"
"U 5\n"
"D 8\n"
"L 1\n"
"R 7\n"
"L 8\n"
"D 2\n"
"R 8\n"
"D 7\n"
"U 3\n"
"R 3\n"
"U 3\n"
"D 1\n"
"L 2\n"
"U 6\n"
"D 7\n"
"U 8\n"
"R 6\n"
"D 6\n"
"R 5\n"
"U 7\n"
"R 8\n"
"L 1\n"
"U 7\n"
"D 2\n"
"R 6\n"
"U 7\n"
"R 3\n"
"D 3\n"
"R 3\n"
"U 4\n"
"D 8\n"
"L 7\n"
"R 5\n"
"U 1\n"
"L 6\n"
"R 8\n"
"D 6\n"
"R 4\n"
"L 4\n"
"D 1\n"
"U 5\n"
"L 6\n"
"U 1\n"
"D 8\n"
"U 2\n"
"R 4\n"
"L 2\n"
"R 8\n"
"D 1\n"
"R 1\n"
"L 4\n"
"R 7\n"
"U 7\n"
"D 8\n"
"R 8\n"
"L 6\n"
"U 7\n"
"L 4\n"
"D 2\n"
"R 2\n"
"U 5\n"
"D 1\n"
"R 5\n"
"L 6\n"
"U 8\n"
"L 1\n"
"R 7\n"
"D 8\n"
"L 3\n"
"D 2\n"
"U 3\n"
"D 3\n"
"L 1\n"
"R 3\n"
"L 7\n"
"D 6\n"
"R 4\n"
"D 1\n"
"U 8\n"
"L 3\n"
"D 6\n"
"L 7\n"
"U 5\n"
"R 6\n"
"D 2\n"
"L 4\n"
"R 9\n"
"D 2\n"
"R 4\n"
"D 6\n"
"R 5\n"
"L 7\n"
"R 5\n"
"U 7\n"
"R 1\n"
"L 5\n"
"U 6\n"
"R 4\n"
"D 8\n"
"U 5\n"
"L 4\n"
"U 1\n"
"D 8\n"
"U 9\n"
"D 4\n"
"U 7\n"
"L 4\n"
"R 8\n"
"D 4\n"
"R 4\n"
"D 8\n"
"R 1\n"
"D 3\n"
"R 5\n"
"D 7\n"
"U 8\n"
"D 2\n"
"R 2\n"
"U 1\n"
"L 1\n"
"U 2\n"
"L 9\n"
"R 9\n"
"D 1\n"
"U 1\n"
"D 8\n"
"R 3\n"
"L 8\n"
"D 7\n"
"U 9\n"
"R 6\n"
"L 4\n"
"U 8\n"
"D 4\n"
"U 2\n"
"L 3\n"
"D 8\n"
"L 2\n"
"R 5\n"
"U 4\n"
"D 6\n"
"U 6\n"
"L 8\n"
"R 7\n"
"D 2\n"
"R 3\n"
"L 8\n"
"U 9\n"
"R 2\n"
"U 4\n"
"L 9\n"
"R 5\n"
"D 5\n"
"R 4\n"
"D 6\n"
"R 3\n"
"D 3\n"
"R 8\n"
"D 3\n"
"R 4\n"
"D 1\n"
"U 2\n"
"D 6\n"
"R 4\n"
"D 7\n"
"U 5\n"
"D 2\n"
"R 6\n"
"D 3\n"
"U 3\n"
"R 4\n"
"U 5\n"
"L 3\n"
"U 5\n"
"L 8\n"
"D 3\n"
"L 8\n"
"D 5\n"
"R 4\n"
"L 8\n"
"R 5\n"
"U 8\n"
"R 10\n"
"D 2\n"
"U 10\n"
"R 1\n"
"D 1\n"
"L 4\n"
"D 9\n"
"L 6\n"
"U 2\n"
"R 3\n"
"D 2\n"
"L 6\n"
"R 2\n"
"L 10\n"
"D 2\n"
"L 10\n"
"U 3\n"
"L 2\n"
"D 8\n"
"U 10\n"
"R 5\n"
"L 1\n"
"U 8\n"
"R 9\n"
"D 8\n"
"U 2\n"
"R 4\n"
"U 3\n"
"D 2\n"
"U 4\n"
"D 2\n"
"R 3\n"
"L 2\n"
"U 4\n"
"D 1\n"
"U 9\n"
"R 2\n"
"U 1\n"
"R 3\n"
"D 3\n"
"L 3\n"
"R 2\n"
"D 1\n"
"U 8\n"
"D 1\n"
"L 5\n"
"R 4\n"
"L 8\n"
"D 3\n"
"L 1\n"
"U 10\n"
"R 9\n"
"D 9\n"
"U 9\n"
"D 1\n"
"R 6\n"
"L 6\n"
"U 6\n"
"L 1\n"
"D 5\n"
"L 4\n"
"U 8\n"
"L 10\n"
"U 9\n"
"R 9\n"
"D 5\n"
"U 4\n"
"D 7\n"
"R 5\n"
"U 10\n"
"D 5\n"
"U 1\n"
"R 5\n"
"L 7\n"
"D 9\n"
"R 5\n"
"L 3\n"
"U 2\n"
"D 6\n"
"R 4\n"
"D 7\n"
"U 4\n"
"R 8\n"
"L 5\n"
"R 8\n"
"L 9\n"
"R 8\n"
"D 1\n"
"R 1\n"
"L 9\n"
"D 7\n"
"L 10\n"
"D 6\n"
"R 8\n"
"U 4\n"
"D 4\n"
"R 7\n"
"L 9\n"
"D 9\n"
"R 9\n"
"L 1\n"
"R 6\n"
"L 7\n"
"R 10\n"
"L 1\n"
"U 9\n"
"D 11\n"
"R 4\n"
"D 4\n"
"U 5\n"
"R 8\n"
"U 9\n"
"L 8\n"
"D 8\n"
"L 10\n"
"U 10\n"
"L 4\n"
"D 1\n"
"L 3\n"
"U 7\n"
"D 11\n"
"U 4\n"
"L 7\n"
"R 2\n"
"U 9\n"
"D 4\n"
"R 4\n"
"U 1\n"
"L 5\n"
"U 10\n"
"R 4\n"
"D 3\n"
"L 9\n"
"R 2\n"
"L 3\n"
"U 5\n"
"D 6\n"
"U 2\n"
"R 7\n"
"D 7\n"
"R 4\n"
"L 8\n"
"U 5\n"
"R 1\n"
"U 4\n"
"D 3\n"
"U 5\n"
"R 9\n"
"D 2\n"
"R 4\n"
"D 8\n"
"U 9\n"
"R 7\n"
"U 5\n"
"D 3\n"
"R 6\n"
"L 7\n"
"U 7\n"
"R 10\n"
"L 3\n"
"U 10\n"
"L 8\n"
"R 11\n"
"L 3\n"
"U 10\n"
"R 5\n"
"D 1\n"
"U 7\n"
"R 6\n"
"U 9\n"
"L 3\n"
"R 9\n"
"L 4\n"
"R 9\n"
"L 5\n"
"R 9\n"
"D 5\n"
"U 8\n"
"R 7\n"
"L 7\n"
"R 4\n"
"L 9\n"
"R 9\n"
"D 7\n"
"R 2\n"
"L 3\n"
"U 1\n"
"L 1\n"
"D 11\n"
"U 3\n"
"D 5\n"
"R 3\n"
"U 11\n"
"L 1\n"
"U 7\n"
"R 8\n"
"D 8\n"
"U 7\n"
"D 7\n"
"R 6\n"
"D 3\n"
"R 8\n"
"L 9\n"
"U 10\n"
"D 10\n"
"L 1\n"
"D 9\n"
"L 1\n"
"R 5\n"
"D 6\n"
"U 5\n"
"L 1\n"
"R 10\n"
"L 1\n"
"U 7\n"
"D 11\n"
"R 8\n"
"U 11\n"
"L 6\n"
"R 4\n"
"U 7\n"
"R 3\n"
"L 8\n"
"D 8\n"
"L 12\n"
"U 3\n"
"D 12\n"
"L 6\n"
"R 1\n"
"U 8\n"
"R 3\n"
"U 4\n"
"L 3\n"
"D 10\n"
"L 9\n"
"D 6\n"
"L 12\n"
"R 11\n"
"D 4\n"
"U 4\n"
"L 12\n"
"R 1\n"
"U 1\n"
"D 10\n"
"L 11\n"
"R 3\n"
"D 4\n"
"R 4\n"
"U 4\n"
"D 3\n"
"U 10\n"
"R 9\n"
"U 9\n"
"L 1\n"
"U 10\n"
"D 11\n"
"U 4\n"
"D 3\n"
"L 10\n"
"R 5\n"
"D 8\n"
"R 5\n"
"U 6\n"
"R 12\n"
"L 10\n"
"U 10\n"
"D 2\n"
"L 6\n"
"U 5\n"
"D 3\n"
"R 2\n"
"D 3\n"
"U 7\n"
"D 1\n"
"L 5\n"
"U 9\n"
"D 3\n"
"U 10\n"
"L 10\n"
"U 4\n"
"L 12\n"
"R 11\n"
"D 2\n"
"L 10\n"
"U 6\n"
"L 4\n"
"D 5\n"
"R 3\n"
"L 4\n"
"D 8\n"
"U 7\n"
"R 12\n"
"D 1\n"
"U 5\n"
"L 2\n"
"D 7\n"
"R 3\n"
"U 1\n"
"L 10\n"
"R 9\n"
"L 7\n"
"R 8\n"
"U 9\n"
"R 9\n"
"U 1\n"
"L 7\n"
"D 6\n"
"L 1\n"
"R 11\n"
"L 9\n"
"U 12\n"
"R 8\n"
"U 3\n"
"R 5\n"
"U 5\n"
"L 12\n"
"R 7\n"
"L 8\n"
"R 11\n"
"L 4\n"
"R 10\n"
"D 2\n"
"L 4\n"
"U 12\n"
"R 5\n"
"D 1\n"
"L 12\n"
"D 1\n"
"L 5\n"
"D 3\n"
"U 8\n"
"L 5\n"
"U 5\n"
"R 7\n"
"D 1\n"
"L 3\n"
"D 9\n"
"L 12\n"
"R 5\n"
"D 12\n"
"U 6\n"
"L 7\n"
"D 6\n"
"L 5\n"
"U 6\n"
"R 7\n"
"U 5\n"
"D 8\n"
"R 11\n"
"D 12\n"
"R 10\n"
"L 11\n"
"R 6\n"
"L 13\n"
"D 3\n"
"L 2\n"
"U 4\n"
"D 12\n"
"U 8\n"
"D 6\n"
"R 2\n"
"D 2\n"
"R 13\n"
"U 1\n"
"D 6\n"
"R 8\n"
"D 12\n"
"L 8\n"
"R 4\n"
"L 7\n"
"R 8\n"
"D 9\n"
"U 3\n"
"L 1\n"
"U 3\n"
"L 10\n"
"R 12\n"
"U 13\n"
"R 7\n"
"U 1\n"
"D 13\n"
"U 6\n"
"L 13\n"
"D 11\n"
"U 8\n"
"L 10\n"
"D 13\n"
"R 11\n"
"L 8\n"
"D 5\n"
"U 11\n"
"R 1\n"
"D 9\n"
"L 4\n"
"D 12\n"
"R 13\n"
"L 11\n"
"D 7\n"
"L 9\n"
"U 8\n"
"L 13\n"
"D 11\n"
"L 10\n"
"R 4\n"
"U 4\n"
"D 4\n"
"L 5\n"
"D 7\n"
"L 12\n"
"U 10\n"
"R 3\n"
"L 10\n"
"U 2\n"
"L 2\n"
"R 8\n"
"L 6\n"
"U 11\n"
"L 4\n"
"D 4\n"
"U 9\n"
"L 1\n"
"R 12\n"
"D 12\n"
"R 13\n"
"D 8\n"
"R 8\n"
"L 12\n"
"U 5\n"
"D 8\n"
"L 7\n"
"D 13\n"
"U 12\n"
"D 12\n"
"R 10\n"
"U 10\n"
"R 13\n"
"D 9\n"
"R 3\n"
"U 13\n"
"L 12\n"
"R 6\n"
"U 14\n"
"D 11\n"
"R 14\n"
"L 2\n"
"R 5\n"
"U 6\n"
"R 10\n"
"U 6\n"
"L 3\n"
"R 8\n"
"U 7\n"
"L 3\n"
"D 4\n"
"R 13\n"
"L 10\n"
"D 5\n"
"U 10\n"
"R 13\n"
"L 6\n"
"R 6\n"
"L 1\n"
"D 4\n"
"U 10\n"
"R 14\n"
"U 7\n"
"L 11\n"
"R 14\n"
"D 11\n"
"R 8\n"
"D 2\n"
"U 13\n"
"L 5\n"
"R 10\n"
"D 6\n"
"U 7\n"
"D 7\n"
"L 6\n"
"U 11\n"
"L 4\n"
"D 11\n"
"L 9\n"
"R 6\n"
"L 5\n"
"U 14\n"
"R 2\n"
"D 1\n"
"U 12\n"
"L 3\n"
"U 3\n"
"D 2\n"
"U 3\n"
"L 7\n"
"U 10\n"
"D 2\n"
"R 9\n"
"L 8\n"
"U 10\n"
"D 4\n"
"R 7\n"
"U 4\n"
"L 8\n"
"R 3\n"
"L 6\n"
"D 2\n"
"R 11\n"
"L 2\n"
"D 12\n"
"U 14\n"
"L 1\n"
"R 1\n"
"U 12\n"
"R 3\n"
"L 14\n"
"U 9\n"
"D 7\n"
"L 3\n"
"U 8\n"
"R 9\n"
"L 4\n"
"U 7\n"
"D 4\n"
"R 5\n"
"D 7\n"
"R 11\n"
"L 13\n"
"R 3\n"
"D 10\n"
"R 11\n"
"U 6\n"
"L 4\n"
"D 9\n"
"R 4\n"
"U 5\n"
"D 9\n"
"R 13\n"
"D 6\n"
"R 11\n"
"L 1\n"
"D 1\n"
"R 13\n"
"U 4\n"
"L 9\n"
"U 14\n"
"L 9\n"
"R 2\n"
"D 2\n"
"L 7\n"
"D 13\n"
"L 11\n"
"D 8\n"
"R 4\n"
"L 7\n"
"R 4\n"
"U 12\n"
"D 5\n"
"R 13\n"
"D 14\n"
"R 7\n"
"U 6\n"
"R 2\n"
"U 13\n"
"L 7\n"
"U 14\n"
"R 11\n"
"U 15\n"
"R 8\n"
"U 7\n"
"D 7\n"
"L 5\n"
"U 2\n"
"D 13\n"
"U 11\n"
"L 12\n"
"R 6\n"
"D 13\n"
"L 6\n"
"U 8\n"
"L 3\n"
"R 15\n"
"L 13\n"
"D 1\n"
"U 2\n"
"L 14\n"
"D 8\n"
"L 4\n"
"U 6\n"
"R 11\n"
"D 11\n"
"R 2\n"
"U 13\n"
"L 13\n"
"R 2\n"
"U 15\n"
"R 3\n"
"D 4\n"
"L 7\n"
"R 7\n"
"D 7\n"
"R 7\n"
"L 13\n"
"R 10\n"
"U 8\n"
"R 13\n"
"L 2\n"
"U 13\n"
"D 8\n"
"U 15\n"
"L 4\n"
"D 13\n"
"R 13\n"
"U 8\n"
"R 3\n"
"L 11\n"
"R 12\n"
"U 2\n"
"L 13\n"
"U 1\n"
"L 9\n"
"U 11\n"
"D 14\n"
"R 12\n"
"D 6\n"
"U 6\n"
"D 12\n"
"U 8\n"
"R 3\n"
"U 4\n"
"R 8\n"
"U 2\n"
"D 5\n"
"L 12\n"
"U 14\n"
"D 4\n"
"R 1\n"
"U 10\n"
"L 10\n"
"R 6\n"
"D 13\n"
"U 11\n"
"D 11\n"
"U 11\n"
"R 14\n"
"D 15\n"
"L 11\n"
"U 14\n"
"D 7\n"
"L 12\n"
"D 3\n"
"L 14\n"
"U 7\n"
"R 1\n"
"U 5\n"
"L 1\n"
"R 15\n"
"U 13\n"
"D 7\n"
"R 9\n"
"L 15\n"
"U 15\n"
"L 15\n"
"D 7\n"
"R 15\n"
"D 3\n"
"U 5\n"
"L 8\n"
"R 13\n"
"L 15\n"
"D 8\n"
"L 15\n"
"D 12\n"
"L 5\n"
"D 14\n"
"U 16\n"
"R 11\n"
"L 14\n"
"R 6\n"
"L 10\n"
"U 11\n"
"R 8\n"
"U 16\n"
"L 6\n"
"U 9\n"
"L 13\n"
"D 14\n"
"R 7\n"
"D 10\n"
"L 15\n"
"D 1\n"
"L 10\n"
"D 1\n"
"R 2\n"
"U 15\n"
"L 9\n"
"U 6\n"
"D 3\n"
"L 8\n"
"D 13\n"
"U 16\n"
"D 12\n"
"R 2\n"
"L 1\n"
"D 8\n"
"L 15\n"
"R 14\n"
"D 8\n"
"L 9\n"
"U 12\n"
"R 3\n"
"U 15\n"
"D 10\n"
"U 13\n"
"R 8\n"
"L 15\n"
"D 9\n"
"R 8\n"
"L 9\n"
"U 2\n"
"R 7\n"
"L 11\n"
"R 3\n"
"D 13\n"
"U 16\n"
"L 9\n"
"U 6\n"
"L 7\n"
"U 4\n"
"L 16\n"
"U 16\n"
"L 12\n"
"U 9\n"
"R 8\n"
"D 13\n"
"L 2\n"
"R 15\n"
"D 7\n"
"U 15\n"
"D 16\n"
"R 12\n"
"L 12\n"
"U 8\n"
"L 8\n"
"D 3\n"
"R 16\n"
"L 3\n"
"U 13\n"
"R 1\n"
"L 5\n"
"R 10\n"
"U 13\n"
"D 7\n"
"R 3\n"
"D 10\n"
"L 2\n"
"R 1\n"
"U 4\n"
"L 13\n"
"U 15\n"
"R 4\n"
"D 1\n"
"R 2\n"
"L 5\n"
"D 3\n"
"L 1\n"
"R 4\n"
"L 1\n"
"U 1\n"
"D 7\n"
"R 9\n"
"L 12\n"
"R 13\n"
"D 5\n"
"R 5\n"
"D 9\n"
"L 15\n"
"R 17\n"
"D 4\n"
"R 2\n"
"U 1\n"
"D 1\n"
"R 3\n"
"L 15\n"
"D 10\n"
"L 8\n"
"U 16\n"
"L 14\n"
"U 12\n"
"R 5\n"
"L 13\n"
"D 10\n"
"L 15\n"
"D 12\n"
"U 4\n"
"D 8\n"
"R 9\n"
"L 17\n"
"D 17\n"
"U 3\n"
"D 2\n"
"L 14\n"
"D 12\n"
"L 5\n"
"D 9\n"
"L 3\n"
"R 10\n"
"U 1\n"
"R 9\n"
"U 16\n"
"L 14\n"
"R 13\n"
"L 11\n"
"R 4\n"
"U 2\n"
"L 10\n"
"D 6\n"
"R 5\n"
"D 17\n"
"L 15\n"
"R 12\n"
"U 15\n"
"L 9\n"
"U 9\n"
"D 3\n"
"R 8\n"
"U 6\n"
"R 8\n"
"U 9\n"
"D 14\n"
"R 7\n"
"U 1\n"
"L 3\n"
"R 3\n"
"D 2\n"
"U 4\n"
"R 5\n"
"L 17\n"
"D 16\n"
"U 13\n"
"D 5\n"
"U 6\n"
"R 2\n"
"U 5\n"
"D 7\n"
"U 11\n"
"R 6\n"
"L 17\n"
"R 4\n"
"L 14\n"
"D 3\n"
"U 15\n"
"L 5\n"
"R 4\n"
"U 1\n"
"D 16\n"
"L 16\n"
"U 10\n"
"L 10\n"
"D 17\n"
"R 6\n"
"D 2\n"
"U 10\n"
"L 10\n"
"D 12\n"
"R 15\n"
"L 4\n"
"R 11\n"
"L 17\n"
"U 15\n"
"L 8\n"
"U 8\n"
"L 16\n"
"D 6\n"
"L 7\n"
"U 17\n"
"L 14\n"
"D 6\n"
"L 5\n"
"R 14\n"
"U 5\n"
"D 1\n"
"U 2\n"
"D 17\n"
"R 14\n"
"L 1\n"
"R 4\n"
"D 7\n"
"L 8\n"
"U 7\n"
"D 6\n"
"L 16\n"
"U 5\n"
"D 7\n"
"R 7\n"
"D 17\n"
"L 16\n"
"R 1\n"
"D 5\n"
"U 17\n"
"L 2\n"
"U 7\n"
"L 16\n"
"U 15\n"
"L 17\n"
"D 3\n"
"L 2\n"
"R 7\n"
"L 11\n"
"R 1\n"
"L 16\n"
"U 2\n"
"L 1\n"
"R 18\n"
"U 5\n"
"L 9\n"
"U 4\n"
"D 8\n"
"U 4\n"
"L 18\n"
"D 17\n"
"L 14\n"
"D 2\n"
"R 1\n"
"U 13\n"
"L 9\n"
"R 14\n"
"D 14\n"
"U 12\n"
"D 14\n"
"L 2\n"
"U 10\n"
"D 11\n"
"R 10\n"
"L 9\n"
"U 7\n"
"D 12\n"
"L 4\n"
"D 2\n"
"R 17\n"
"D 1\n"
"U 15\n"
"R 14\n"
"D 16\n"
"L 1\n"
"R 11\n"
"U 9\n"
"R 8\n"
"U 6\n"
"D 7\n"
"U 7\n"
"L 2\n"
"D 10\n"
"U 9\n"
"D 9\n"
"L 11\n"
"D 11\n"
"L 14\n"
"U 16\n"
"D 11\n"
"L 17\n"
"R 5\n"
"L 13\n"
"U 16\n"
"R 16\n"
"U 18\n"
"D 1\n"
"R 1\n"
"U 13\n"
"R 6\n"
"L 7\n"
"U 11\n"
"D 12\n"
"L 8\n"
"U 17\n"
"D 11\n"
"U 8\n"
"L 14\n"
"U 17\n"
"L 4\n"
"U 18\n"
"D 18\n"
"R 8\n"
"D 13\n"
"L 10\n"
"U 3\n"
"R 9\n"
"L 14\n"
"R 7\n"
"U 14\n"
"R 14\n"
"L 9\n"
"U 5\n"
"R 4\n"
"D 13\n"
"U 10\n"
"D 1\n"
"R 10\n"
"D 4\n"
"R 3\n"
"U 14\n"
"D 10\n"
"U 12\n"
"L 11\n"
"U 9\n"
"L 16\n"
"R 5\n"
"L 14\n"
"D 4\n"
"U 11\n"
"L 2\n"
"R 10\n"
"U 8\n"
"D 9\n"
"L 2\n"
"R 16\n"
"L 1\n"
"R 12\n"
"U 7\n"
"D 11\n"
"U 18\n"
"D 4\n"
"R 8\n"
"U 18\n"
"D 5\n"
"R 15\n"
"U 16\n"
"L 2\n"
"D 15\n"
"U 5\n"
"D 10\n"
"U 18\n"
"L 7\n"
"U 4\n"
"R 2\n"
"U 17\n"
"L 2\n"
"R 3\n"
"D 2\n"
"L 2\n"
"U 3\n"
"R 10\n"
"L 8\n"
"U 4\n"
"L 18\n"
"U 6\n"
"D 11\n"
"R 13\n"
"D 9\n"
"U 10\n"
"L 16\n"
"R 15\n"
"L 4\n"
"D 1\n"
"L 5\n"
"D 7\n"
"U 18\n"
"L 5\n"
"R 7\n"
"L 15\n"
"U 4\n"
"L 6\n"
"U 19\n"
"D 19\n"
"L 2\n"
"R 2\n"
"L 19\n"
"D 9\n"
"L 14\n"
"U 18\n"
"D 12\n"
"R 19\n"
"U 15\n"
"L 16\n"
"U 9\n"
"L 11\n"
"R 5\n"
"L 14\n"
"R 16\n"
"U 19\n"
"D 7\n"
"U 8\n"
"R 6\n"
"U 14\n"
"R 17\n"
"D 9\n"
"L 5\n"
"U 3\n"
"D 9\n"
"U 8\n"
"L 4\n"
"U 12\n"
"D 12\n"
"R 13\n"
"U 3\n"
"R 18\n"
"U 5\n"
"L 12\n"
"U 4\n"
"L 1\n"
"D 14\n"
"R 5\n"
"L 19\n"
"U 17\n"
"R 18\n"
"D 11\n"
"L 4\n"
"U 18\n"
"L 9\n"
;

struct Point
{
    int x;
    int y;
};

struct Points
{
    int count;
    int capacity;
    Point* data;
};

Points make_points(int capacity)
{
    Points result;
    result.count = 0;
    result.capacity = capacity;
    result.data = (Point*)allocate(sizeof(Point) * result.capacity);
    return result;
}

void add_visited(Point point, Points* visited)
{
    if (visited->count == visited->capacity) { panic(); }

    for (int i = 0; i < visited->count; i++)
    {
        if (visited->data[i].x == point.x && visited->data[i].y == point.y)
        {
            return;
        }
    }
    visited->data[visited->count] = point;
    visited->count++;
}

void execute_move(char move, Point* head)
{
    switch (move)
    {
        case 'U':
            head->y++;
            break;
        case 'D':
            head->y--;
            break;
        case 'R':
            head->x++;
            break;
        case 'L':
            head->x--;
            break;
        default: panic();
    }
}

void follow(Point* tail, Point* head)
{
    // my original solution
    int x_diff = myabs(head->x - tail->x);
    int y_diff = myabs(head->y - tail->y);
    if (x_diff > 1 || y_diff > 1)
    {
        if (y_diff > x_diff)
        {
            tail->x = head->x;
            if (head->y < tail->y) { tail->y = head->y + 1; }
            else { tail->y = head->y - 1; }
        }
        else if (y_diff == x_diff)
        {
            if (head->y < tail->y) { tail->y = head->y + 1; }
            else { tail->y = head->y - 1; }
            if (head->x < tail->x) { tail->x = head->x + 1; }
            else { tail->x = head->x - 1; }
        }
        else
        {
            tail->y = head->y;
            if (head->x < tail->x) { tail->x = head->x + 1; }
            else { tail->x = head->x - 1; }
        }
    }
    /* what I think is the intended solution that I found on the Internet
    while (abs(head->x - tail->x) > 1 || abs(head->y - tail->y) > 1)
    {
        if (head->x > tail->x) { tail->x++; }
        else if (head->x < tail->x) { tail->x--; }
        if (head->y > tail->y) { tail->y++; }
        else if (head->y < tail->y) { tail->y--; }
    }
    */
}

int solve(int rope_length, char* source)
{
    auto visited = make_points(8 * 1024);
    auto rope = make_points(rope_length);
    for (int i = 0; i < rope_length; i++)
    {
        rope.data[i].x = 0;
        rope.data[i].y = 0;
    }
    rope.count = rope_length;

    add_visited({0, 0}, &visited);
    char command;
    int step_count;
    for (int i = 0; i < get_length(source); )
    {
        if (source[i] == '\n')
        {
            for (int j = 0; j < step_count; j++)
            {
                execute_move(command, &rope.data[0]);
                for (int k = 1; k < rope_length; k++)
                {
                    follow(&rope.data[k], &rope.data[k - 1]);
                }
                add_visited(rope.data[rope_length - 1], &visited);
            }
            i++;
        }
        else if (is_digit(source[i]))
        {
            step_count = 0;
            while (is_digit(source[i])) { step_count = step_count * 10 + source[i] - '0'; i++; }
        }
        else if (source[i] == ' ')
        {
            i++;
        }
        else
        {
            command = source[i];
            i++;
        }
    }
    return visited.count;
}

int main()
{
    initialize_printing();

    auto test_1_answer = solve(2, TEST_SOURCE_1);
    if (test_1_answer != 13) { print("Test 1 answer is wrong, expected 13, got "); print(test_1_answer); print("\n"); }

    auto test_2_answer = solve(10, TEST_SOURCE_2);
    if (test_2_answer != 36) { print("Test 2 answer is wrong, expected 36, got "); print(test_2_answer); print("\n"); }

    print("Answer to part 1: "); print(solve(2, SOURCE)); print("\n");
    print("Answer to part 2: "); print(solve(10, SOURCE)); print("\n");
}
