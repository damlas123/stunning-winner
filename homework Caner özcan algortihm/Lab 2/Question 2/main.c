#include <stdio.h>
#include <stdlib.h>
int bodyIndex(int n,int h){
   int b;
   b=(n)/(h*h);
   if(b>=0 && b<=18){
    return 1;
   }
   else if(b>=19 && b<=25){
   	return 2;
   }
   else if(b>=26 && b<=30){
   	return 3;
   }
else{
	return 4;
}
}
int main(int argc, char *argv[]) {
	int weight,hight;
	printf("enter weight and hight:");
	scanf("%d%d",&weight,&hight);
	int a;
	a=bodyIndex(weight,hight);
	if(a==1){
		printf("zayif");
	}
	else if(a==2){
		printf("normal");
	}
	else if(a==3){
		printf("kilolu");
	}
	else if(a==4){
		printf("obez");
	}
	return 0;
}
