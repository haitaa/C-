#include <stdio.h>
#include <string.h>

int myStrlen(char *name)
{
    int size = 0;
    int i;
    for (i = 0; name[i] != '\0'; i++)
    {
        size++;
    }
    return size;
}

int main()
{
    char name[] = "mustafa";
    char *p = name;
    int size;

    size = myStrlen(p);
    printf("Girdiğiniz değerin uzunluğu: %d", size);

    return 0;
}