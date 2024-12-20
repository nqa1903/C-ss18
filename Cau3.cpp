#include<stdio.h>
#include<string.h>

struct Student{
	char name[50];
	int age;
	char phoneNumber[50];
};

typedef struct Student student;

void createStudent(student *s){
	printf("Nhap ten : ");
	fgets(s->name , sizeof(s->name) , stdin);
	printf("Nhap tuoi : ");
	scanf("%d",&s->age);
	fflush(stdin);
	printf("Nhap SDT : ");
	fgets(s->phoneNumber,sizeof(s->phoneNumber),stdin);
}

void displayStudent(student *s){
	printf("Ho va ten : %s \n",s->name);
	printf("Tuoi : %d \n",s->age);
	printf("SDT : %s \n",s->phoneNumber);
}

int main(){
	student students[5];
	printf("Nhap thong tin 5 sinh vien : \n");
	for(int i = 0 ; i < 5 ; i++){
		printf("Sinh vien thu %d \n",i+1);
		createStudent(&students[i]);
	}
	printf("Thong tin 5 sinh vien vua nhap : \n");
	for(int i = 0 ; i < 5 ; i++){
		printf("Sinh vien thu %d \n",i+1);
		displayStudent(&students[i]);
	}
	return 0;
}
