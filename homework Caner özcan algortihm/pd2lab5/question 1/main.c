#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int var=10;
	int *p;
	p=&var;
	printf("the adress is of var is:%p",&var);
	printf("\nthe adrres of var is:%p",p);
	
	
    printf("\nvalue of var is:%d",var);
	printf("\value of var is:%d",*p);
	printf("\nvalue of var is:%d",*(&var));
	
	printf("\nvalue of pointer p is :%p",p);
	printf("\nadress of pointer p is:%p",&p);
	return 0;
}
