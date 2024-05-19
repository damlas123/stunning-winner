#include <stdio.h>
#include <stdlib.h>

struct number{
	int digit;
	struct number *next;
};
 typedef struct number node;
 node *head=NULL;
 node *tail=NULL;
 void add_to_head(int num);
  void add_to_tail(int num);
 void list();
int main(int argc, char *argv[]) {
	int n;
	while(1){
		printf("enter a number:");
		scanf("%d",&n);
		if(n==-1){
			break;
		}
		if(n%2!=0){
			add_to_head(n);
		}
		else{
			add_to_tail(n);
		}
	}
	list();
	return 0;
}
 void add_to_head(int  num){
 	node *newnode;
 	newnode=(node *)malloc(sizeof(node));
 	newnode->digit=num;
 	newnode->next=head;
 	head=newnode;
 	if(tail==NULL){
 		tail=newnode;
	 }
 }
 void add_to_tail(int num){
 	node *newnode;
 	newnode=(node *)malloc(sizeof(node));
 	newnode->digit=num;
 	newnode->next=NULL;
 	if(tail==NULL){
 		tail=newnode;
 		head=newnode;
	 }
	 else{
	 	tail->next=newnode;
	 	tail=newnode;
	 }
 }
 void list(){
 	node *current;
 	current=head;
 	while(current->next!=NULL){
 		printf("%d\n",current->digit);
 		current=current->next;
	 }
 }
