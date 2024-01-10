#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 void alorder(char array[]){
 	int i,j,k;
 	char word;
 	while(array[i]){
 		for(j=0;array[j]!='\0';j++){
 			for(k=j+1;array[k]!='\0';k++){
 				if(array[j]>array[k]){
 					word=array[j];
 					array[j]=array[k];
 					array[k]=word;
				 }
			 }
		 }
		 i++;
	 }
	 for(i=0;array[i]!='\0';i++){
	 	printf("%c",array[i]);
	 }
 }
int main(int argc, char *argv[]) {
	char sentence[100];
	printf("enter a sentence");
	fgets(sentence,sizeof(sentence),stdin);
	sentence[strcspn(sentence,"\n")]='\0';
	alorder(sentence);
	return 0;
}
