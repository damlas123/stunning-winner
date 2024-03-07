#include <stdio.h>
#include <stdlib.h>


int fun(int n){ 
if(n==4){
	return n ;
}
else return 2*fun(n+1);
}
int main(int argc, char *argv[]) {
	printf("%d",fun(2));
	
	return 0;
}
