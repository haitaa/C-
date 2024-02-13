#include <stdio.h>

int main()
{
    int sayilar[] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        printf("%d. %d\n", i, sayilar[i]);
    }

    return 0;
}