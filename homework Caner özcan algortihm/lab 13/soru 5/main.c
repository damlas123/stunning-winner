#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int findwordnumber(char array[]){
	int i=0, a=0;
    array[strcspn(array,"\n")]='\0';
	while(array[i]){
		if(array[i]=='\n' || array[i]==' '){
			a++;
		}
		i++;
	}
	return a;
}
int main(int argc, char *argv[]) {
	char string[100];
	printf("enter a string:");
	fgets(string,sizeof(string),stdin);
	int d;
	d=findwordnumber(string);
	printf("the word number is:%d",d+1);
	return 0;
}
