#include <stdio.h>
#include <math.h>

int main(void)
{
    unsigned long int n = 612852475143;
    unsigned long int i;

    while (n % 2 == 0) {
        n /= 2; // divide n by 2 until it's no longer divisible by 2
        i = 2;
    }

    for (i = 3; i <= sqrt(n); i += 2)
    {
        while (n % i == 0)
       	{
            n /= i; // divide n by i until it's no longer divisible by i
        }
    }

    if (n > 2) {
        i = n; // n is a prime number greater than 2
    }

    printf("%lu\n", i);

    return 0;
}

