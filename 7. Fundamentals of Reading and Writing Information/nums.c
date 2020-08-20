#include <stdio.h>

int a = 2, b = 10, c = 50;
float f = 1.05, g = 25.5, h = -0.1;

int main(void)
{
    printf("\nDecimal values without tabs: %d %d %d", a, b, c);
    printf("\nDecimal values with tabs: \t%d \t%d \t%d", a, b, c);
    
    // %f prints to 6 decimal places by default
    printf("\nThree floats on 1 line: \t%f\t%f\t%f", f, g, h);
    printf("\nThree floats on 3 lines: \n\t%f\n\t%f\n\t%f", f, g, h);

    printf("\nThe rate is %f%%", f);
    printf("\nThe rate to 2 decimal places is: %.2f%%", f);

    printf("\nThe rate to 1 decimal place is %.1f%%", f);
    printf("\nThe result of %f/%f = %f\n", g, f, g / f);

    return 0;
}