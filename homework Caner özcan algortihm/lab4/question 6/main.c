#include <stdio.h>
#include <stdlib.h>

void my_recursive_function(int n){
	if(n==0)
		return ;
		printf("%d\n",n);
		my_recursive_function(n-1);
	
}

int main(int argc, char *argv[]) {
	my_recursive_function(7);
	return 0;
}
