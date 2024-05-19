#include <stdio.h>
#include <stdlib.h>
struct number{
	int digit;
	struct number *next;
};
typedef struct number node;
node *head=NULL;
node *tail=NULL;
void createlist(int num){
	node *p;
	p=(node *)malloc(sizeof(node));
	p->digit=num;
	if(head==NULL){
		head=p;
		tail=p;
	}
	else{
		tail->next=p;
		tail=p;
	}
	p->next=NULL;
}
void list(){
	node *newnode;
	newnode=(node *)malloc(sizeof(node));
	newnode=head;
	while(newnode!=NULL){
		printf("%d\n",newnode->digit);
		newnode=newnode->next;
	}
}
void cutheadaddlast(){
	tail->next=head;
	tail=head;
	tail->next=NULL;
	head=head->next;
}
int main() {
	int number;
	printf("enter number:");
	scanf("%d",&number);
	while(number!=-1){
		createlist(number);
		scanf("%d",&number);
	}
	cutheadaddlast();
	list();
	return 0;
}
