#include <stdio.h>

void degerDegistir(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 5, y = 10;
    degerDegistir(&x, &y);

    printf("x: %d, y: %d", x, y);

    return 0;
}