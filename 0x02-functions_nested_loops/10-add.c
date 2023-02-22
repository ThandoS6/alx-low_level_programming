#include <main.h>

int add(int, int);

int main() {
    int a, b, sum;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    sum = add(a, b);

    printf("The sum of %d and %d is %d\n", a, b, sum);

    return 0;
}

