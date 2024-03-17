#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *pointer;
};

struct node *first = NULL;
struct node *temp = NULL;

void sonaEkle(int data)
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
        while (temp->pointer != NULL)
        {
            temp = temp->pointer;
        }
        temp->pointer = eklenecek;
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
    int count = 0, sayi;
    while (count != 5)
    {
        printf("Bir sayı giriniz: ");
        scanf("%d", &sayi);

        sonaEkle(sayi);
        count++;
    }
    yazdir();

    return 0;
}
