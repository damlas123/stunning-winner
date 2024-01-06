#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	// klavyeden girilen 2 kelimeden 2. kelimenin sonuna 1.kelimenin tersini yazýp bastýran program
	char dizi[50],dizi2[50];
	printf("enter words:");
	fgets(dizi,sizeof(dizi),stdin);
	printf("enter second word:");
	fgets(dizi2,sizeof(dizi2),stdin);
	
	strcat(dizi2,strrev(dizi));
	printf("%s",dizi2);

	return 0; 
}
