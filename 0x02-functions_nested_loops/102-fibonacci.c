#include <main.h>

int main() {
    int a = 1, b = 2, c;
    printf("%d, %d, ", a, b);
    for (int i = 3; i <= 50; i++) {
        c = a + b;
        printf("%d", c);
        if (i < 50) {
            printf(", ");
        }
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}

