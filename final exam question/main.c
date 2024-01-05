#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	/*(Assume you have the following table containing students’ 
grades. Write a C program to calculate the average of each student and store the result in the average column 
(row index 4). Then print the student (Id and average) whose get the highest average. Initialize the 2- dimensional 
array from the table below (columns titles are not included*/
     int og[4],i,j,avg,s,n[3],a=1,max;
     // n for note
     for(i=0;i<4;i++){
     	avg=0;
     		s=0;
     	for(j=0;j<3;j++){
     		printf("enter for %d . student %d . grade:",i+1,j+1);
     		scanf("%d",&n[j]);
     		s+=n[j];
		 }
		 avg=s/3;
		 og[i]=avg;
	 }
	 for(i=1;i<=4;i++){
	 	max=og[i-1];
	 	if(max<og[i]){
	 		max=og[i];
	        a=i+1;
		 }
	 }
	 printf("%d student has the highest avarage and it is:%d",a,max);
	return 0;
}
