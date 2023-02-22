#include <stdio.h>

int _abs(int);

int main() {
    int num, abs_num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    abs_num = _abs(num);

    printf("The absolute value of %d is %d\n", num, abs_num);

    return 0;
}


