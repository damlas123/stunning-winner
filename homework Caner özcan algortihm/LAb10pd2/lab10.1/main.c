#include <stdio.h>
#include <stdlib.h>

struct student{
	char name[40];
	int midterm,final;
	struct student *next;
};
typedef struct student node;
node *head,*yeni,*onceki,*enbasarili;
void creatlist(){
	int n,k;
	printf("enter student number:");
	scanf("%d",&n);
	for(k=0;k<n;k++){
		if(k==0)
{
	yeni=(node *)malloc(sizeof(node));
	head=yeni;
	}
	else{
		yeni->next=(node *)malloc(sizeof(node));
		yeni=yeni->next;
		
	}
	printf("enter student name:");scanf("%s",yeni->name);
	printf("enter student midterm:");scanf("%d",&yeni->midterm);
	printf("enter student final:");scanf("%d",&yeni->final);
	
	}
	yeni->next=NULL;
}
void list(){
	node *p;
	p=head;
	while(p!=NULL){
		printf("student name:%s\tstudent midterm:%d\tstudent final:%d\n",p->name,p->midterm,p->final);
		p=p->next;	
	}
}
double succesful(int vize,int final){
	return (0.4*vize)+(0.6*final);
}
void findsucccesful(){
	double basari=0;
	node *p;
	p=head;
	enbasarili=head;
	while(p->next!=NULL){
		p=p->next;
		if(succesful(p->midterm,p->final)>succesful(enbasarili->midterm,enbasarili->final))
{
	enbasarili=p;
	}	}
	printf("The succesfull student:");
	printf("Name:%s\tNot:%.2lf",enbasarili->name,(succesful(enbasarili->midterm,enbasarili->final)));
	
}
void avarage(){
	double basari=0;
	double toplam=0;
	int i=0;
	node *p;
	p=head;
	if(p==NULL){
		printf(" in the list there is no information");
	}
	else{
		do{
			toplam+=succesful(p->midterm,p->final);
			p=p->next;
			i++;
		}while(p!=NULL);
	}
	basari=toplam/i;
	printf("\nTHE AVARAGE:%.2lf\n",basari);
}
int main(int argc, char *argv[]) {
	int op;
	printf("Which operator do you want to make:\n1-)create list\t2-List student\t3-Find most succesful student\t4-Avarage");
	scanf("%d",&op);
	while(1){
	
	switch(op){
		case 1: creatlist();
			scanf("%d",&op);
			break;
		case 2:{	
		printf("\n**************************\n");
			list();	scanf("%d",&op);
			break;
		}
		case 3:{
			findsucccesful();	scanf("%d",&op);
			break;
		}
		case 4:{
			avarage();	scanf("%d",&op);
			break;
		}
	
	case 5:{
		exit(0);
		break;
	}
	scanf("%d",&op);
}}
	return 0;
}
