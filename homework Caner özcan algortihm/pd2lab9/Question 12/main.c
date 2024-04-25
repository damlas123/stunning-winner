#include <stdio.h>
#include <stdlib.h>

struct student{
	char name[10];
	char surname[10];
	int number;
	int midtermGrade;
};
int main(int argc, char *argv[]) {
	int i;
	struct student array[10];
	for(i=0;i<3;i++){
		printf("enter %d student name:",i+1);
		scanf("%s",&array[i].name);
		printf("enter %d student surname :",i+1);
		scanf("%s",&array[i].surname);
		printf("enter student number:");
		scanf("%d",&array[i].number);
		printf("enter midterm Grade:");
		scanf("%d",&array[i].midtermGrade);
	}
	printf("\n**********************************THE MIDTERM GRADE***************************\n");
	for(i=0;i<3;i++){
		printf("%s\t%s\t%4d%4d",array[i].name,array[i].surname,array[i].number,array[i].midtermGrade);
		printf("\n");
	}
	return 0;
}
