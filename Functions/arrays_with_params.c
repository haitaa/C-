#include <stdio.h>

void bastir(int matris[][4], int size)
{
    int i, j;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matris[3][4];
    int i, j;

    printf("Matrisi doldurunuz: ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &matris[i][j]);
        }
    }

    bastir(matris, 3);

    return 0;
}