#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 void number(int array[],int a){
 	int i,b;
 	int length;
 	length=sizeof(array);
 	for(i=0;i<length;i++){
 		if(a<array[i]){
 			b=array[i];
 			array[i]=a;
 		    a=b;
		 }
	 }
	  if(i==length && a<array[i-1]){
	  	array[i-1]=a;
	  }
	
	 for(i=0;i<length;i++){
	 	printf("%d",array[i]);
	 }
 }
int main(int argc, char *argv[]) {
	int d[5]={1,3,5,7,9};
	int n;
	printf("enter which number do you want to add:");
	scanf("%d",&n);
	number(d,n);
	return 0;
}
