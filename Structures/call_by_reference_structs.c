#include <stdio.h>
#include <string.h>

struct Student
{
    char isim[20];
    char soyIsim[20];
    int numara;
};

void goster(struct Student *p)
{
    printf("Öğrencinin Bilgileri\n");
    printf("İsim: %s,\nSoyisim: %s,\nNumara: %d", p->isim, p->soyIsim, p->numara);
}

struct Student *degerAl(struct Student *p)
{
    strcpy(p->isim, "Mehmet");
    strcpy(p->soyIsim, "Gencol");
    p->numara = 455;

    return p;
}

int main()
{
    struct Student *tut;
    struct Student ogrenci = {"Mustafa", "Haita", 221307110};
    // goster(&ogrenci);

    tut = degerAl(&ogrenci);

    printf("%s %s %d", tut->isim, tut->soyIsim, tut->numara);

    return 0;
}