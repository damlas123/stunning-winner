#include <stdio.h>
#include <stdlib.h>

struct student{
	char name[10];
	char surname[10];
	int student_no;
	
};
int main(int argc, char *argv[]) {
	int n;
	printf("enter student number:");
	scanf("%d",&n);
	struct student *ptr;
	ptr=(struct student *)malloc(n*sizeof(struct student));
	int i;
	for(i=0;i<n;i++){
		printf("enter student name:");
		scanf("%s",(ptr+i)->name);
		printf("enter student surname:");
		scanf("%s",(ptr+i)->surname);
		printf("enter student number:");
		scanf("%d",&(ptr+i)->student_no);
		
	}
  printf("*****************************************STUDENT ARRAY*********************************");
  for(i=0;i<n;i++){
  	printf("%s\t%s\t%4d",(ptr+i)->name,(ptr+i)->surname,(ptr+i)->student_no);
  }
  free(ptr);
	return 0;
}
