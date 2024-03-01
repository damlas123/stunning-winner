#include <stdio.h>
#include <stdlib.h>
#include <time.h>
   int path(int a,int b,int ar[a][b]){
   	int i=0,j=0,d=0;
   	if(i<a && j<b){
	   
   	if(ar[i][j]==1 || (j+1<b && ar[i][j+1]==1) || (i+1<a && ar[i+1][j]==1)){
   		d++;
	   }
	   else{
		return path(a,b,ar[i++][j++]);
	}
	    }
	    else{
	    	return d;
		}
	}
int main(int argc, char *argv[]) {
	int m,n;
	printf("enter the m and n size:");
	scanf("%d%d",&m,&n);
	int array[m][n];
	int i,j;
	srand(time(0));
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			array[i][j]=rand()%100;
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(array[i][j]%2==0){
				array[i][j]=0;
		
			}
			else{
				array[i][j]=1;
			}
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
	printf("the sorhest path is:%d",path(m,n,array));
	return 0;
}
