#include <stdio.h>
#include <stdlib.h>
struct student{
	char name[50];
	int age;
};
void display(struct student s);
int main(int argc, char *argv[]) {
	struct student s1;
	printf("enter name:");
	scanf("%[^\n]%*c",s1.name);
	
	printf("enter age:");
	scanf("%d",&s1.age);
	display(s1);
	return 0;
}
void display(struct student s){
	printf("\ndisplaying information\n");
	printf("name:%s",s.name);
	printf("\nage:%d",s.age);
}
