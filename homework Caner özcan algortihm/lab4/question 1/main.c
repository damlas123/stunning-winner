#include <stdio.h>
#include <stdlib.h>

void fun(int n,int a,int b){
	if(n>=10)
	return;
	fun(n+2,a,b+n);
	{
		printf("%d %d %d\n",n,a,b);
	}
}
int main(int argc, char *argv[]) {
	int n1,n2,n3;
	n1=0;
	n2=5;
	n3=7;
	fun(n1,n2,n3);
	return 0;
}
