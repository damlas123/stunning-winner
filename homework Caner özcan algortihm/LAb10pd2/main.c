#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 20
typedef struct student{
	 char name[20];
	int midterm;
	int final;
	struct student *next;
}node;
node *yeni,*old,*succesful,*head;

 void add(){
 	int n;
	printf("enter student number:");
	scanf("%d",&n);
		getchar();
	int i;
     	for(i=0;i<n;i++){
     		if(i==0){
     			yeni=(node *)malloc(sizeof(node));
     			head=yeni;
			 }
			 else{
			 	yeni->next=(node *)malloc(sizeof(node));
			 	yeni=yeni->next;
			 }
		printf("enter student name:");
		scanf("%s",yeni->name);
    	getchar();
		printf("enter midterm grade:");
		scanf("%d",&yeni->midterm);
		printf("enter final grade:");
		scanf("%d",&yeni->final);
		yeni=yeni->next;
	}
	yeni->next=NULL;
 }
 void search(char *searched){
 	node *p;
 	p=head;
 	old=head;
 	while(p->next!=NULL){
 		p=p->next;
 		if(strcmp(p->name,searched)>=0)break;
 		old=p;
	 }
 }
 void list(){
  int avarage,max=0,i=0;
   node *p;
   p=head;
   while(p!=NULL){
   	printf("\n*********************\n");
   	printf("student name:\tstudent midterm:%d\tstudent final:%d\t",p->name,p->midterm,p->final);
  p=p->next;
   }
   }
 
int main(int argc, char *argv[]) {

	printf("1-Add students\t2-List\t3-Update\t4-Calculate avarage\t5-The most succesful person\t");
	int op;
	printf("\nenter which options do you want:");
	scanf("%d",&op);
	while(1){
	
	switch(op){
		case 1:{
			add();
			break;
		}
		case 2:{
			printf("\n************List of class************\n");
			list();
			break;
		}
	}
}
	return 0;
}
