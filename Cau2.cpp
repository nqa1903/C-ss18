#include<stdio.h>
#include<string.h>

struct Student{
	char name[50];
	int age;
	char phoneNumber[50];
};

typedef struct Student student;

void createStudent(student *s){
	printf("Nhap ten sinh vien : ");
	fgets(s->name , sizeof(s->name) , stdin);
	printf("Nhap tuoi : ");
	scanf("%d",&s->age);
	fflush(stdin);
	printf("Nhap SDT : ");
	fgets(s->phoneNumber , sizeof(s->phoneNumber), stdin);
}

int main(){
	student s;
	createStudent(&s);
	printf("\n Thong tin sinh vien : \n");
	printf("Ho va ten : %s \n",s.name);
	printf("Tuoi : %d \n",s.age);
	printf("SDT : %s \n",s.phoneNumber);
	return 0;
}
