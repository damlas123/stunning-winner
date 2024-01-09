#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 int strlength(char x[]){
 	return strlen(x);
 }
 void strReverse(char x[],char reverse[]){
 	int length=strlen(x);
 	int i;
 	for(i=0;i<=length;i++){
 		reverse[i]=x[length-i-1];
	 }
 }

int main(int argc, char *argv[]) {
	char array[100],reversed[100];
	int a;
	printf("enter your array:");
	fgets(array,sizeof(array),stdin);
	strlenght(array,a);
	strReverse(array,reversed);
	printf("the length of your array is:%d",strlength);
	printf("the reverse of your array is:%s",strReverse);
	return 0;
}
