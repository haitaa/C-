#include <stdio.h>

char *gunDondur(char *gunler[], int size, int hangiGun)
{
    if (hangiGun >= 1 && hangiGun <= 7)
    {
        return gunler[hangiGun - 1];
    }
    else
    {
        return NULL;
    }
}

int main()
{
    char *gunler[7] = {"pazartesi", "salı", "çarşamba", "perşembe", "cuma", "cumartesi", "pazar"};

    char *p = gunDondur(gunler, 7, 3);

    if (p == NULL)
    {
        printf("Pointer NULL");
    }
    else
    {
        printf("%s", p);
    }

    return 0;
}