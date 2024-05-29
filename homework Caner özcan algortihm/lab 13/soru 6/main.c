#include <stdio.h>
#include <stdlib.h>

struct number{
	int n1;
	struct number *next;
};
typedef struct number node;
node *head=NULL;
node *tail=NULL;
void add_number(int no);
void list();
int main(int argc, char *argv[]) {
	int n;
	printf("enter a number for exit enter -1");
	do{
		scanf("%d",&n);
		add_number(n);
	}while(n!=-1);
	list();
	return 0;
}
void add_number(int no){
	node *current;
	current=(node *)malloc(sizeof(node));
	current->n1=no;
	
	current->next=NULL;
  if(head==NULL){
  	head=current;
  	tail=current;
  }
  else{
  	if(no%2==0){
  	current->next=head;
  	head=current;
	  }
	  else{
	  	tail->next=current;
	  tail=current;
	  }
  }
  
}
  void list(){
  	node *p;
  	p=head;
  	while(p!=NULL){
  		printf("%d\n",p->n1);
  		p=p->next;
	  }
	  printf("\n");
  }



