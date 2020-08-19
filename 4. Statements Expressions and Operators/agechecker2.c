// demonstrates if/else statements and some of C's relational operators

#include <stdio.h>

#define CURRENTYEAR 2020

int birth_year, age;

int main (void)
{
    printf("Enter the year you were born: ");
    scanf("%d", &birth_year);

    // two tests to calc whether the user was a leap year birth

    if (birth_year % 4 == 0)
        printf("You were born in a leap year!\n");
    else
        printf("You were not born in a leap year!\n");

    age = CURRENTYEAR - birth_year;

    // can check on voting age and drinking age
    if (age >= 18)
        printf("You can vote this year!\n");
    if (age <= 20)
        printf("It is illegal for you to drink alcohol!\n");

    return 0;
}