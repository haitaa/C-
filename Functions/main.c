#include <stdio.h>

void hatayiBas(int hata)
{
    printf("Hata kodu %d", hata);
}

int main()
{
    int sayi;
    printf("Lütfen negatif olmayan bir sayı giriniz: ");
    scanf("%d", &sayi);

    if (sayi < 0)
    {
        hatayiBas(404);
    }

    return 0;
}