#include <stdio.h>
#include <stdlib.h>

#define BOY 10

struct yigin
{
    int dizi[BOY];
    int top;
};

struct yigin y1;

void elemanEkle(int n)
{
    if (y1.top == BOY - 1)
    {
        printf("Yığın doludur.\n");
    }
    else
    {
        y1.top++;
        y1.dizi[y1.top] = n;
    }
}

void elemanCikar()
{
    if (y1.top == -1)
    {
        printf("Yığın boştur. Çıkacak eleman yoktur.");
    }
    else
    {
        int cikanSayi = y1.dizi[y1.top];
        y1.top--;
        printf("%d sayısı yığından çıkarıldı.", cikanSayi);
    }
}

void yazdir()
{
    int i;
    if (y1.top == -1)
    {
        printf("Yığın boştur.");
    }
    else
    {
        for (i = y1.top; i > -1; i--)
        {
            printf("%d ", y1.dizi[i]);
        }
        printf("\n");
    }
}

int main()
{
    int secim, sayi;

    y1.top = -1;

    while (1)
    {
        printf("YIGIN (STACK)\n");
        printf("1 --> eleman ekle (push)\n");
        printf("2 --> eleman çıkar (pop)\n");
        printf("3 --> yazdir (display)\n");
        printf("4 --> CIKIS (exit)\n");
        printf("Seciminizi yapınız: ");
        scanf("%d", &secim);

        switch (secim)
        {
        case 1:
            printf("\nEklenecek sayı: ");
            scanf("%d", &sayi);
            elemanEkle(sayi);
            break;
        case 2:
            printf("\nEleman çıkarma işlemi gerçekleşmiştir.");
            elemanCikar();
            break;
        case 3:
            yazdir();
            break;
        case 4:
            printf("Programdan çıkılıyor...");
            return 0;
        }
    }

    return 0;
}