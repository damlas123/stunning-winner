#include <stdio.h>
#include <stdlib.h>
int biggest(int num1,int num2,int a){
	int i;
	if(num1>0 && num2>0){
	
	if(num1%a==0 && num2%a==0){
		return(num1/a,num2/a);
		i+=a;
	}
}
 return i;
}
int main(int argc, char *argv[]) {
	int n1,n2;
	printf("enter  number 1:");
	scanf("%d",&n1);
	printf("enter number 2:");
	scanf("%d",&n2);
	int a=1;
	printf("largest common divisor of these number:%d",biggest(n1,n2,a));
	return 0;
}
