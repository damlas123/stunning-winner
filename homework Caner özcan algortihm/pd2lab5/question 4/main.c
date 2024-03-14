#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char array[100];
	char *p;
	printf("enter a sentence:");
	gets(array);
	for(p=array;*p;p++){
	}
	printf("the length of array is:%d",p-array);
	return 0;
}
