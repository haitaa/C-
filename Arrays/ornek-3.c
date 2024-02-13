#include <stdio.h>

/*
3 5 1 3 2
4 4 4 5 5
9 8 9 7 7

Sonuc:
16 17 14 15 14
*/

int main()
{
    int matris[5][5];
    int toplam = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d. %d. değeri gir: ", i, j);
            scanf("%d", &matris[i][j]);
            printf("\n");
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }

    for (int j = 0; j < 5; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            toplam += matris[i][j];
        }
        printf("%d ", toplam);
        toplam = 0;
    }

    return 0;
}