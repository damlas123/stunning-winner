#include <stdio.h>
#include <stdlib.h>

int sum(int n){
	int i=0;
	if(n>0){
		i+= n % 10+	sum(n/10);
	
	}
	else{
		return i;
	}
}
int main(int argc, char *argv[]) {
	int number;
	printf("enter a number:");
	scanf("%d",&number);
	int i=0,n2=number;
	
	printf("the digit sum of the the %d:%d",number,sum(number));
	return 0;
}
