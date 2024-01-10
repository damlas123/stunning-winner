#include <stdio.h>
#include <stdlib.h>
  void findevenorodd(int a){
  	if(a%2==0){
	  printf("this number is even n umber");
	  }
	  else{
	  	printf("this number is odd number");
	  }
  }
int main(int argc, char *argv[]) {
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	findevenorodd(n);
	return 0;
}
