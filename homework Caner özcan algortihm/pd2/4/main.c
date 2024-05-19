#include <stdio.h>
#include <stdlib.h>

struct number{
	int num;
	struct number *next;
};
typedef struct number node;
 node *head=NULL;
 node *tail=NULL;
 void creatlist(int n){
 	node *newnode;
 	newnode=(node *)malloc(sizeof(node));
	newnode->num=n;
	if(head==NULL){
		head=newnode;
		tail=newnode;
	}
	else{
		tail->next=newnode;
		tail=newnode;
	}
	newnode->next=NULL;
 }
int swap( int a[]){
 	int temp;
 	temp=head->num;
 	head->num=tail->num;
 	tail->num=temp;
 	return a;
 } 
 void list(){
 	node *current;
 	current=head;
 	while(current!=NULL){
 		printf("%d\n",current->num);
 		current=current->next;
	 }
 }
int main(int argc, char *argv[]) {
	int sayi;
	printf("enter array numbers:");
	scanf("%d",&sayi);
	int i;
	int eklenen;
	int array[sayi];
	for(i=0;i<sayi;i++){
		scanf("%d",&array[i]);
		creatlist(array[i]);
	}
	swap(array);
	list();
	return 0;
}
