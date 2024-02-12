#include <stdio.h>

int main()
{
    int n;
    int fact = 1;

    printf("Faktöriyel almak istediğiniz sayıyı giriniz: ");
    scanf("%d", &n);

    while (n != 0)
    {
        printf("%d\n", n);
        fact = fact * n;

        n--;
    }

    printf("Faktöriyel sonucu: %d", fact);

    return 0;
}