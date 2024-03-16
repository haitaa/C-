#include <stdio.h>

struct Car
{
    int tekerlerSayisi;
    int vitesSayisi;
    int model;
    float motor;
    int beygir;
};

int main()
{
    struct Car araba1 = {0};

    printf("%d %d %d %.2f %d", araba1.tekerlerSayisi, araba1.vitesSayisi, araba1.model, araba1.motor, araba1.beygir);

    return 0;
}