#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n;
	printf("enter size of array:");
	scanf("%d",&n);
	int array[n];
	printf("enter the elements of array:");
	int *p;
	p=array;
	for(p=array;p<array+n;p++){
		scanf("%d",p);
	}
	printf("the new array:");
	for(p=array;p<array+n;p++){
		printf("%d\t",*p);
	}
	return 0;
}
