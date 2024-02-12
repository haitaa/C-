#include <stdio.h>

int main()
{
    int vize, final;
    float dersOrt, agno;

    printf("Vize notunuzu giriniz: ");
    scanf("%d", &vize);

    printf("Final notunuzu giriniz: ");
    scanf("%d", &final);

    printf("Üniversite ortalamanızı giriniz: ");
    scanf("%f", &agno);

    dersOrt = (vize + final) / 2;

    if (dersOrt > 60)
    {
        printf("Sınıfı geçtiniz.");
    }
    else if (dersOrt > 50 && dersOrt < 60)
    {
        printf("Dersten büte kaldınız.\n");
        if (agno < 2.5)
        {
            printf("Bütü geçsen bile dersi seneye al, ortalaman çok düşük.");
        }
    }
    else
    {
        printf("Dersten kaldınız.");
    }

    return 0;
}