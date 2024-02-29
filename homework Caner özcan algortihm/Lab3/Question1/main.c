#include <stdio.h>
#include <stdlib.h>
int sum(int n){
	int s=0;
	if(n!=0){
		s+=n+sum(n-1);
	}
	else{
		return s;
	}
}

int main(int argc, char *argv[]) {
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	printf("the sum of 1-%d is :%d",n,sum(n));
	return 0;
}
