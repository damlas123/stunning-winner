#include <stdio.h>
#include <stdlib.h>

struct student{
	char name[50];
	int age;
};
struct student getInformation();
int main(int argc, char *argv[]) {
	struct student s;
	s=getInformation();
	printf("\nDisplaying information");
	printf("Name:%s",s.name);
	printf("\nRool:%d",s.age);
	return 0;
}
struct student getInformation(){
	struct student s1;
	printf("enter name:");
	scanf("%[^\n]%*c",s1.name);
	
	printf("enter age:");
	scanf("%d",&s1.age);
	return s1;
}
