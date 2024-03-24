#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *temp = NULL;
struct node *top = NULL;

void push(int data)
{
    struct node *eleman = (struct node *)malloc(sizeof(struct node));
    eleman->data = data;

    if (top == NULL)
    {
        top = eleman;
        top->next = NULL;
    }
    else
    {
        eleman->next = top;
        top = eleman;
    }
}

void pop()
{
    if (top == NULL)
    {
        printf("Yığında eleman yoktur.");
    }
    else
    {
        printf("%d elemanı stackten çıkarıldı.\n", top->data);
        temp = top->next;
        free(top);
        top = temp;
    }
}

void show()
{
    if (top == NULL)
    {
        printf("Stack boştur.\n");
    }
    else
    {
        temp = top;
        while (temp->next != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("%d ", temp->data);
    }
}

void peek()
{
    if (top == NULL)
    {
        printf("Stack boş.\n");
    }
    else
    {
        printf("Yığındaki en ust eleman: %d", top->data);
    }
}

int main()
{
    int secim, sayi;
    while (1)
    {
        printf("YIGIN (STACK)\n");
        printf("1 --> eleman ekle (push)\n");
        printf("2 --> eleman çıkar (pop)\n");
        printf("3 --> yazdir (display)\n");
        printf("4 --> peek değerini gör\n");
        printf("5 --> CIKIS (exit)\n");
        printf("Seciminizi yapınız: ");
        scanf("%d", &secim);

        switch (secim)
        {
        case 1:
            printf("\nEklenecek sayı: ");
            scanf("%d", &sayi);
            push(sayi);
            break;
        case 2:
            printf("\nEleman çıkarma işlemi gerçekleşmiştir.");
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            peek();
            break;
        case 5:
            printf("Programdan çıkılıyor...");
            return 0;
        }
    }
    return 0;
}