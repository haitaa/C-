#include <stdio.h>

int main()
{
    int i = 5;

    int *p = &i;
    printf("%p\n", p);

    printf("%d", *p);

    // & değişkenin adres bilgisini verir.
    // * adresteki değeri verir.

    return 0;
}