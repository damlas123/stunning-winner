#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
 float square(const int r1){
 	float area;
 	area=PI*r1*r1;
 	return area;
 }
int main(int argc, char *argv[]) {
	int r;
	printf("enter the radius of circle:");
	scanf("%d",&r);
	float ar=square(r);
	printf("%.2f",ar);
	return 0;
}
