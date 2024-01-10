#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int primerfinder(int a){
	int i=2,flag=0;
	for(i=2;i<a/2;i++){
		if(a%i==0){
			flag=1;
			break;
		}
	}
	return flag;
}
int armstrongfinder(int a){
	int i=0,n,sum=0,flag2=0;
	n=a;
	while(n>0){
		n=n/10;
		i++;
	}
	n=a;
	for(a=1;a<=i;a++){
		sum+=pow((n%10),3);
	    n=n/10;
	}
	if(sum==a){
		flag2=1;
	}
	else{
		flag2=0;
	}
	return flag2;
}

int main(int argc, char *argv[]) {
	int number;
	printf("enter a number:");
	scanf("%d",&number);
	int f,f2;
	f=primerfinder(number);
	f2=armstrongfinder(number);
	if(f==0 && f2==1){
		printf("this number is both primer and armstrong number");
	}
	else if(f==1 && f2==1){
		printf("this number just armstrong number");
	}
	else if(f==1 && f2==0){
		printf("this number is not either primer or armstrong");
	}
	else if(f==0 && f2==0){
		printf("this number just primer number");
	}
	return 0;
}
