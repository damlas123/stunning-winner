#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 int strlength(char d[]){
 	return strlen(d);
 }
 void strReversed(char d[],char reverse[]){
  int n;
  int length=strlength(d);
  for(n=0;n<length;n++){
  	reverse[n]=d[length-n-1];	
  }
}
  void prin(char reversed[],int a){
  	printf("the length of array is:%d",a);
  	printf("the reverse of array is:%s",reversed);
  }
int main(int argc, char *argv[]) {
	char array[100],reversed[100];
	printf("enter a string:");
	gets(array);
	int length=strlength(array);
	strReversed(array,reversed);
	prin(reversed,length);

	return 0;
}
