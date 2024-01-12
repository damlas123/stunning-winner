#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
	char dizi[25][50],temp[25];
	int i,n,j;
	printf("how many string do you enter:");
	scanf("%d",&n);
	while(getchar()!= '\n');
	printf("enter your strings:");
	for(i=0;i<n;i++){
		fgets(dizi[i],sizeof(dizi[i]),stdin);
	}
	printf("your strings:\n");
	for(i=0;i<n;i++){
		printf("%s\t",dizi[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n-1-i;j++){
			if(strcmp(dizi[j],dizi[j+1])>0){
				strcpy(temp,dizi[j]);
				strcpy(dizi[j],dizi[j+1]);
				strcpy(dizi[j+1],temp);
			}
		}
	}
	printf("after the bubble sort:\n");
	for(i=0;i<n;i++){
		printf("\n\t%s\t",dizi[i]);
	}
	return 0;
}
