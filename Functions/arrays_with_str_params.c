#include <stdio.h>
#include <string.h>

int sizeOf(char name[])
{
    int size = 0;
    int i;

    for (i = 0; name[i] != '\0'; i++)
    {
        size++;
    }

    return size;
}

void reverse(char name[])
{
    int i, size, temp;

    size = strlen(name);
    for (i = 0; i < size / 2; i++)
    {
        temp = name[i];
        name[i] = name[size - 1 - i];

        name[size - 1 - i] = temp;
    }
}

int main()
{

    char isim[] = "Mustafa";
    reverse(isim);
    printf("%s", isim);

    return 0;
}