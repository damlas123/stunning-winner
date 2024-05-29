#include <stdio.h>
#include <stdlib.h>
struct list{
	int number;
	struct list *next;
};
typedef struct list node;
node *head=NULL;
node *tail=NULL;
void addTolast();
void add_list(int ar[],int b);
void list();
int main(){
    int n;
    printf("enter array size:");
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++){
    	printf("enter array elements:");
    	scanf("%d",&arr[i]);
	}
	add_list(arr,n);
	list();
	printf("after swapping head and tail\n");
	addTolast();
	list();
    return 0;
}
void add_list(int ar[],int b){
	node *p;
	int i;

	for(i=0;i<b;i++){
			p=(node *)malloc(sizeof(node));
			p->number=ar[i];
			p->next=NULL;
	if(head==NULL){
		head=p;
		tail=p;
	}
	else{
		tail->next=p;
		tail=p;
	}
	}
}
void addTolast(){
	node *current;
	current=head;
	node *prev=NULL;
	if(head==NULL || head->next==NULL){
		return ;
	}
	
	else{
		while(current->next!=NULL){
			prev=current;
			current=current->next;
		}
		
		current->next=head->next;
		prev->next=head;
		head->next=NULL;
		head=current;
	}
}
void list(){
	node *p;
	p=head;
	while(p!=NULL){
		printf("%d\t",p->number);
		p=p->next;
	}
}
