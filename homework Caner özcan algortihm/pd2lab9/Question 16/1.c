#include <stdio.h>
#include <stdlib.h>

 struct complex{
   int 	a;
 int 	b;
};
void sum(struct complex number1,struct complex number2);

int main(int argc, char *argv[]) {
   struct  complex num1;
	struct complex n2;
	printf("enter number one real part:");
	scanf("%d",&num1.a);
	printf("enter number one complex part:");
	scanf("%d",&num1.b);
	printf("enter number 2 real part:");
	scanf("%d",&n2.a);
	printf("enter number 2 complex part:");
	scanf("%d",&n2.b);
	sum(num1,n2);
	return 0;
}
void sum(struct complex number1,struct complex number2){
	int sum=0,sum1=0;
	sum=number1.a+number2.b;
	sum1=number1.b+number2.b;
	printf("%d + %d i",sum,sum1);
}
