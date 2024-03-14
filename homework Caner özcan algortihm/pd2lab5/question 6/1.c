#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n;
	printf("enter size of array:");
	scanf("%d",&n);
	int array[n];
	int *p;
	p=array;
	int i;
	int sum=0;
	printf("enter elements is of array:");
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	
	}
	for(i=0;i<n;i++){
		sum+=*(p+i);
	}
	printf("the sum is:%d",sum);
	return 0;
}
