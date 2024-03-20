#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
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
        first->next = temp;
    }
}

void sonaEkle(int data)
{
    struct node *eklenecek;
    eklenecek = (struct node *)malloc(sizeof(struct node));
    eklenecek->data = data;
    eklenecek->next = NULL;

    if (first == NULL)
    {
        first = eklenecek;
    }
    else
    {
        temp = first;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = eklenecek;
    }
}

void arayaEkle(int n, int data)
{
    struct node *eklenecek;
    eklenecek = (struct node *)malloc(sizeof(struct node));
    eklenecek->data = data;

    temp = first;
    while (temp->next->data != n)
    {
        temp = temp->next;
    }

    struct node *temp2;
    temp2 = (struct node *)malloc(sizeof(struct node));
    temp2 = temp->next;
    temp->next = eklenecek;
    eklenecek->next = temp2;
}

void yazdir()
{
    temp = first;
    while (temp->next != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
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