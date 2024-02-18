#include <stdio.h>
#include <stdlib.h>
#include "myMath.h"

int main()
{
    int choose = 0, x, y;
    menu();
    printf("\nChoose a number (1-5): ");
    scanf("%d", &choose);
    printf("\n");
    switch (choose)
    {
    case 1:
        printf("Please enter first number: ");
        scanf("%d", x);
        printf("\nPlease enter second number: ");
        scanf("%d", y);
        if (max(x, y) == NULL)
        {
            printf("The values that you entered dont have maximum.\n");
            break;
        }
        printf("Max between %d and %d is %d\n", x, y, max(x, y));
        break;
    case 2:
        printf("Please enter first number: ");
        scanf("%d", x);
        printf("\nPlease enter second number: ");
        scanf("%d", y);
        if (min(x, y) == NULL)
        {
            printf("The values that you entered dont have maximum.\n");
            break;
        }
        printf("Min between %d and %d is %d.\n", x, y, min(x, y));
        break;
    case 3:
        printf("Please enter a number to get its square: ");
        scanf("%d\n", x);
        printf("The square of %d is %d", x, square(x));
        break;
    case 4:
        printf("Please enter a number to get its cube: ");
        scanf("%d\n", x);
        printf("The square of %d is %d", x, cube(x));
        break;
    case 5:
        printf("Please enter a number to get its 'mutlak değer': ");
        scanf("%d\n", x);
        printf("The 'mutlak değer' of %d is %d", x, mutlakDeger(x));
        break;
    }

    return 0;
}

void menu()
{
    printf("\n");
    printf("**************\n");
    printf("*    MENU    *\n");
    printf("**************\n");
    printf("1- Maksimum\n");
    printf("2- Minimum");
    printf("3- Kare Al\n");
    printf("4- Kup Al\n");
    printf("5- Mutlak Değer\n");
}

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else if (b > a)
    {
        return b;
    }
    else
    {
        return NULL;
    }
}

int min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else if (b < a)
    {
        return b;
    }
    else
    {
        return NULL;
    }
}

int square(int base)
{
    return base * *2;
}

int cube(int base)
{
    return base * *3;
}

int mutlakDeger(int a)
{
    if (a < 0)
    {
        return -a;
    }
    return a;
}