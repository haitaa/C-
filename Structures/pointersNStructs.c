#include <stdio.h>
#include <string.h>

struct Student
{
    char isim[20];
    char soyIsim[20];
    int numara;
};

int main()
{
    struct Student ogrenci1;
    struct Student *p;

    strcpy(ogrenci1.isim, "Mustafa");
    strcpy(ogrenci1.soyIsim, "Haita");
    ogrenci1.numara = 221307110;

    p = &ogrenci1;

    printf("%s %s %d\n", ogrenci1.isim, ogrenci1.soyIsim, ogrenci1.numara);
    printf("%s %s %d", p->isim, p->soyIsim, p->numara);

    return 0;
}