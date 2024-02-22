#include <stdio.h>
#include <stdlib.h>
 int ar(int n,int d){
 	int i,counter=0,sum=0;
 	int ar[n];
 	printf("enter the students note:");
 	for(i=0;i<n;i++){
 		scanf("%d",&ar[i]);
 		if(ar[i]>=d){
 			counter++;
		 }
		sum+=ar[i];
	 }  
	    printf("%d is the average",sum/n);
	 	return counter;
 }

int main(int argc, char *argv[]) {
	int n1,d1;
	printf("enter the number of student:");
	scanf("%d",&n1);
	printf("enter the pass note:");
	scanf("%d",&d1);
	int coun;
	coun=ar(n1,d1);
	printf("student pass the class:%d",coun);
	

	return 0;
}
