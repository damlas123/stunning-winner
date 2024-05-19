#include <stdio.h>
#include <stdlib.h>
struct number{
	int number;
	struct number *next;
};
 typedef struct number node;
 node *head=NULL;
 void add(int n){
 	node *newnode;
 	newnode=(node *)malloc(sizeof(node));
 	newnode->number=n;
 	if(head==NULL){
 		head=newnode;
	 }
	 newnode=newnode->next;
	 newnode->next=NULL;
 }
 void sil(int counter){
 	int a;
 	a=counter/2;
 	node *current;
 	node *q;
 	current=head;
 	while(a!=0){
 		q=current;
 		current=current->next;
 		a--;
	 }
	 q->next=current->next;
 }
 void list(){
 	node *newnode;
   newnode=head;
 	while(newnode!=NULL){
 		printf("%d\n",newnode->number);
 		newnode=newnode->next;
	 }
 }

int main(int argc, char *argv[]) {
	int number;
	int counter=0;
			
		printf("enter number:");
		scanf("%d",&number);
	while(number!=-1){
		counter++;
		add(number);
		scanf("%d",&number);
	}
	list();
	sil(counter);
	return 0;
}
