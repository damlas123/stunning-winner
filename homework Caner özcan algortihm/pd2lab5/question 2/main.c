#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int number,number2;
	int *p,*p2;
	p=&number;
	p2=&number2;
	printf("enter the number :");
	scanf("%d",p);
	printf("enter the number:");
	scanf("%d",p2);
	printf("%d + %d=%d",*p,*p2,*p+*p2);
	return 0;
}
