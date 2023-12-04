#include<stdio.h>
#include<string.h>
struct sinhVien{
char name[30];
int age ;
char phone[20];
char email[30];
};
void display(struct sinhVien s);

int main()
{
	struct sinhVien sv1;
	strcpy(sv1.name,"Nguyen Van A");
	sv1.age = 18;
	strcpy(sv1.phone, " 098765432");
	strcpy(sv1.email, "VanA@tmail.com");
	printf("Ten cua sinh vien là%s\n", sv1.name);
	printf("Tuoi cua sv1 la %d\n",sv1.age);
	printf("SDT sv1 la %s\n", sv1.phone);
	printf("email cua sv 1 %s\n", sv1.email);
	return 0;
}