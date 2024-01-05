#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	//soru 1
/*	int a,b,sum;
	printf("enter value of your numbers:");
	scanf("%d %d",&a,&b);
	sum=a+b;
	printf("%d + %d = %d",a,b,sum);
	*/
	//soru 2
	/*int A,B,temp;
	printf("enter value of A:");
	scanf("%d",&A);
	printf("enter value of B:");
	scanf("%d",&B);
	temp=A;
	printf("the new value of A : %d and the new value of B:%d",B,temp);
	*/
	//soru 3
	/*
	double n;
	int m,f,avg,p;//p: passsing grade
	printf("enter your school number:");
	scanf("%lf",&n);
	printf("enter your midterm result:");
	scanf("%d",&m);
	
	printf("enter your final result:");
	scanf("%d",&f);
	avg=m*0.4+f*0.6;
	p=50;
	if(avg>=p){
		printf(" %.0lf pass the class and passing grade:%d",n,avg);
	}
	else{
		printf("%d can't pass the class and passing grade:%d",n,avg);
	}*/
	//soru 4
/*	const float PI=3.14;
	float r;
	int number,per,area;
	printf("enter value of radius:");
	scanf("%f",&r);
	printf("which operation do you want to do: 1-calculate perimeter of circle 2-calculate the area of circle\n");
	scanf("%d",&number);
	switch(number){
		case 1:{
			per=2*r*PI;
			printf("the perimeter of circle is : %d",per);
			break;
		}
		case 2:{
			area=r*r*PI;
			printf("the area of circle is: %d",area);
			break;
		}
	} */
	//soru 5
	/*int m,s=0,s2=0,s3=0,s4=0;
	printf("enter your amount of money:");
	scanf("%d",&m);
	if(m%10==0){
		while(m>=100){
			s=s+1;
			m=m-100;
		}
		while(m>=50){
			s2=s2+1;
			m=m-50;
		}
		while(m>=20){
			s3=s3+1;
			m=m-20;
		}
		while(m>=10){
			s4=s4+1;
			m=m-10;
		}
		printf("the number of 100 banknote : %d 50 banknote: %d 20 banknote: %d  10 banknote: %d",s,s2,s3,s4);
	}
	else{
		printf("you entered wrong amount of money please entered mupliples of 10");
	}
	*/
	return 0;
}
