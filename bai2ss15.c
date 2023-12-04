#include<stdio.h>
#include<string.h>
struct student{
char name[30];
int age ;
char phone[20];
char email[30];
};
void display(struct student std);
int main()
{
	struct student s1;
	printf("Nhap ten:");
	gets(s1.name);
	printf("Nhap tuoi: ");
	scanf("%d", &s1.age);
	printf("Nhap sdt: ");
	scanf("%d", &s1.phone);
	printf("Nhap email: ");
	scanf("%s",&s1.email);
	display(s1);
	return 0;
}
void display (struct student std)
{
	printf("\nThong tin ca nhan\n");
	printf("Name: %s\n",  s.name);
	printf("\nAge: %d\n", s.age);
	printf("%d", s.phone);
	printf("Email: %s\n", s.email);
}