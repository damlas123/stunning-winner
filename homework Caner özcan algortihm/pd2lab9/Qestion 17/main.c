#include <stdio.h>
#include <stdlib.h>

struct student{
	char name[10];
	char surname[10];
	int student_no;
};
int main(int argc, char *argv[]) {
	struct student array[5];
	int i;
	printf("enter student information:");
	for(i=0;i<5;i++){
		printf("enter studetn surname:");
		scanf("%s",&array[i].name);
		printf("enter student surname:");
		scanf("%s",&array[i].surname);
		printf("enter studetn number:");
		scanf("%d",&array[i].student_no);
	}
	for(i=0;i<5;i++){
		printf("%s\t%s\%4d",array[i].name,array[i].surname,array[i].student_no);
		printf("\n");
			}
	return 0;
};

