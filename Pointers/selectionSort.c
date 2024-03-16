#include <stdio.h>

#define MAX 50

void selectionSort(int arr[], int size)
{
    int i, j, temp;
    int minimumIndex;
    for (i = 0; i < size; i++)
    {
        minimumIndex = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minimumIndex])
            {
                minimumIndex = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[minimumIndex];
        arr[minimumIndex] = temp;
    }
}

int main()
{
    int arr[MAX], size;
    int i;

    printf("Kaç elemanlı: ");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    selectionSort(arr, size);

    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}