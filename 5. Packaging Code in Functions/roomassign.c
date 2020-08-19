#include <stdio.h>

char last_init;
int room;

int room_assign(char last_init);

int main(void)
{
    puts("Enter the first initial of your last name: ");
    scanf("%c", &last_init);

    room = room_assign(last_init);

    printf("\nYou need to report to room %d.", room);

    return 0;
}

int room_assign(char li)
{
    // test whether the first initial is A-M or N-Z
    if ((li >= 'a' && li <= 'm') || (li >= 'A' && li <= 'M'))
        return 1045;
    else
        return 1055;
}