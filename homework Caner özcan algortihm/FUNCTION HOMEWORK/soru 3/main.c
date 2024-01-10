#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 void findvowels(char array[]){
 	int i=0,a=0;
 	strupr(array);
 	while(array[i]){
 		if(array[i]=='A' || array[i]=='I' || array[i]=='E' || array[i]=='O' || array[i]=='U'){
		 	  a++;
		 }
		 i++;
 	   }
	 printf("the number of vowels word is:%d",a);
	 }
 
int main(int argc, char *argv[]) {
	char sentence[100];
	printf("enter the sentence:");
	fgets(sentence,sizeof(sentence),stdin);
	sentence[strcspn(sentence,"\n")]='\0';
	findvowels(sentence);
	return 0;
}
