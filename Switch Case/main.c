#include <stdio.h>

int main()
{
    int islem;
    float bakiye = 1000;
    float tutar;

    printf("İşlemler\n1- Para Çekme\n2- Para Yatırma\n3- Havale Yapma\n4- Bakiye Sorgulama\n5- Çıkış\n");
    printf("İşlem seçiniz: ");
    scanf("%d", &islem);

    switch (islem)
    {
    case 1:
        printf("Bakiyeniz: %.2f\n", bakiye);
        printf("Çekilecek Tutar: ");
        scanf("%f", &tutar);
        if (tutar > bakiye)
        {
            printf("Bakiye yetersiz\n");
            break;
        }
        bakiye -= tutar;
        printf("Güncel bakiyeniz: %.2f\n", bakiye);
        break;
    case 2:
        printf("Bakiyeniz: %.2f\n", bakiye);
        printf("Yatırılacak tutar: ");
        scanf("%f", &tutar);
        if (tutar <= 0)
        {
            printf("Girdiğiniz miktar hatalı.\n");
            break;
        }
        bakiye += tutar;
        printf("Güncel bakiyeniz: %.2f\n", bakiye);
        break;
    case 3:
        printf("Bakiyeniz: %.2f\n", bakiye);
        printf("Gönderilecek tutar: ");
        scanf("%f", &tutar);
        if (tutar > bakiye && tutar <= 0)
        {
            printf("İşlem gerçekleştirilemedi. Girdiğiniz tutar hatalı.\n");
            break;
        }
        bakiye -= tutar;
        printf("Güncel bakiyeniz: %.2f\n", bakiye);
        break;
    case 4:
        printf("Bakiyeniz: %.2f\n", bakiye);
        break;
    case 5:
        printf("Oturum kapatıldı. İyi günler!\n");
        break;
    }

    return 0;
}