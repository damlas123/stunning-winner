#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int strlength(char x[]){
	return strlen(x);
}
void strreversed(char x[],char reversed[]){
	int length=strlength(x);
	int i;
	for(i=0;i<length;i++){
		reversed[i]=x[length-1-i];
	}
}
void printfreversed(char reverse[],int strlength){
	
	printf("the reversed of function is:%s\n",reverse);
	printf("the length of function of is:%d",strlength);
}
int main(int argc, char *argv[]) {
	char array[100],reverse1[100];
	printf("enter string:");
	gets(array);
	int length=strlength(array);
	strreversed(array,reverse1);
	printfreversed(reverse1,length);
	return 0;
}
