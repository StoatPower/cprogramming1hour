/* Demonstrates unary prefix and postfix modes */
#include <stdio.h>

int a, b;

int main(void)
{
    // sets a and b to 0 to start
    a = b = 0;

    // start with the incremental operator
    // print them, decrementing each time
    // use prefix mode for b, postfix mode for a
    printf("Count up!\n");
    printf("Post   Pre\n");
    printf("%d      %d\n", a++, ++b);
    printf("%d      %d\n", a++, ++b);
    printf("%d      %d\n", a++, ++b);
    printf("%d      %d\n", a++, ++b);
    printf("%d      %d\n", a++, ++b);

    printf("\n Current values of a and b:\n");
    printf("%d       %d\n\n", a, b);

    printf("Count down!\n");
    printf("\nPost   Pre");
    printf("\n%d      %d", a--, --b);
    printf("\n%d      %d", a--, --b);
    printf("\n%d      %d", a--, --b);
    printf("\n%d      %d", a--, --b);
    printf("\n%d      %d\n", a--, --b);
    
    return 0;
}