#include <stdio.h>

struct Student
{
    char name[15];
    char surname[15];
    int no;
    int age;
};

int main()
{
    struct Student mustafa = {"Mustafa", "Haita", 221307110, 19};

    printf("%s %s %d %d", mustafa.name, mustafa.surname, mustafa.no, mustafa.age);

    return 0;
}