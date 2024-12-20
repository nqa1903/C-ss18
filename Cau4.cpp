#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[50];
};

typedef struct Student student;

void createStudent(student *s, int id) {
    s->id = id;
    printf("Nhap ten sinh vien: ");
    fgets(s->name, sizeof(s->name), stdin);
    s->name[strcspn(s->name, "\n")] = '\0';
    printf("Nhap tuoi: ");
    scanf("%d", &s->age);
    while (getchar() != '\n');
    printf("Nhap SDT: ");
    fgets(s->phoneNumber, sizeof(s->phoneNumber), stdin);
    s->phoneNumber[strcspn(s->phoneNumber, "\n")] = '\0';
}

void printStudent(const student *s) {
    printf("ID: %d\n", s->id);
    printf("Ho va ten: %s\n", s->name);
    printf("Tuoi: %d\n", s->age);
    printf("SDT: %s\n", s->phoneNumber);
    printf("--------------------------\n");
}

int main() {
    student students[50];
    int i;
    for (i = 0; i < 5; i++) {
        printf("\nSinh vien thu %d:\n", i + 1);
        createStudent(&students[i], i + 1);
    }
    printf("\nThong tin cac sinh vien:\n");
    for (i = 0; i < 5; i++) {
        printStudent(&students[i]);
    }
    return 0;
}

