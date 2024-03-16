#include <stdio.h>
#include <string.h>

struct Address
{
    char mahalle[15];
    char cadde[20];
    char sokak[15];
};

struct Student
{
    char isim[20];
    char soyIsim[20];
    int numara;
    int yas;
    struct Address adres;
};

int main()
{
    struct Student ogrenci1;

    strcpy(ogrenci1.isim, "Mustafa");
    strcpy(ogrenci1.soyIsim, "Haita");
    ogrenci1.yas = 19;
    ogrenci1.numara = 221307110;
    strcpy(ogrenci1.adres.mahalle, "Kabaoğlu");
    strcpy(ogrenci1.adres.cadde, "Baki Komşuoğlu");
    strcpy(ogrenci1.adres.sokak, "451");

    return 0;
}