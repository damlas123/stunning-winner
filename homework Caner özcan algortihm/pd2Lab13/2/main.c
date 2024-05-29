#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(int argc, char *argv[]) {
	FILE *myptr;
	char ch;
	myptr=fopen("exile.txt","r+");
	if(myptr==NULL){
		printf("the file is null");
	}
	else{
		while(!feof(myptr)){
			
		ch=getc(myptr);
		printf("\n%c",ch);
		}
	}
	getch();
	return 0;
}
