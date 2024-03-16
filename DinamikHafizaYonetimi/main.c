#include <stdio.h>
#include <stdlib.h>

void degerAta(int *x, size_t size);
void yazdir(int *x, size_t size);

int main()
{

    int boyut;
    printf("Bir boyut giriniz: ");
    scanf("%d", &boyut);

    int *c = (int *)malloc(boyut * sizeof(int)); // boyut kadar integerlık yer ayırır.
    free(c);

    int *d = (int *)calloc(boyut, sizeof(int)); // boyut kadar integerlık yer ayırır ve içlerine 0 yazar.
    free(d);

    int *f = (int *)calloc(boyut, sizeof(int));

    int *f_buyuk = (int *)realloc(f, 150);      // 100-150 arasını boş bırakarak hafızada yer tutar.
    int *f_kucuk = (int *)realloc(f_buyuk, 50); // ilk 50 elemanı korur, öteki 50 elemana erişimimiz olmaz.

    // Önemli:
    // Her malloc, calloc veya realloc kullandığımızda FREE kullanmayı unutmamalıyız.
    // Her malloc, calloc veya realloc kullandığımızda NULL kontrolü yapmalıyız.

    if (f_kucuk != NULL)
    {
        degerAta(f_kucuk, 50);
        yazdir(f_kucuk);
    }

    free(f);
    free(f_buyuk);
    free(f_kucuk);

    return 0;
}