#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char array[100];
	printf("enter a sentence:");
	gets(array);
	char *p;
    p=array;
    while(*p)
	{
    	p++;
	}
    while(*p)
	{
    	printf("%c",*p);
    	p--;
	}
	return 0;
}
