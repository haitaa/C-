#include <stdio.h>

int main()
{
    float toplam = 0.0;
    float sayilar[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Bir sayı giriniz: ");
        scanf("%f\n", &sayilar[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        toplam += sayilar[i];
    }
    printf("Girdiğiniz sayıların aritmetik ortalaması %.2f dir.", toplam);

    return 0;
}