#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	printf("enter size of array:");
	scanf("%d",&n);
	int array[n];
	int *p;
	printf("enter the element of array:");
	for(p=array;p<array+n;p++){
		scanf("%d",p);
	}
	int *p2;
	int temp;
	for(p=array,p2=array+n-1;p<p2;p++,p2--){
		temp=*p;
		*p=*p2;
		*p2=temp;
	}
	printf("after the switch:");
	for(p=array;*p;p++){
		printf("%d\t",*p);
	}
	return 0;
}
