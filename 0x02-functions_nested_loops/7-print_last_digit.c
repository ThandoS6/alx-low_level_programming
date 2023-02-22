#include <main.h>

int print_last_digit(int);

int main() {
    int num, last_digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    last_digit = print_last_digit(num);

    printf("The value of the last digit is %d\n", last_digit);

    return 0;
}

