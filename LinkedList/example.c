#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *pointer;
};

struct node *first = NULL;
struct node *temp = NULL;

void basaEkle(int data)
{
    struct node *eklenecek;
    eklenecek = (struct node *)malloc(sizeof(struct node));
    eklenecek->data = data;

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

void arayaEkle(int data, int n)
{
    struct node *eklenecek;
    eklenecek = (struct node *)malloc(sizeof(struct node));
    eklenecek->data = data;

    temp = first;
    while (temp->pointer->data != n)
    {
        temp = temp->pointer;
    }

    struct node *temp2;
    temp2 = (struct node *)malloc(sizeof(struct node));

    temp2 = temp->pointer;
    temp->pointer = eklenecek;
    eklenecek->pointer = temp2;
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
    int sayi, count = 0, choice, n;

    while (count != 6)
    {
        printf("Başa eleman eklemek için 1\n");
        printf("Sona eleman eklemek için 2\n");
        printf("Araya eleman eklemen için 3\n");
        printf("Seçiminizi yapın: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nBaşa eklenecek elemanın değerini giriniz: ");
            scanf("%d", &sayi);
            basaEkle(sayi);
            yazdir();
            printf("\n");
            break;
        case 2:
            printf("\nSona eklenecek elemanın değerini giriniz: ");
            scanf("%d", &sayi);
            sonaEkle(sayi);
            yazdir();
            printf("\n");
            break;
        case 3:
            printf("Hangi sayıdan önce: ");
            scanf("%d", &n);
            printf("\nAraya eklenecek elemanın değerini giriniz: ");
            scanf("%d", &sayi);
            arayaEkle(sayi, n);
            yazdir();
            break;
        }
        count++;
    }

    return 0;
}