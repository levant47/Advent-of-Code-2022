#include <windows.h>

char* SOURCE =
"A Y\n"
"A Y\n"
"B X\n"
"A Y\n"
"C Y\n"
"B Y\n"
"B Z\n"
"B Y\n"
"A X\n"
"B X\n"
"C Z\n"
"B Y\n"
"B Y\n"
"B Y\n"
"B Y\n"
"C X\n"
"A Z\n"
"B X\n"
"A Y\n"
"A Y\n"
"B Y\n"
"A X\n"
"C X\n"
"B Y\n"
"A Y\n"
"B Y\n"
"C X\n"
"A Z\n"
"B Y\n"
"A X\n"
"A Y\n"
"B Y\n"
"A Y\n"
"A X\n"
"B Y\n"
"B Y\n"
"B Y\n"
"B X\n"
"A X\n"
"C Y\n"
"A X\n"
"C Z\n"
"B Z\n"
"A Z\n"
"A Z\n"
"C X\n"
"A X\n"
"A X\n"
"B Y\n"
"B Y\n"
"C Y\n"
"B Y\n"
"B X\n"
"B Y\n"
"B Y\n"
"B X\n"
"C X\n"
"A X\n"
"A X\n"
"A Z\n"
"C X\n"
"A Z\n"
"A X\n"
"B Y\n"
"B Y\n"
"A Y\n"
"A Z\n"
"B Y\n"
"B X\n"
"B Y\n"
"B Y\n"
"B X\n"
"C Z\n"
"A X\n"
"B X\n"
"B X\n"
"A Y\n"
"B X\n"
"C Z\n"
"B Y\n"
"A X\n"
"C Z\n"
"A Y\n"
"B Y\n"
"B Y\n"
"A X\n"
"A Z\n"
"B Y\n"
"B Y\n"
"A Z\n"
"A Z\n"
"B Y\n"
"A X\n"
"A Z\n"
"C Y\n"
"A X\n"
"B Y\n"
"C X\n"
"A X\n"
"B Y\n"
"A X\n"
"A Z\n"
"C X\n"
"A Y\n"
"A X\n"
"B X\n"
"A X\n"
"B Z\n"
"B X\n"
"B Y\n"
"A X\n"
"A Y\n"
"B Y\n"
"B Z\n"
"C X\n"
"B X\n"
"A X\n"
"C Z\n"
"C Y\n"
"A Y\n"
"B Y\n"
"A X\n"
"B Y\n"
"C Y\n"
"B Y\n"
"C Y\n"
"B Y\n"
"C Z\n"
"C X\n"
"A Y\n"
"B Y\n"
"B X\n"
"A X\n"
"A X\n"
"A Y\n"
"A Y\n"
"B Y\n"
"A Z\n"
"B Y\n"
"A X\n"
"C X\n"
"B Y\n"
"B X\n"
"C X\n"
"A Y\n"
"B Z\n"
"B Y\n"
"B X\n"
"B Y\n"
"B Y\n"
"C Z\n"
"B X\n"
"B Z\n"
"A X\n"
"B Y\n"
"A X\n"
"B Y\n"
"C Z\n"
"A X\n"
"A Y\n"
"B Z\n"
"A X\n"
"B X\n"
"A Z\n"
"B Y\n"
"A Y\n"
"A X\n"
"B Y\n"
"C Z\n"
"B X\n"
"B Y\n"
"C X\n"
"B X\n"
"A X\n"
"C X\n"
"B X\n"
"B Y\n"
"B Z\n"
"B Y\n"
"B Y\n"
"A X\n"
"B Y\n"
"A X\n"
"A X\n"
"B X\n"
"A X\n"
"A X\n"
"B Y\n"
"B Y\n"
"B Y\n"
"C X\n"
"B Y\n"
"A Z\n"
"A X\n"
"B Y\n"
"A Y\n"
"A Z\n"
"B Y\n"
"A Z\n"
"C X\n"
"B Y\n"
"C X\n"
"B Y\n"
"B Y\n"
"A X\n"
"B Y\n"
"A X\n"
"B Y\n"
"B X\n"
"B Y\n"
"B Y\n"
"B Z\n"
"B Y\n"
"A Y\n"
"A X\n"
"A X\n"
"A X\n"
"C Z\n"
"A Y\n"
"A X\n"
"C Y\n"
"A X\n"
"B Z\n"
"B Y\n"
"B Y\n"
"B Y\n"
"A Z\n"
"B Y\n"
"B X\n"
"A Z\n"
"B Y\n"
"A Y\n"
"B Y\n"
"A Z\n"
"B Y\n"
"A X\n"
"B Z\n"
"A Z\n"
"C X\n"
"B Y\n"
"B Y\n"
"B Y\n"
"B X\n"
"A X\n"
"B X\n"
"A Y\n"
"B X\n"
"B Y\n"
"B Y\n"
"A X\n"
"B Y\n"
"B Z\n"
"B Y\n"
"B Y\n"
"B X\n"
"B X\n"
"C Z\n"
"A Y\n"
"B Y\n"
"B Y\n"
"B Y\n"
"B X\n"
"A X\n"
"B X\n"
"A Y\n"
"A Z\n"
"A Z\n"
"A Z\n"
"A X\n"
"A Y\n"
"B Y\n"
"C Y\n"
"A Z\n"
"A Z\n"
"A Z\n"
"C X\n"
"A X\n"
"C X\n"
"A Z\n"
"B X\n"
"A Y\n"
"B Y\n"
"A Z\n"
"B Y\n"
"B X\n"
"C Y\n"
"A Z\n"
"A X\n"
"C X\n"
"C X\n"
"C X\n"
"B Y\n"
"A X\n"
"A Y\n"
"C X\n"
"B Y\n"
"C Z\n"
"B Y\n"
"B Y\n"
"A Y\n"
"B Y\n"
"A Y\n"
"B Y\n"
"B Y\n"
"B X\n"
"A X\n"
"A X\n"
"A Z\n"
"A Y\n"
"B X\n"
"B Y\n"
"A Z\n"
"C X\n"
"A Y\n"
"A X\n"
"B Y\n"
"B Y\n"
"B X\n"
"A Z\n"
"B Y\n"
"A X\n"
"A X\n"
"B Y\n"
"A X\n"
"C X\n"
"A Z\n"
"A Z\n"
"B Y\n"
"A Z\n"
"A Y\n"
"A Y\n"
"A Y\n"
"B Y\n"
"A Y\n"
"A Z\n"
"A Y\n"
"A X\n"
"A Z\n"
"B Y\n"
"B Y\n"
"C X\n"
"B X\n"
"C Z\n"
"B X\n"
"A Z\n"
"C Y\n"
"B Y\n"
"A X\n"
"B Y\n"
"A Y\n"
"A X\n"
"B Y\n"
"B X\n"
"C Z\n"
"A Z\n"
"A Z\n"
"B Y\n"
"A Z\n"
"B Y\n"
"B Y\n"
"A X\n"
"A X\n"
"A X\n"
"B Z\n"
"A Y\n"
"B Z\n"
"A Y\n"
"C Y\n"
"A X\n"
"B X\n"
"A Y\n"
"B X\n"
"B Y\n"
"A X\n"
"A Y\n"
"A X\n"
"C X\n"
"C Z\n"
"B Y\n"
"A Y\n"
"B Y\n"
"B Z\n"
"A X\n"
"B Y\n"
"C Y\n"
"A Y\n"
"A Z\n"
"B Y\n"
"A X\n"
"A Z\n"
"A Y\n"
"B Y\n"
"B Y\n"
"A Z\n"
"C Z\n"
"B X\n"
"A Y\n"
"C Y\n"
"A X\n"
"A X\n"
"A X\n"
"B Y\n"
"C Z\n"
"A X\n"
"A X\n"
"B X\n"
"A X\n"
"A X\n"
"A Y\n"
"A X\n"
"C X\n"
"A X\n"
"A Y\n"
"B Z\n"
"A X\n"
"C X\n"
"A X\n"
"B X\n"
"A Y\n"
"A X\n"
"A X\n"
"A X\n"
"C Z\n"
"A X\n"
"A X\n"
"B X\n"
"B Y\n"
"A Y\n"
"A X\n"
"A Z\n"
"A Y\n"
"A Y\n"
"A Y\n"
"A Z\n"
"B X\n"
"A X\n"
"A X\n"
"A X\n"
"A Z\n"
"B Y\n"
"A X\n"
"A Y\n"
"B X\n"
"C X\n"
"B Y\n"
"A Z\n"
"A Z\n"
"A Z\n"
"B Z\n"
"B Y\n"
"A Z\n"
"A Z\n"
"A X\n"
"A Y\n"
"A X\n"
"A X\n"
"A X\n"
"A Y\n"
"A Z\n"
"B Y\n"
"A Z\n"
"B X\n"
"B X\n"
"A Y\n"
"A X\n"
"B X\n"
"B X\n"
"C Z\n"
"B X\n"
"A X\n"
"A Z\n"
"C X\n"
"A X\n"
"A X\n"
"B Z\n"
"A X\n"
"B X\n"
"A X\n"
"A X\n"
"A X\n"
"B Z\n"
"A Z\n"
"A Y\n"
"A Z\n"
"B Y\n"
"A X\n"
"A Y\n"
"A Y\n"
"B X\n"
"C Z\n"
"A X\n"
"A X\n"
"A X\n"
"B Y\n"
"B Y\n"
"A X\n"
"A X\n"
"B Y\n"
"A X\n"
"B X\n"
"A Y\n"
"C X\n"
"B X\n"
"B Y\n"
"C Z\n"
"B Y\n"
"A X\n"
"C Z\n"
"B Z\n"
"B Y\n"
"A Z\n"
"B X\n"
"B Y\n"
"B X\n"
"B Y\n"
"B Y\n"
"B Y\n"
"B X\n"
"B Y\n"
"A X\n"
"B Z\n"
"B Y\n"
"C X\n"
"B Y\n"
"C X\n"
"A Z\n"
"B X\n"
"A Z\n"
"A X\n"
"A Z\n"
"A Y\n"
"A X\n"
"A Z\n"
"B Y\n"
"B X\n"
"B X\n"
"B Y\n"
"B X\n"
"B X\n"
"B Z\n"
"B Z\n"
"B Y\n"
"A X\n"
"C X\n"
"B Y\n"
"B X\n"
"B X\n"
"C X\n"
"B X\n"
"B X\n"
"B Y\n"
"A Z\n"
"A Z\n"
"B Y\n"
"C Y\n"
"A Z\n"
"B Y\n"
"B Z\n"
"A Z\n"
"C Y\n"
"C X\n"
"A X\n"
"B Y\n"
"A Y\n"
"B X\n"
"B Y\n"
"B Z\n"
"A Y\n"
"A Z\n"
"A X\n"
"A X\n"
"C X\n"
"B Z\n"
"A Y\n"
"A Z\n"
"B Y\n"
"A Y\n"
"A Z\n"
"B Y\n"
"A Z\n"
"C Z\n"
"B Y\n"
"A X\n"
"A Z\n"
"B Y\n"
"B Y\n"
"A Y\n"
"A X\n"
"C Z\n"
"B Y\n"
"B X\n"
"A X\n"
"C Z\n"
"B Y\n"
"B Y\n"
"B Z\n"
"B Y\n"
"A Y\n"
"B Y\n"
"A Z\n"
"C Z\n"
"B Y\n"
"B X\n"
"B Z\n"
"B X\n"
"A X\n"
"A Y\n"
"A Z\n"
"A Z\n"
"A X\n"
"A X\n"
"B Y\n"
"B X\n"
"A Z\n"
"A X\n"
"B Y\n"
"B Y\n"
"B X\n"
"A Y\n"
"B Y\n"
"C Y\n"
"B Y\n"
"A X\n"
"B Y\n"
"B X\n"
"B Z\n"
"A X\n"
"B Y\n"
"B Y\n"
"A X\n"
"A X\n"
"A X\n"
"C X\n"
"B X\n"
"A Z\n"
"B X\n"
"C X\n"
"B Y\n"
"A Y\n"
"B Y\n"
"C X\n"
"B Y\n"
"B Y\n"
"B X\n"
"A X\n"
"A X\n"
"A X\n"
"A X\n"
"B Y\n"
"B Y\n"
"B Z\n"
"A Z\n"
"A Z\n"
"A Z\n"
"A Y\n"
"B X\n"
"A Y\n"
"B Y\n"
"C Z\n"
"C X\n"
"B Y\n"
"B Y\n"
"B Y\n"
"B Y\n"
"A X\n"
"A X\n"
"A Z\n"
"C Y\n"
"B X\n"
"A Y\n"
"B Y\n"
"B Y\n"
"C Z\n"
"B X\n"
"A X\n"
"A X\n"
"A Z\n"
"C X\n"
"B Y\n"
"B X\n"
"C Z\n"
"B X\n"
"A Y\n"
"B X\n"
"B X\n"
"B Z\n"
"C X\n"
"A Z\n"
"B Y\n"
"B X\n"
"B Y\n"
"B Y\n"
"A X\n"
"B Y\n"
"A X\n"
"A X\n"
"A Y\n"
"A Z\n"
"B Z\n"
"B Y\n"
"A Y\n"
"A Y\n"
"C Z\n"
"A Y\n"
"A X\n"
"B Y\n"
"B Y\n"
"C Z\n"
"B Y\n"
"A X\n"
"B X\n"
"A X\n"
"B Y\n"
"A X\n"
"A Z\n"
"B Z\n"
"B Y\n"
"A X\n"
"C X\n"
"A X\n"
"A X\n"
"B Y\n"
"A Y\n"
"A X\n"
"A Z\n"
"B Y\n"
"C Z\n"
"C X\n"
"A X\n"
"B X\n"
"B X\n"
"B Y\n"
"B X\n"
"B Y\n"
"B Y\n"
"A Z\n"
"A Y\n"
"A Z\n"
"A X\n"
"B Y\n"
"B X\n"
"B Y\n"
"C X\n"
"B Z\n"
"B X\n"
"C X\n"
"B Y\n"
"A X\n"
"A Y\n"
"A Y\n"
"B X\n"
"A X\n"
"B Y\n"
"B X\n"
"A X\n"
"B X\n"
"B Y\n"
"C Y\n"
"A Z\n"
"C Z\n"
"B X\n"
"B X\n"
"B Y\n"
"A Z\n"
"C Y\n"
"B X\n"
"A Z\n"
"B Y\n"
"A Y\n"
"A Z\n"
"B Y\n"
"A X\n"
"A Y\n"
"C Z\n"
"B Y\n"
"A X\n"
"B Y\n"
"B X\n"
"A Y\n"
"B Y\n"
"C X\n"
"A Y\n"
"B Y\n"
"B Y\n"
"A X\n"
"C Z\n"
"B Y\n"
"B X\n"
"A X\n"
"B X\n"
"B Y\n"
"A X\n"
"B Y\n"
"B Y\n"
"B Z\n"
"A X\n"
"C Z\n"
"A Y\n"
"B X\n"
"A X\n"
"C X\n"
"B Z\n"
"B Y\n"
"A Z\n"
"B X\n"
"A Z\n"
"B Y\n"
"C Z\n"
"A X\n"
"B Y\n"
"B X\n"
"B Y\n"
"A X\n"
"B Y\n"
"A X\n"
"A Y\n"
"A Y\n"
"A X\n"
"B Y\n"
"A X\n"
"B Y\n"
"A X\n"
"A Y\n"
"A Y\n"
"C X\n"
"B X\n"
"B Y\n"
"A Z\n"
"B X\n"
"A X\n"
"B Y\n"
"A Y\n"
"B X\n"
"B Y\n"
"A Z\n"
"B X\n"
"B X\n"
"A Y\n"
"B Y\n"
"A Z\n"
"B X\n"
"B Y\n"
"A Y\n"
"A X\n"
"A X\n"
"B X\n"
"C Z\n"
"A Y\n"
"B Y\n"
"A Z\n"
"A Z\n"
"A Z\n"
"B Y\n"
"A Y\n"
"A X\n"
"A Z\n"
"B X\n"
"B Y\n"
"C Y\n"
"A X\n"
"A X\n"
"C X\n"
"A Z\n"
"B X\n"
"B Y\n"
"B X\n"
"B Y\n"
"B Y\n"
"B Y\n"
"A X\n"
"B Z\n"
"B Z\n"
"B Z\n"
"B Y\n"
"A X\n"
"A X\n"
"B Y\n"
"A Z\n"
"B Y\n"
"C Y\n"
"B X\n"
"B X\n"
"B X\n"
"B Y\n"
"B Y\n"
"A Y\n"
"A X\n"
"B X\n"
"A X\n"
"A Z\n"
"A Y\n"
"C Y\n"
"B Y\n"
"B Z\n"
"B Z\n"
"A Y\n"
"B Y\n"
"A Z\n"
"B X\n"
"B Y\n"
"B Y\n"
"B X\n"
"B X\n"
"B Y\n"
"A X\n"
"C Z\n"
"B Y\n"
"A X\n"
"A X\n"
"A Y\n"
"B X\n"
"B Y\n"
"A Z\n"
"A Y\n"
"B Y\n"
"A Y\n"
"A X\n"
"A Z\n"
"A Y\n"
"A X\n"
"A X\n"
"A Y\n"
"B X\n"
"A X\n"
"B Y\n"
"B Y\n"
"B X\n"
"B Y\n"
"B Y\n"
"B Y\n"
"A Y\n"
"B X\n"
"A X\n"
"C Y\n"
"A Y\n"
"B Y\n"
"C X\n"
"C X\n"
"B Y\n"
"B Z\n"
"A Z\n"
"A Y\n"
"B Y\n"
"B Y\n"
"A Y\n"
"B Z\n"
"A Z\n"
"A X\n"
"B Y\n"
"A X\n"
"C Z\n"
"B Y\n"
"B Y\n"
"A Z\n"
"A Y\n"
"B Y\n"
"A Z\n"
"B Y\n"
"A Z\n"
"A Y\n"
"A Z\n"
"C Y\n"
"A Z\n"
"A X\n"
"A X\n"
"A Z\n"
"A X\n"
"B Y\n"
"A Z\n"
"B X\n"
"A Y\n"
"B Y\n"
"A Z\n"
"B X\n"
"B Z\n"
"B X\n"
"A Y\n"
"A Y\n"
"B Y\n"
"A Z\n"
"A X\n"
"B X\n"
"A Z\n"
"A X\n"
"B Y\n"
"B X\n"
"C X\n"
"A Z\n"
"C X\n"
"C X\n"
"B Z\n"
"A X\n"
"B Y\n"
"A Y\n"
"A Y\n"
"A Z\n"
"B Y\n"
"C X\n"
"A Z\n"
"A X\n"
"A Y\n"
"A Z\n"
"A X\n"
"A Y\n"
"A Y\n"
"A X\n"
"C X\n"
"B Y\n"
"B Y\n"
"B Y\n"
"A Z\n"
"B Y\n"
"A Z\n"
"B Y\n"
"C X\n"
"B Y\n"
"A X\n"
"B X\n"
"B Y\n"
"C X\n"
"A Z\n"
"B Y\n"
"B Y\n"
"B Y\n"
"A X\n"
"C Z\n"
"A Z\n"
"B Z\n"
"A X\n"
"A X\n"
"A X\n"
"A X\n"
"B Z\n"
"A Y\n"
"B X\n"
"B Z\n"
"A X\n"
"B X\n"
"A Y\n"
"A Y\n"
"C Z\n"
"B Y\n"
"B Y\n"
"A X\n"
"C Y\n"
"B X\n"
"B Y\n"
"A Y\n"
"C Z\n"
"A X\n"
"B X\n"
"A Z\n"
"C Z\n"
"C Z\n"
"B X\n"
"A Z\n"
"A X\n"
"B Z\n"
"A Z\n"
"B Y\n"
"B X\n"
"B Y\n"
"A Z\n"
"A Y\n"
"B Y\n"
"B Z\n"
"A X\n"
"B Z\n"
"A Z\n"
"A Y\n"
"C Y\n"
"A X\n"
"B Y\n"
"C Y\n"
"A Z\n"
"A Z\n"
"B X\n"
"B X\n"
"C X\n"
"A Y\n"
"B X\n"
"B X\n"
"B Y\n"
"A Y\n"
"C Z\n"
"A Z\n"
"A Y\n"
"B X\n"
"B Y\n"
"B Y\n"
"A X\n"
"C X\n"
"B X\n"
"A X\n"
"A Z\n"
"B Y\n"
"B Y\n"
"A X\n"
"A Y\n"
"B Y\n"
"C Z\n"
"A X\n"
"A X\n"
"B Y\n"
"A Y\n"
"A X\n"
"C Z\n"
"B X\n"
"C Y\n"
"A X\n"
"A X\n"
"A Y\n"
"B X\n"
"B Y\n"
"A X\n"
"B Y\n"
"A Y\n"
"B Y\n"
"B Y\n"
"B Y\n"
"B X\n"
"C X\n"
"A Z\n"
"A Z\n"
"A X\n"
"C Y\n"
"A Y\n"
"C X\n"
"A Z\n"
"A X\n"
"A X\n"
"B Y\n"
"A X\n"
"A X\n"
"B X\n"
"B Y\n"
"A Y\n"
"B Y\n"
"A X\n"
"B X\n"
"B Y\n"
"B Y\n"
"B X\n"
"C X\n"
"A Z\n"
"B Y\n"
"A Y\n"
"A Z\n"
"B Y\n"
"B Y\n"
"B Z\n"
"B Z\n"
"A X\n"
"B Y\n"
"A Y\n"
"A Z\n"
"A Y\n"
"A X\n"
"A Z\n"
"B X\n"
"A X\n"
"B X\n"
"A Y\n"
"C X\n"
"C X\n"
"A X\n"
"B X\n"
"A X\n"
"C X\n"
"A X\n"
"A Z\n"
"A Y\n"
"B Y\n"
"C X\n"
"A Y\n"
"A Y\n"
"B Y\n"
"B X\n"
"B Y\n"
"B Y\n"
"A Z\n"
"A Y\n"
"A Z\n"
"C X\n"
"B Y\n"
"B Y\n"
"A X\n"
"A X\n"
"B Y\n"
"A X\n"
"B Z\n"
"B X\n"
"B Y\n"
"A X\n"
"A Z\n"
"B Y\n"
"A Y\n"
"B Y\n"
"A X\n"
"C Z\n"
"A Z\n"
"A Y\n"
"B Y\n"
"B Y\n"
"B Y\n"
"B X\n"
"A Z\n"
"A Y\n"
"A X\n"
"B X\n"
"A Y\n"
"B Y\n"
"A Y\n"
"B Y\n"
"A Z\n"
"A Z\n"
"B Y\n"
"B X\n"
"B Y\n"
"A Y\n"
"C Y\n"
"B Z\n"
"B Y\n"
"A Y\n"
"C X\n"
"A Y\n"
"B Y\n"
"B Y\n"
"B Y\n"
"B Y\n"
"A X\n"
"B X\n"
"A Z\n"
"B Y\n"
"A Y\n"
"B Z\n"
"C X\n"
"B Y\n"
"A X\n"
"B X\n"
"B Y\n"
"B Y\n"
"A Y\n"
"A X\n"
"A Y\n"
"C X\n"
"B Y\n"
"A Y\n"
"A X\n"
"B Y\n"
"C X\n"
"A Y\n"
"B X\n"
"C Z\n"
"B Y\n"
"B Y\n"
"C Z\n"
"A X\n"
"A X\n"
"A X\n"
"A X\n"
"B Y\n"
"A Z\n"
"A Z\n"
"B X\n"
"A Z\n"
"A Z\n"
"A X\n"
"C Y\n"
"A Z\n"
"B Y\n"
"B Y\n"
"A Z\n"
"A Z\n"
"C Z\n"
"B Y\n"
"B X\n"
"C Z\n"
"C Z\n"
"B Y\n"
"B X\n"
"A Z\n"
"B X\n"
"C Z\n"
"C X\n"
"B Z\n"
"A Y\n"
"C Z\n"
"B Y\n"
"B Y\n"
"A Z\n"
"B Y\n"
"C X\n"
"C Y\n"
"B Y\n"
"C X\n"
"A X\n"
"A X\n"
"B Z\n"
"A Y\n"
"B Z\n"
"B Y\n"
"A X\n"
"B Z\n"
"A X\n"
"C X\n"
"B Y\n"
"A Y\n"
"A X\n"
"A X\n"
"B X\n"
"A X\n"
"A Y\n"
"A Y\n"
"B Y\n"
"B Z\n"
"B Y\n"
"A X\n"
"A Z\n"
"B Y\n"
"A Y\n"
"B Y\n"
"C Y\n"
"A X\n"
"B X\n"
"A X\n"
"B Y\n"
"A X\n"
"A X\n"
"B X\n"
"B Y\n"
"A Z\n"
"A Y\n"
"A X\n"
"C X\n"
"B X\n"
"C X\n"
"B Y\n"
"A X\n"
"B Y\n"
"A Z\n"
"A Z\n"
"C X\n"
"A Z\n"
"B Y\n"
"A Y\n"
"B Y\n"
"C X\n"
"B Y\n"
"B Z\n"
"A X\n"
"B Y\n"
"B X\n"
"A Z\n"
"B Z\n"
"B Y\n"
"A X\n"
"A Y\n"
"A Z\n"
"A Y\n"
"B Z\n"
"A X\n"
"A Y\n"
"A Z\n"
"A Y\n"
"C X\n"
"B Y\n"
"C Z\n"
"B Y\n"
"B Z\n"
"B X\n"
"B Y\n"
"A Z\n"
"C X\n"
"C Z\n"
"A Y\n"
"A Z\n"
"B Y\n"
"B X\n"
"B Y\n"
"B X\n"
"B X\n"
"A Y\n"
"A X\n"
"B X\n"
"B Y\n"
"A X\n"
"A X\n"
"B X\n"
"B Y\n"
"C X\n"
"A Y\n"
"C Y\n"
"A Z\n"
"C X\n"
"A Y\n"
"A Z\n"
"A Y\n"
"A X\n"
"A Z\n"
"B Y\n"
"C X\n"
"B Y\n"
"A Z\n"
"A Y\n"
"B Y\n"
"B Y\n"
"B X\n"
"B Y\n"
"C Z\n"
"A X\n"
"B X\n"
"A X\n"
"A X\n"
"A X\n"
"B Y\n"
"A X\n"
"B Z\n"
"B X\n"
"B Y\n"
"B Y\n"
"A X\n"
"B Z\n"
"A X\n"
"A Y\n"
"B Y\n"
"A X\n"
"B X\n"
"B Y\n"
"B X\n"
"A Z\n"
"A X\n"
"B Y\n"
"C X\n"
"B Y\n"
"A Z\n"
"B X\n"
"B Y\n"
"A Y\n"
"B X\n"
"A X\n"
"A X\n"
"A Y\n"
"A Y\n"
"B X\n"
"B Y\n"
"B Y\n"
"A X\n"
"A Y\n"
"B Y\n"
"A X\n"
"A X\n"
"A X\n"
"B X\n"
"B Y\n"
"A Y\n"
"A X\n"
"B Y\n"
"A X\n"
"B X\n"
"B Y\n"
"B Y\n"
"A Z\n"
"B X\n"
"B Y\n"
"B Z\n"
"A X\n"
"B X\n"
"A Z\n"
"A X\n"
"A Y\n"
"A X\n"
"B Y\n"
"B Y\n"
"A X\n"
"B Z\n"
"A X\n"
"B Y\n"
"B Z\n"
"A Y\n"
"A Y\n"
"A Z\n"
"A Y\n"
"B Y\n"
"A Y\n"
"B Y\n"
"A X\n"
"C Z\n"
"A Y\n"
"B X\n"
"B X\n"
"A Y\n"
"A X\n"
"B Y\n"
"C X\n"
"B X\n"
"B Z\n"
"A Y\n"
"A Y\n"
"C X\n"
"A X\n"
"B X\n"
"A X\n"
"A X\n"
"A Y\n"
"C X\n"
"A X\n"
"B Z\n"
"C Z\n"
"B X\n"
"B Y\n"
"A Z\n"
"C X\n"
"A X\n"
"B Y\n"
"B Y\n"
"A Y\n"
"B Z\n"
"B Y\n"
"B Y\n"
"A X\n"
"A X\n"
"C Z\n"
"B Y\n"
"B Y\n"
"B Y\n"
"A Z\n"
"A Z\n"
"B X\n"
"A X\n"
"B Y\n"
"A X\n"
"B Z\n"
"A X\n"
"B Y\n"
"B X\n"
"B Y\n"
"B Y\n"
"B Y\n"
"B Y\n"
"B Z\n"
"B Y\n"
"A Z\n"
"A X\n"
"C X\n"
"B Y\n"
"B Y\n"
"A X\n"
"B Y\n"
"B Y\n"
"A Z\n"
"A Z\n"
"A Z\n"
"A Z\n"
"A X\n"
"A Z\n"
"B X\n"
"B Y\n"
"B X\n"
"C Y\n"
"A Y\n"
"C X\n"
"B X\n"
"C X\n"
"A Z\n"
"B Y\n"
"B Y\n"
"A Y\n"
"B X\n"
"B Y\n"
"A Y\n"
"A X\n"
"A X\n"
"B Y\n"
"B X\n"
"A Y\n"
"B Y\n"
"B Y\n"
"C Z\n"
"C X\n"
"B X\n"
"B Y\n"
"A Y\n"
"A Z\n"
"B Y\n"
"A X\n"
"C Z\n"
"B Y\n"
"A Y\n"
"B Y\n"
"B Z\n"
"A X\n"
"A Z\n"
"A Y\n"
"A X\n"
"A Z\n"
"B Z\n"
"A Z\n"
"B Y\n"
"A Y\n"
"A X\n"
"A Z\n"
"B Y\n"
"B Y\n"
"B Y\n"
"B Y\n"
"B Y\n"
"A Z\n"
"B Y\n"
"C X\n"
"B Y\n"
"A Y\n"
"B X\n"
"B X\n"
"B Y\n"
"B Y\n"
"C X\n"
"C X\n"
"B Y\n"
"A Y\n"
"B Y\n"
"B Y\n"
"B X\n"
"A Z\n"
"B Y\n"
"B Y\n"
"B Y\n"
"A X\n"
"B Y\n"
"A Z\n"
"B Y\n"
"A X\n"
"B Y\n"
"B Y\n"
"A Z\n"
"B Y\n"
"A Z\n"
"C Z\n"
"B X\n"
"B Y\n"
"A Y\n"
"C Z\n"
"B Y\n"
"B X\n"
"B Y\n"
"A Z\n"
"A Z\n"
"B Y\n"
"C X\n"
"B Y\n"
"A Y\n"
"B Z\n"
"B Y\n"
"B Y\n"
"B X\n"
"A Z\n"
"A X\n"
"B Y\n"
"A X\n"
"A X\n"
"B X\n"
"B Y\n"
"A Z\n"
"B Y\n"
"C Z\n"
"A Z\n"
"A X\n"
"C Z\n"
"B Y\n"
"B X\n"
"C X\n"
"A X\n"
"A Z\n"
"A X\n"
"B Y\n"
"B Y\n"
"B X\n"
"A Z\n"
"B Y\n"
"B Y\n"
"C Z\n"
"A X\n"
"B Y\n"
"B Y\n"
"B X\n"
"B Y\n"
"B Y\n"
"C X\n"
"B Z\n"
"B Y\n"
"A X\n"
"B X\n"
"B X\n"
"B Y\n"
"A X\n"
"A Z\n"
"B Y\n"
"A X\n"
"A Z\n"
"A X\n"
"B Y\n"
"C Z\n"
"C X\n"
"C Z\n"
"A Z\n"
"B X\n"
"B Y\n"
"A X\n"
"B Z\n"
"A Y\n"
"A Z\n"
"A Z\n"
"A Z\n"
"A X\n"
"C Y\n"
"A X\n"
"B X\n"
"A Y\n"
"C Z\n"
"A X\n"
"B Y\n"
"B Y\n"
"A X\n"
"A Z\n"
"B Y\n"
"A Z\n"
"A X\n"
"A Z\n"
"B Y\n"
"A Y\n"
"B Y\n"
"A Y\n"
"C Y\n"
"B X\n"
"A Y\n"
"B Y\n"
"A X\n"
"B X\n"
"B Y\n"
"A Y\n"
"B Y\n"
"C Y\n"
"C X\n"
"B Y\n"
"B Y\n"
"B Z\n"
"B X\n"
"A Y\n"
"B Y\n"
"B Y\n"
"A X\n"
"C Y\n"
"C X\n"
"A X\n"
"B Y\n"
"B Y\n"
"B X\n"
"A X\n"
"B X\n"
"B Y\n"
"B Y\n"
"C X\n"
"B Y\n"
"B X\n"
"B X\n"
"A X\n"
"A X\n"
"B Y\n"
"B Y\n"
"B Y\n"
"B Y\n"
"B Y\n"
"C Z\n"
"A Y\n"
"B Y\n"
"C Z\n"
"B Y\n"
"C X\n"
"B Z\n"
"B Y\n"
"A X\n"
"A Z\n"
"B Y\n"
"A Y\n"
"A X\n"
"B Y\n"
"B Z\n"
"A X\n"
"C Y\n"
"B Y\n"
"B Y\n"
"A Z\n"
"A Y\n"
"B X\n"
"B Y\n"
"B Y\n"
"B Y\n"
"A Y\n"
"C Y\n"
"B X\n"
"B Y\n"
"B Y\n"
"B Y\n"
"B Y\n"
"B Y\n"
"A Y\n"
"B Y\n"
"A Z\n"
"B X\n"
"A Y\n"
"B X\n"
"B Y\n"
"B Y\n"
"A Z\n"
"B Z\n"
"B Y\n"
"C Y\n"
"A X\n"
"A Z\n"
"A X\n"
"B Y\n"
"C X\n"
"C Z\n"
"C Z\n"
"B Y\n"
"B Y\n"
"B Y\n"
"A Y\n"
"B X\n"
"B Y\n"
"C X\n"
"B Y\n"
"A Y\n"
"A Z\n"
"A X\n"
"A X\n"
"A Z\n"
"B Y\n"
"A Z\n"
"A X\n"
"B X\n"
"B Y\n"
"B Y\n"
"B Y\n"
"A Y\n"
"B Y\n"
"A Y\n"
"A Z\n"
"C Y\n"
"B X\n"
"C X\n"
"C X\n"
"A Y\n"
"B Y\n"
"A X\n"
"A X\n"
"A Y\n"
"A X\n"
"B Y\n"
"B Y\n"
"C X\n"
"B Y\n"
"C X\n"
"C X\n"
"C X\n"
"B Y\n"
"B X\n"
"B Z\n"
"A Y\n"
"C X\n"
"A Y\n"
"B Y\n"
"A Z\n"
"A Z\n"
"C Z\n"
"C X\n"
"A X\n"
"A X\n"
"A Z\n"
"B Y\n"
"C Z\n"
"B X\n"
"B Y\n"
"B Y\n"
"B Y\n"
"A Z\n"
"B Y\n"
"B X\n"
"B Y\n"
"B Y\n"
"A Z\n"
"A Z\n"
"B X\n"
"A X\n"
"B Z\n"
"A X\n"
"B Y\n"
"A Z\n"
"B Y\n"
"A Y\n"
"A X\n"
"B Y\n"
"B Y\n"
"C X\n"
"A X\n"
"B Y\n"
"C Y\n"
"B Y\n"
"B Y\n"
"A Y\n"
"A X\n"
"B X\n"
"B X\n"
"B Z\n"
"C X\n"
"B Y\n"
"B Y\n"
"C Y\n"
"B Y\n"
"A Y\n"
"B X\n"
"B Y\n"
"B X\n"
"A X\n"
"C X\n"
"C X\n"
"A X\n"
"A Y\n"
"A Y\n"
"B Y\n"
"A X\n"
"A X\n"
"B Y\n"
"A X\n"
"B Z\n"
"C X\n"
"B Y\n"
"A X\n"
"B Y\n"
"B Y\n"
"A Y\n"
"B Y\n"
"B Y\n"
"A X\n"
"B Z\n"
"B Y\n"
"B Y\n"
"A Z\n"
"B Z\n"
"B Z\n"
"B X\n"
"B Y\n"
"A Y\n"
"A Y\n"
"A X\n"
"B Y\n"
"A Y\n"
"B Y\n"
"A Z\n"
"B Y\n"
"A X\n"
"C Z\n"
"C Z\n"
"C X\n"
"B Y\n"
"B Z\n"
"B Z\n"
"C Z\n"
"B Z\n"
"B Y\n"
"C X\n"
"A Y\n"
"B Y\n"
"B Y\n"
"A X\n"
"C Z\n"
"A Y\n"
"A X\n"
"A Y\n"
"C X\n"
"A X\n"
"B X\n"
"C X\n"
"A Z\n"
"B Y\n"
"A X\n"
"A X\n"
"B Y\n"
"B Y\n"
"A X\n"
"B Y\n"
"A Z\n"
"A X\n"
"C X\n"
"B Y\n"
"C Z\n"
"B X\n"
"B Y\n"
"C Z\n"
"A X\n"
"B Z\n"
"A Y\n"
"A Y\n"
"B Y\n"
"C X\n"
"C Z\n"
"A X\n"
"A X\n"
"A Y\n"
"A Y\n"
"A Y\n"
"B Y\n"
"A X\n"
"A X\n"
"B Z\n"
"C Y\n"
"A Y\n"
"B Y\n"
"B Y\n"
"B Y\n"
"A X\n"
"A X\n"
"C Z\n"
"B Y\n"
"B Y\n"
"A X\n"
"B Y\n"
"B Y\n"
"A Y\n"
"A X\n"
"A Z\n"
"A Z\n"
"A Z\n"
"B X\n"
"A X\n"
"B Y\n"
"C Y\n"
"B Y\n"
"C Y\n"
"B X\n"
"A Y\n"
"C Z\n"
"A Y\n"
"B Y\n"
"A X\n"
"C X\n"
"A X\n"
"B Y\n"
"C X\n"
"A X\n"
"A X\n"
"B X\n"
"A Z\n"
"B X\n"
"C Z\n"
"A X\n"
"B X\n"
"A Y\n"
"C Y\n"
"C X\n"
"A X\n"
"A Y\n"
"A X\n"
"A X\n"
"B Y\n"
"A Z\n"
"A X\n"
"A Z\n"
"A Y\n"
"B Y\n"
"A Y\n"
"A X\n"
"B Y\n"
"A Y\n"
"A X\n"
"A X\n"
"B X\n"
"B Z\n"
"B Y\n"
"B X\n"
"C X\n"
"A Z\n"
"C X\n"
"B Y\n"
"A Y\n"
"B X\n"
"A Z\n"
"B Y\n"
"A Y\n"
"B Y\n"
"C X\n"
"B Y\n"
"B Y\n"
"C Z\n"
"B Z\n"
"B Y\n"
"A Z\n"
"A Y\n"
"B X\n"
"A X\n"
"A Z\n"
"A X\n"
"A Y\n"
"B X\n"
"A Z\n"
"A Y\n"
"A X\n"
"A X\n"
"B X\n"
"B Y\n"
"A X\n"
"C X\n"
"C Z\n"
"B Y\n"
"C X\n"
"B Y\n"
"A X\n"
"A X\n"
"B X\n"
"A X\n"
"A Z\n"
"B X\n"
"B Y\n"
"C X\n"
"B Y\n"
"B Y\n"
"A Z\n"
"A Y\n"
"A X\n"
"B X\n"
"A Z\n"
"A Y\n"
"C Z\n"
"A X\n"
"A X\n"
"A Z\n"
"C X\n"
"B Y\n"
"A Z\n"
"A Y\n"
"B Y\n"
"A Y\n"
"B X\n"
"B Y\n"
"C Y\n"
"B Y\n"
"C X\n"
"B Y\n"
"B Y\n"
"B Y\n"
"B X\n"
"C X\n"
"A X\n"
"B Y\n"
"B X\n"
"B X\n"
"B Y\n"
"A Z\n"
"B Y\n"
"A X\n"
"A X\n"
"A X\n"
"A X\n"
"C Y\n"
"A Z\n"
"A Y\n"
"C X\n"
"B X\n"
"A X\n"
"B Y\n"
"C X\n"
"C Z\n"
"B Y\n"
"A Z\n"
"B Z\n"
"B Y\n"
"B Y\n"
"A Y\n"
"B X\n"
"B Y\n"
"C X\n"
"B Y\n"
"A Y\n"
"B Z\n"
"A Z\n"
"A X\n"
"A X\n"
"A Y\n"
"C X\n"
"B Y\n"
"A Y\n"
"B X\n"
"B X\n"
"B Y\n"
"B Y\n"
"A Z\n"
"A Y\n"
"A Z\n"
"B Y\n"
"A Y\n"
"A X\n"
"B Y\n"
"C X\n"
"A X\n"
"B Y\n"
"A Y\n"
"A X\n"
"B Y\n"
"B Y\n"
"C Y\n"
"A X\n"
"A Z\n"
"A Y\n"
"B Y\n"
"B X\n"
"B X\n"
"B Y\n"
"A X\n"
"B Y\n"
"B X\n"
"A Y\n"
"B X\n"
"B Y\n"
"B Y\n"
"B Y\n"
"A Z\n"
"B Y\n"
"B Z\n"
"C X\n"
"A Z\n"
"B Y\n"
"B Y\n"
"C Y\n"
"A Y\n"
"B X\n"
"B Z\n"
"B X\n"
"A Z\n"
"B Y\n"
"B X\n"
"A Y\n"
"B X\n"
"B Z\n"
"A Z\n"
"C X\n"
"B X\n"
"B X\n"
"B Z\n"
"B Y\n"
"B Y\n"
"A Y\n"
"A Y\n"
"A Y\n"
"A Y\n"
"B Y\n"
"B Z\n"
"C X\n"
"A X\n"
"B Y\n"
"B X\n"
"A Y\n"
"C Z\n"
"B Y\n"
"A X\n"
"A Z\n"
"C X\n"
"A Z\n"
"A Z\n"
"C Y\n"
"B Y\n"
"A X\n"
"A X\n"
"C X\n"
"A Z\n"
"B Y\n"
"B Y\n"
"B Z\n"
"B Y\n"
"A X\n"
"C X\n"
"A X\n"
"A Z\n"
"A X\n"
"A X\n"
"A Y\n"
"C X\n"
"A Z\n"
"A X\n"
"C Y\n"
"A Y\n"
"C X\n"
"B Y\n"
"B Y\n"
"A X\n"
"B Y\n"
"A X\n"
"B Y\n"
"C X\n"
"B X\n"
"A X\n"
"A Z\n"
"A X\n"
"B Y\n"
"A Y\n"
"B Y\n"
"C X\n"
"B X\n"
"C Z\n"
"B Y\n"
"B Y\n"
"B Y\n"
"A X\n"
"B Y\n"
"A Y\n"
"A Z\n"
"C Z\n"
"A Y\n"
"B Y\n"
"C Y\n"
"C Z\n"
"A X\n"
"A Y\n"
"B Y\n"
"A Y\n"
"B X\n"
"C X\n"
"C Z\n"
"B X\n"
"A Z\n"
"A Z\n"
"B Y\n"
"A Y\n"
"A Z\n"
"B Z\n"
"C X\n"
"A Z\n"
"C X\n"
"B X\n"
"B Y\n"
"A Y\n"
"B X\n"
"A Z\n"
"A Y\n"
"A X\n"
"A X\n"
"B Y\n"
"A Y\n"
"C X\n"
"B Y\n"
"A X\n"
"B Z\n"
"B X\n"
"B Y\n"
"A Y\n"
"B Y\n"
"B X\n"
"A Z\n"
"A X\n"
"A X\n"
"B Y\n"
"A Z\n"
"B X\n"
"A Y\n"
"C Z\n"
"A Y\n"
"A X\n"
"B Y\n"
"B X\n"
"A Z\n"
"C Z\n"
"B X\n"
"A Z\n"
"A Y\n"
"A Z\n"
"B Y\n"
"B Y\n"
"C X\n"
"B Y\n"
"A Y\n"
"A Y\n"
"A Y\n"
"A X\n"
"B Y\n"
"B Y\n"
"A Z\n"
"A X\n"
"B X\n"
"A X\n"
"B Y\n"
"B Y\n"
"A Y\n"
"A Y\n"
"A X\n"
"B Y\n"
"B Y\n"
"B Y\n"
"C Z\n"
"B Y\n"
"A X\n"
"C X\n"
"A X\n"
"C X\n"
"B X\n"
"A X\n"
"A X\n"
"B Y\n"
"B Y\n"
"A X\n"
"B Y\n"
"B Y\n"
"A X\n"
"A Z\n"
"A Y\n"
"B Y\n"
"A X\n"
"C Y\n"
"C X\n"
"B Y\n"
"B X\n"
"B Y\n"
"B Z\n"
"B Y\n"
"A Y\n"
"B Y\n"
"A Z\n"
"C Z\n"
"A Y\n"
"A Y\n"
"B Y\n"
"B Y\n"
"A X\n"
"B Y\n"
"B Y\n"
"A Y\n"
"B Y\n"
"B Y\n"
"A X\n"
"A Z\n"
"A Z\n"
"A Y\n"
"B Y\n"
"A X\n"
"A Z\n"
"B Y\n"
"A X\n"
"B X\n"
"C Y\n"
"A X\n"
"A Y\n"
"B X\n"
"A X\n"
"A Y\n"
"A Z\n"
"C X\n"
"A X\n"
"A X\n"
"B Y\n"
"B Y\n"
"B Y\n"
"A X\n"
"A Z\n"
"A X\n"
"B Y\n"
"B Y\n"
"C Y\n"
"C Z\n"
"B Y\n"
"B Y\n"
"B Y\n"
"C X\n"
"B Y\n"
"A Z\n"
"A X\n"
"B X\n"
"B Y\n"
"C Z\n"
"A Z\n"
"A Z\n"
"B Y\n"
"A Z\n"
"A X\n"
"A Z\n"
"B Y\n"
"A X\n"
"C X\n"
"B X\n"
"A Y\n"
"B Y\n"
"C Y\n"
"A X\n"
"A X\n"
"B Y\n"
"A Z\n"
"A X\n"
"A X\n"
"A Y\n"
"A Y\n"
"A Y\n"
"B Y\n"
"A Y\n"
;

int get_length(char* string)
{
    int result = 0;
    while (string[result] != '\0') { result++; }
    return result;
}

HANDLE stdout;

void initialize_printing()
{
    stdout = GetStdHandle(STD_OUTPUT_HANDLE);
}

void panic(char* additional_message = nullptr)
{
    char message[] = "panic\n";
    WriteConsole(stdout, message, sizeof(message) - 1, nullptr, nullptr);
    if (additional_message != nullptr)
    {
        WriteConsole(stdout, additional_message, get_length(additional_message), nullptr, nullptr);
    }
    ExitProcess(1);
}

void print(char* message)
{
    WriteConsole(stdout, message, get_length(message), nullptr, nullptr);
}

void print(char c)
{
    WriteConsole(stdout, &c, 1, nullptr, nullptr);
}

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

bool is_their_play(char c)
{
    return c == 'A' || c == 'B' || c == 'C';
}

bool is_my_play(char c)
{
    return c == 'X' || c == 'Y' || c == 'Z';
}

int my_play_to_score(char my_play)
{
    return my_play - 'X' + 1;
}

const int LOSS = 0;
const int DRAW = 3;
const int VICT = 6;
int round_results_table[3][3] = // first index is their play, second index is my play, results are for my side
{
    // Rock Paper Scissors
    {DRAW, VICT, LOSS}, // Rock
    {LOSS, DRAW, VICT}, // Paper
    {VICT, LOSS, DRAW}, // Scissors
};
int round_result_to_score(char their_play, char my_play)
{
    return round_results_table[their_play - 'A'][my_play - 'X'];
}

int decode_round_result_to_score(char round_result)
{
    return (round_result - 'X') * 3;
}

int match_their_play(char their_play, int round_result_score)
{
    char my_play = 'X';
    while (true)
    {
        if (round_results_table[their_play - 'A'][my_play - 'X'] == round_result_score)
        {
            return my_play;
        }
        if (my_play == 'Z')
        {
            panic();
        }
        my_play++;
    }
}

int main()
{
    initialize_printing();

    int score = 0;
    char their_play, my_play;
    for (int i = 0; i < get_length(SOURCE); i++)
    {
        char current = SOURCE[i];
        if (is_their_play(current))
        {
            their_play = current;
        }
        else if (is_my_play(current))
        {
            my_play = current;
        }
        else if (current == ' ')
        {
            // do nothing
        }
        else if (current == '\n')
        {
            score += my_play_to_score(my_play) + round_result_to_score(their_play, my_play);
        }
        else
        {
            panic();
        }
    }
    print("Answer to part 1: ");
    print(score);
    print("\n");

    // part 2
    score = 0;
    int round_result_score;
    for (int i = 0; i < get_length(SOURCE); i++)
    {
        char current = SOURCE[i];
        if (is_their_play(current))
        {
            their_play = current;
        }
        else if (is_my_play(current))
        {
            round_result_score = decode_round_result_to_score(current);
        }
        else if (current == ' ')
        {
            // do nothing
        }
        else if (current == '\n')
        {
            score += my_play_to_score(match_their_play(their_play, round_result_score)) + round_result_score;
        }
        else
        {
            panic();
        }
    }
    print("Answer to part 2: ");
    print(score);
    print("\n");
}
