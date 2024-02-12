#include <stdio.h>

int main()
{
    int note;
    printf("Notunuzu giriniz: ");
    scanf("%d", &note);

    if (note > 60)
    {
        printf("Sınıfı geçtiniz.");
    }
    else
    {
        printf("Kaldınız!");
    }

    return 0;
}