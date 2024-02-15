#include <stdio.h>
#include <stdbool.h>

int main()
{
    int number, range;
    bool asalMi = true;
    printf("Please enter a number: ");
    scanf("%d", &number);

    range = (number / 2) + 1;
    for (int i = 2; i < range; i++)
    {
        if (number % i == 0)
        {
            asalMi = false;
        }
    }

    if (asalMi)
    {
        printf("%d bir asal sayıdır.", number);
    }
    else
    {
        printf("%d bir asal sayı değildir.", number);
    }

    return 0;
}