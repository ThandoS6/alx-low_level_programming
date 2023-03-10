#include <main.h>

void print_times_table(int n) {
    if (n < 0 || n > 15) {
        return;
    }

    printf("  |");
    for (int i = 0; i <= n; i++) {
        printf("%4d", i);
    }
    printf("\n");

    printf("--+");
    for (int i = 0; i <= n; i++) {
        printf("----");
    }
    printf("\n");

    for (int i = 0; i <= n; i++) {
        printf("%2d|", i);
        for (int j = 0; j <= n; j++) {
            printf("%4d", i*j);
        }
        printf("\n");
    }
}

