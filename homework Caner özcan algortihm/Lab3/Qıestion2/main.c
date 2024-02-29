#include <stdio.h>
#include <stdlib.h>
int ar(int arr[],int n1){
	int a=0;
	if(a<n1-1){
		if(arr[a]>arr[a+1]){
	    return arr[a];
		}
		else{
			return ar(arr+1,n1);
		}
	}
	else{
		return arr[a];
	}
}

int main(int argc, char *argv[]) {
	int n,i;
	printf("enter the length of the array:");
	scanf("%d",&n);
	int array[n];
	for(i=0;i<n;i++){
		printf("enter %d.element:",i+1);
		scanf("%d",&array[i]);
	}
	printf("the maximum number is:%d",ar(array,n));
	
	return 0;
}
