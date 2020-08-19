/* sizeof.c--Program to tell the size of C variable types in bytes */
#include <stdio.h>

int main(void)
{
    printf("\nA char        is %d bytes", sizeof(char));
    printf("\nAn int        is %d bytes", sizeof(int));
    printf("\nA short       is %d bytes", sizeof(short));
    printf("\nA long        is %d bytes", sizeof(long));
    printf("\nA long long   is %d bytes", sizeof(long long));
    printf("\nA uchar       is %d bytes", sizeof(unsigned char));
    printf("\nA uint        is %d bytes", sizeof(unsigned int));
    printf("\nA ushort      is %d bytes", sizeof(unsigned short));
    printf("\nA ulong       is %d bytes", sizeof(unsigned long));
    printf("\nA ulong long  is %d bytes", sizeof(unsigned long long));
    printf("\nA float       is %d bytes", sizeof(float));
    printf("\nA double      is %d bytes", sizeof(double));
    printf("\nA long double is %d bytes", sizeof(long double));
}