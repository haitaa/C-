#include <stdio.h>

int max(int *arr, int size)
{
    int maxNumber = arr[0];
    int i;

    for (i = 0; i < size; i++)
    {
        if (arr[i] > maxNumber)
        {
            maxNumber = arr[i];
        }
    }

    return maxNumber;
}

int main()
{

    int sayilar[5] = {3, 4, 42, 100, 1};
    int maxNumber;

    maxNumber = max(sayilar, 5);

    printf("Listenin içindeki en büyük sayı: %d", maxNumber);

    return 0;
}