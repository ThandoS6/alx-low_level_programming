#include <main.h>

void times_table(void) {
    int i;

    printf("   0  1  2  3  4  5  6  7  8  9\n");  // print the header row

    for (i = 0; i <= 9; i++) {  // loop over the rows
        printf("%d  ", i);  // print the row label

        int j;
        for (j = 0; j <= 9; j++) {  // loop over the columns
            printf("%-2d ", i * j);  // print the product with a minimum width of 2 characters
        }

        printf("\n");  // move to the next line
    }
}

