#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(int argc, char *argv[]) {
	// klavyeden girilen bir string içeirsindeki kelimelerde kaçar tne "a " karakteri olduduðunu bulan program
	 char dizi[50];
	 printf("enter text:");
	 fgets(dizi,sizeof(dizi),stdin);
	 int i=0;
	 int a=0,b=1;
	 
	 while(dizi[i]){
	 	if(dizi[i]=='a' || dizi[i]=='A')
	 	{  
	 		a++;
	 		
		 }
		 else if(dizi[i]==' ' || dizi[i]== '\n')
		 {
		 	printf("%d. kelimede %d tane a harfi var\n",b,a);
			a=0;
		 	b++;
		 }
        
	
	 	i++;
	 } 
	
	 
	return 0;
}
