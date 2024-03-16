#include <stdio.h>

#define MAX 50

void bubbleSort(int arr[], int size)
{
    int i, j, temp;

    for (i = 0; i < size; i++)
    {
        for (j = 1; j < size - i; j++)
        {
            if (arr[j - 1] > arr[j])
            {
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
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
        scanf("%d\n", &arr[i]);
    }

    bubbleSort(arr, size);

    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}