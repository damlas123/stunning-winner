#include <stdio.h>
#include <stdlib.h>

  double avarage(int a,int b,int c,int d,int e){
  	double avg;
  	avg=(a+b+c+d+e)/5;
  	return avg;
  	
  }
int main(int argc, char *argv[]) {
	double n,n1,n2,n3,n4;
	printf("enter numbers:");
	scanf("%lf%lf%lf%lf%lf",&n,&n1,&n2,&n3,&n4);
	double ort;
	ort=avarage(n,n1,n2,n3,n4);
	printf("the avarage of this number is:%lf",ort);
	return 0;
}
