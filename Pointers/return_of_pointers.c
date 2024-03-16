#include <stdio.h>
#include <string.h>

char *dondur(char *dizi, int index)
{
    int size = strlen(dizi);

    if (index > size)
    {
        return NULL;
    }
    else
    {
        return dizi + index;
    }
}

int main()
{
    char dizi[] = "yazilim";

    char *p = dondur(dizi, 2);

    if (p == NULL)
    {
        printf("Pointer NULL.");
    }
    else
    {
        printf("%s", p);
    }

    return 0;
}