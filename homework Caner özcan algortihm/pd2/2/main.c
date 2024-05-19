#include <stdio.h>
#include <stdlib.h>
struct node { 
int number; 
struct node *next; 
};
typedef struct node dugum;
dugum *head=NULL;
dugum *tail=NULL;
dugum cutlastaddhead(){
	if(head==NULL || head->next==NULL){
		return ;
	}
	dugum *current=head;
	while(current->next!=tail){
		current=current->next;
	}
	tail->next=head;
	head=tail;
	current->next=NULL;
	tail=current;
}
void add(int number){
     dugum *newnode;
     newnode=(dugum *)malloc(sizeof(dugum));
    newnode->next=NULL;
    if(head==NULL){
    	head=newnode;
    	tail=newnode;
	}
	else{
		newnode->next=tail;
		tail=newnode;
	}
}
void list(){
	dugum *current;
	current=head;
	while(current!=NULL){
		printf("%d\n",current->number);
		current=current->next;
	}
}
int main(int argc, char *argv[]) {
	int n;
	int selection;
	printf("for adding number enter 1 and for exit 2:\n");
	scanf("%d",&selection);
	do{
		printf("enter number:");
		scanf("%d",&n);
		add(n);
		printf("for adding number enter 1 and for exit 2:\n");
		scanf("%d",&selection);
	}while(selection!=2);
	cutlastaddhead();
	list();
	return 0;
}
