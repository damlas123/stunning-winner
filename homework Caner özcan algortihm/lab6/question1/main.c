#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n;
	printf("enter size of array:");
	scanf("%d",&n);
	int i;
	int array[n];
	int *p;
	p=(int *)calloc(n,sizeof(int));
	if(p==NULL){
		printf("MEMORY ALLACOTION FAILED!\n");
	}
    else{ 
    for(i=0;i<n;i++){
    	p[i]=i+1;
	}
     for (i=0;i<n;i++){
     	printf("%d\n",p[i]);
	 }
	}
	return 0;
}
