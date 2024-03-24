#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

void bastanSil()
{
    if (first != NULL)
    {
        temp = first->pointer;
        free(first);
        first = temp;
    }
    else
    {
        free(first);
    }
}

void sondanSil()
{
    temp = first;
    while (temp->pointer->pointer != NULL)
    {
        temp = temp->pointer;
    }
    free(temp->pointer);
    temp->pointer = NULL;
}

void aradanSil(int data)
{
    temp = first;
    if (temp->data == data)
    {
        bastanSil();
    }
    else
    {
        struct node *temp2;
        temp2 = (struct node *)malloc(sizeof(struct node));
        while (temp->pointer->data != data)
        {
            temp = temp->pointer->pointer;
        }
        if (temp->pointer->pointer == NULL)
        {
            sondanSil();
        }
        else
        {
            temp2 = temp->pointer;
            free(temp->pointer);
            temp->pointer = temp2;
        }
    }
}

void tersCevir()
{
    struct node *temp2 = NULL;
    struct node *prev = NULL;

    temp = first;
    while (temp != NULL)
    {
        temp2 = temp->pointer;
        temp->pointer = prev;
        prev = temp;
        temp = temp2;
    }
    first = prev;
}

int elemanSay()
{
    int count = 0;
    if (first = NULL)
    {
        return count;
    }

    temp = first;
    while (temp->pointer != NULL)
    {
        count++;
        temp = temp->pointer;
    }
    count++;
    return count;
}

int elemanToplam()
{
    int toplam = 0;
    if (first == NULL)
    {
        return toplam;
    }

    temp = first;
    while (temp->pointer != NULL)
    {
        toplam += temp->data;
        temp = temp->pointer;
    }
    toplam += temp->data;
    return toplam;
}

void yazdir()
{
    system("clear");
    if (first != NULL)
    {
        temp = first;
        while (temp->pointer != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->pointer;
        }
        printf("%d ", temp->data);
    }
    else
    {
        printf("Eleman bulunamadı.");
    }
}

int main()
{
    int sayi, count = 0, choice, n;

    while (true)
    {
        printf("\nBaşa eleman eklemek için 1\n");
        printf("Sona eleman eklemek için 2\n");
        printf("Araya eleman eklemen için 3\n");
        printf("Baştan eleman silmek için 4\n");
        printf("Sondan eleman silmek için 5\n");
        printf("Aradan eleman silmek için 6\n");
        printf("Elemanları ters çevirmek için 7\n");
        printf("Eleman adetini öğrenmek için 8\n");
        printf("Elemanların toplamını öğrenmek için 9\n");
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
        case 4:
            bastanSil();
            yazdir();
            break;
        case 5:
            sondanSil();
            yazdir();
            break;
        case 6:
            printf("\nAradan silinecek elemanın değeri: ");
            scanf("%d", &sayi);
            aradanSil(sayi);
            yazdir();
            break;
        case 7:
            tersCevir();
            yazdir();
            break;
        case 8:
            printf("Eleman adeti: %d", elemanSay());
            break;
        case 9:
            printf("Elemanların toplamı: %d", elemanToplam());
            break;
        }
        count++;
    }

    return 0;
}