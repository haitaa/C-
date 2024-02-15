#include <stdio.h>

int main()
{
    int number, i, control;
    printf("Enter a number: ");
    scanf("%d", &number);
    for (i = 2; i <= number; i++)
    {
        control = 1;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                control = 0;
                break;
            }
        }
        if (control != 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}