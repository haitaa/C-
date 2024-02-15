#include <stdio.h>

int main()
{
    int i = 1, number;
    printf("Enter a number between 1 & 10: ");
    scanf("%d", &number);

    if (number < 1 || number > 10)
    {
        printf("You entered wrong!");
        return 0;
    }

    while (i < 11)
    {
        printf("%d x %d = %d\n", number, i, number * i);
        i++;
    }

    return 0;
}