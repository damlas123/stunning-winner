#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 void temperature(int array[]){
 	int i=0;
 	int temp[6]={0};
 	while(array[i]){
 		if(array[i]>=(-20) && array[i]<=(-10)){
 			temp[0]++;
		 }
		 else if(array[i]>(-10) && array[i]<=0){
		 	temp[1]++;
		 }
		 else if(array[i]>0 && array[i]<=10){
		 	temp[2]++;
		 }
		 else if(array[i]>10 && array[i]<=20){
		 	temp[3]++;
		 }
		 else if(array[i]>20 && array[i]<=30){
		 	temp[4]++;
		 }
		 else if(array[i]>30 && array[i]<=40){
		 	temp[5]++;
		 }
		 i++;
	 }
	printf("the number of temperature between -20 && -10:%d\n",temp[0]);
    printf("the number of temperature between -10 &&   0:%d\n",temp[1]);
    printf("the number of temperature between   0 &&  10:%d\n",temp[2]);
    printf("the number of temperature between  10 &&  20:%d\n",temp[3]);
    printf("the number of temperature between  20 &&  30:%d\n",temp[4]);
    printf("the number of temperature between  30 &&  40:%d\n",temp[5]);
 
 }
int main(int argc, char *argv[]) {
	int degree[10];
	int i=0;
	printf("enter degree");
	for(i=0;i<10;i++){
		scanf("%d",&degree[i]);
	}
	temperature(degree);
	return 0;
}
