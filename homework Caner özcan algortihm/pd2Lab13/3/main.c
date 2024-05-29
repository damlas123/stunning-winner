#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	FILE *myptr;
	int hesapno;
	char name[40];
	int amount;
	if((myptr=fopen("text.txt","r"))==NULL){
		printf("the file is null");
	}
	else{
	printf("%10s%13s%16s\n","hesapno","name","bakiye");
	fscanf(myptr,"%d%s%d",&hesapno,name,&amount);
	while(!feof){
		printf("%10d%13s%d\n",hesapno,name,amount);
		fscanf(myptr,"%d%s%d",&hesapno,name,&amount);
	}
	fclose(myptr);
	}
	return 0;
}
