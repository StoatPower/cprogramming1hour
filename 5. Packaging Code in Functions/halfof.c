#include <stdio.h>

float x = 3.5, y = 65.11, z;

float half_of(float k);

int main(void)
{
    // x is arg to half_of()
    z = half_of(x);
    printf("The value of z = %f\n", z);

    // y is arg to half_of()
    z = half_of(y);
    printf("The value of z = %f\n", z);

    // etc
    z = half_of(z);
    printf("The value of z = %f\n", z);

    return 0;
}

float half_of(float k)
{
    return (k/2);
}