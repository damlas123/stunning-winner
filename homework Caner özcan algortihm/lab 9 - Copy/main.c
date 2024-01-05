#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {
	// question 1 find the largest number between A,B and C
	/*int A,B,C;
	printf("enter your number:");
	scanf("%d %d %d",&A,&B,&C);
	if(A>B && A>C){
		printf("%d is the highest number",A);
	}
	
	if(A>B && A>C){
		printf("%d is the highest number",A);
	}
	
	else if(B>A && B>C){
		printf("%d is the highest number",B);
	}
	
	else if(C>B && A<C){
		printf("%d is the highest number",C);
	}
	else{
		printf("they are equal and :%d",A);
	}*/
	//question 2 computing factoriel N
/*	int N,f=1,i;
	printf("enter number:");
	scanf("%d",&N);
	for(i=1;i<=N;i++){
		f=f*i;
	}
	printf("%d factoriel is:%d",N,f);*/
	//question 3 generates even number between 1000 and 2000
/*	int i;
	for(i=1000;i<=2000;i++){
		if(i%2==0){
			printf("%d\n",i);
		}
		
	}*/
	//question 4 palindrome or not
/*	int num,num2;
	printf("enter a number:");
	scanf("%d",&num);
	num2=num;
	int reversed=0;
	while(num>0){
		int digit = num%10;
		reversed=reversed*10+digit;
		num=num/10;
	}
	if(num2==reversed){
		printf("it is palindrome number");
	}
	else{
		printf("it is not palindrome number");
	}
	*/
	// question 5 sum series
/*	double sum=0;
	int a,n,f=1,x,b;
	printf("enter a number:");
	scanf("%d",&n);
	printf("enter x value:");
	scanf("%d",&x);
	for(a=1;a<=n;a++){
		f=1;
		b=a;
		while(b>0){
			f=f*b;
			if(a==1){
				sum=sum + (pow(x,a)/f);
			}
			b--;
		}
	}
	printf("the sum of this serie:%lf",sum);
	*/
	return 0;
}
