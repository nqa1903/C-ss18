#include<stdio.h>
#include<string.h>

struct Student{
	char name[50];
	int age;
	char phoneNumber[50];
};

typedef struct Student student;

int main(){
	Student s;
	strcpy(s.name , "Ngo Quang Anh");
	s.age = 20;
	strcpy(s.phoneNumber , "0386878941");
	Student *ptr = &s;
	printf("Thong tin sinh vien \n");
	printf("Ho va ten : %s \n",(*ptr).name);
	printf("Tuoi : %d \n",(*ptr).age);
	printf("SDT : %s \n",(*ptr).phoneNumber);
	return 0;
}
