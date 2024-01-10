#include <stdio.h>
#include <stdlib.h>
 void areacalculator(int a){
 	int area ;
 	area=a*a;
 	printf("the area is:%d",area);
 }
int main(int argc, char *argv[]) {
	int s;
	printf("enter the long :");
	scanf("%d",&s);
	areacalculator(s);
	return 0;
}
