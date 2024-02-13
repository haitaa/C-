#include <stdio.h>

int main()
{
    int toplam = 0, i, sayi;

    for (i = 0; i >= 0; i++)
    {
        printf("Sayıyı giriniz (Cikmak icin -1 basın): \n");
        scanf("%d", &sayi);

        if (sayi == -1)
        {
            break;
        }

        toplam += sayi;
    }
    printf("Girilen sayıların toplamı: %d", toplam);

    return 0;
}