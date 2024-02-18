#include <stdio.h>
#include <stdlib.h>

void myMessage()
{
    printf("Now I can write a function\n");
}

void nameList(char name[], int age)
{
    printf("%s, You are %d years old.\n", name, age);
}

int main()
{

    nameList("Mustafa", 19);
    myMessage();

    return 0;
}