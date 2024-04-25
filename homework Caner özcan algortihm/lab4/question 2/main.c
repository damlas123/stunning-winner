#include <stdio.h>
#include <stdlib.h>
int even(int *ar,int a,int d){
 	 if(d<a){
 	 	if(ar[d]%2!=0){
		  
 	 		printf("%d\n",ar[d]);
 	 	   
		  }
		   return even(ar,a,d+1);
	}
		 
	 }
 

int main(int argc, char *argv[]) {
	int n;
	printf("enter the size of array:");
	scanf("%d",&n);
	int array[n];
	int *p;
	
	int i;
	printf("enter the element of array:\n");
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	p=array;
	int b=0;
	int num=even(p,n,b);
	printf("the number of odd is:%d",num);
	return 0;
}
