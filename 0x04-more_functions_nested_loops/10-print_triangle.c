#include "main.h"

void print_triangle(int size) {
    if (size <= 0) {
        _putchar('\n'); // if size is 0 or negative, print a new line and return
        return;
    }

    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= i; j++)
       	{
            _putchar('#'); // print '#' i times on each line
        }
        _putchar('\n'); // move to the next line
    }
}

