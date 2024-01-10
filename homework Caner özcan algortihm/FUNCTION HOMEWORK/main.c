#include <stdio.h>
#include <stdlib.h>
 void findbiggestnumber(int array[]){
  	int max,max1;
  	int i;
  	max=array[0];
  	max1=array[0];
  	for(i=0;i<10;i++){
  		if(array[i]>max){
  			max=array[i];
		  }
		if(array[i]>max1 && max>array[i]){
			max1=array[i];
		}
	  }
	  printf("the biggest 2 number is:%d %d",max,max1);
  }

int main(int argc, char *argv[]) {
	int array1[10];
	int i=0;
	printf("enter numbers:");
	for(i=0;i<10;i++){
		scanf("%d",&array1[i]);
	}
	findbiggestnumber(array1);
	return 0;
}
