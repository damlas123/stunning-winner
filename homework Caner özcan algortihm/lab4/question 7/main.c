#include <stdio.h>
#include <stdlib.h>
void fun(int n){
	if(n==0){
		return ;
	}
	fun(n/2);
	printf("%d\n",n%2);
}
int main(int argc, char *argv[]) {
	fun(25);
	return 0;
}
