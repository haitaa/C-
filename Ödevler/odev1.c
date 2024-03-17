#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct Student
{
    char name[20];
    char surname[20];
    int no;
    char faculty[30];
    char department[30];
};

struct node
{
    struct Student student;
    struct node *next;
};

struct node *first = NULL;
struct node *temp = NULL;

void addStudent(struct Student student)
{
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    head->student = student;
    head->next = NULL;

    if (first == NULL)
    {
        first = head;
    }
    else
    {
        temp = first;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = head;
    }
}

int size()
{
    int count = 0;

    if (first == NULL)
    {
        return count;
    }

    temp = first;
    while (temp->next != NULL)
    {
        count++;
        temp = temp->next;
    }
    count++;
    return count;
}

struct node *editStudent(int n)
{
    int count = size();
    temp = first;

    if (count == 1)
    {
        return temp;
    }

    while (temp->next != NULL)
    {
        if (temp->student.no == n)
        {
            return temp;
        }
    }
    return NULL;
}

void deleteStudent(int n)
{
    struct node *current = first;
    struct node *previous = NULL;

    while (current != NULL && current->student.no != n)
    {
        previous = current;
        current = current->next;
    }

    if (current == NULL)
    {
        printf("\nÖğrenci bulunamadı.");
        return;
    }

    if (previous == NULL)
    {
        first = current->next;
    }
    else
    {
        previous->next = current->next;
    }

    free(current);
    printf("Öğrenci başarıyla silindi.");
}

int findIndex(struct node node)
{
}

void yazdir()
{
    temp = first;
    while (temp->next != NULL)
    {
        printf("\nÖğrenci Bilgilerini\n");

        printf("Ad: %s", temp->student.name);
        printf("\nSoyad: %s", temp->student.surname);
        printf("\nOkul Numarası: %d", temp->student.no);
        printf("\nFakülte: %s", temp->student.faculty);
        printf("\nBölüm: %s", temp->student.department);
        printf("\n");
        temp = temp->next;
    }
    printf("\nÖğrenci Bilgilerini \n");
    printf("Ad: %s", temp->student.name);
    printf("\nSoyad: %s", temp->student.surname);
    printf("\nOkul Numarası: %d", temp->student.no);
    printf("\nFakülte: %s", temp->student.faculty);
    printf("\nBölüm: %s", temp->student.department);
    printf("\n");
}

int main()
{
    int choice, n, position;
    bool exit = false;
    struct Student ogrenci;
    struct node *head;

    while (!exit)
    {
        printf("Bağlı Liste İşlemleri\n");
        printf("1. Yeni Öğrenci Ekle\n");
        printf("2. Öğrenci Bilgilerini Görüntüle\n");
        printf("3. Öğrenci Bilgilerini Düzenle\n");
        printf("4. Öğrenci Sil\n");
        printf("5. Çıkış\n");

        printf("Seçiminizi yapın: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nÖğrenci Bilgilerini Girin: \n");

            printf("Ad: ");
            scanf("%s", &ogrenci.name);
            printf("\nSoyad: ");
            scanf("%s", &ogrenci.surname);
            printf("\nOkul Numarası: ");
            scanf("%d", &ogrenci.no);
            printf("\nFakülte: ");
            scanf("%s", &ogrenci.faculty);
            printf("\nBölüm: ");
            scanf("%s", &ogrenci.department);
            addStudent(ogrenci);
            printf("Öğrenci başarıyla eklendi.");
            break;
        case 2:
            yazdir();
            break;
        case 3:
            printf("\nÖğrenci Düzenleme Ekranı: \n");
            printf("Düzenlemek istediğiniz öğrencinin numarasını giriniz: ");
            scanf("%d", &n);
            head = editStudent(n);

            if (head == NULL)
            {
                printf("Öğrenci bulunamadı.");
                break;
            }

            printf("Ad: ");
            scanf("%s", &head->student.name);
            printf("\nSoyad: ");
            scanf("%s", &head->student.surname);
            printf("\nOkul Numarası: ");
            scanf("%d", &head->student.no);
            printf("\nFakülte: ");
            scanf("%s", &head->student.faculty);
            printf("\nBölüm: ");
            scanf("%s", &head->student.department);
            printf("\nÖğrencinin bilgileri başarıyla güncellenmiştir.");
            break;
        case 4:
            printf("\nÖğrenci Silme Ekranı: ");
            printf("\nSilmek istediğiniz öğrencinin numarasını giriniz: ");
            scanf("%d", &n);
            deleteStudent(n);
            break;
        }
    }

    return 0;
}