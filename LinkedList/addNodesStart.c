#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *pointer;
};

struct node *first;
struct node *temp;

void basaEkle(int data)
{
    struct node *eklenecek;
    eklenecek = (struct node *)malloc(sizeof(struct node));

    eklenecek->data = data;
    eklenecek->pointer = NULL;

    if (first == NULL)
    {
        first = eklenecek;
    }
    else
    {
        temp = first;
        first = eklenecek;
        first->pointer = temp;
    }
}

void yazdir()
{
    temp = first;
    while (temp->pointer != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->pointer;
    }
    printf("%d ", temp->data);
}

int main()
{
    int sayi, count = 0;
    while (count != 5)
    {
        printf("Bir sayı giriniz: ");
        scanf("%d", &sayi);
        basaEkle(sayi);
        count++;
    }
    yazdir();

    return 0;
}