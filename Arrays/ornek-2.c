#include <stdio.h>

int main()
{

    /*
        1 2 3
        4 5 6
        7 8 9
    */

    int matris[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d. %d. değeri giriniz: ", i, j);
            scanf("%d", &matris[i][j]);
            printf("\n");
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }

    return 0;
}