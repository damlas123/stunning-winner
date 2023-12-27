#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	// question 1 enter a value from keyboard to the 8 element float array.
	 /*float a[8],av;
	 int i;
	 printf("enter your array variable:");
	 for(i=0;i<8;i++){
	 	scanf("%f",&a[i]);
	 	av+=a[i];
	 }
	 printf("the avarage of your array :%f",av/8);*/
	 // question 2 write a program that transfers the numbers given until -1
	 /* double a[11];
	  int i=1;
	  printf("enter value of your array(for stop -1):\n");
	  while(i!=-1){
	  	scanf("%lf",&a[i]);
	  	printf("%d element's square:%lf",a[i],a[i]*a[i]);
	     i=a[i];
	  }*/
	  // write  a program that assigns the digits of the maximum 5-digit number to an array and prints it to the screen
	  /* int number , n[5],i=0;
	    printf("enter your number:");
	    scanf("%d",&number);
	    if(number>0){
	    	 for(i=0;i<5;i++){
	    	n[i]=number%10;
	    	number=number/10;
	    	printf("%d\n",n[i]);
		}
	    	
		}
		*/
		// write a program takes a 10-element array from the keyboard and writes it in reverse to the screen
		/* int n[10],i=0;
		 printf("enter your element of array:");
		 for(i=0;i<10;i++){
		 	scanf("%d",&n[i]);
		 }
		 for(i=9;i>=0;i--){
		 	printf("%d\n",n[i]);
		 }
	   */
	return 0;
}
