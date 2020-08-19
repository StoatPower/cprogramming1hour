#include <stdio.h>

// function prototype
long cube(long x);

long input, answer;

int main(void)
{
    printf("Enter an integer value: ");
    scanf("%ld", &input);
    answer = cube(input);
    // %ld is the conversion specifier for a long integer
    printf("\n The cube of %ld is %ld.\n", input, answer);

    return 0;
}

long cube(long x)
{
    long x_cubed;

    x_cubed = x * x * x;
    return x_cubed;
}