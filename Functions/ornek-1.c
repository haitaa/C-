#include <stdio.h>

int toplama(int a, int b)
{
    return a + b;
}

int main()
{
    int sayi1, sayi2;
    printf("İlk sayıyı giriniz: ");
    scanf("%d", &sayi1);

    printf("İkinci sayıyı giriniz: ");
    scanf("%d", &sayi2);

    printf("%d + %d = %d", sayi1, sayi2, toplama(sayi1, sayi2));

    return 0;
}