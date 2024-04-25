#include <stdio.h>
 int sum(int n,int n2){
 	if(n>0 && n2>0){
	 
 	if(n>n2){
 		return sum(n-n2,n2);
	 }
	 else if(n==n2){
	 	return n;
	 }
	 else if(n2>n){
	 	return sum(n,n2-n);
	 }
	 else {
	 	return 1;
	 }
	 
}

 }
int main()
{

   int number,number2;
   printf("enter number:");
   scanf("%d %d",&number,&number2);
   printf("%d",sum(number,number2));

    return 0;
}
