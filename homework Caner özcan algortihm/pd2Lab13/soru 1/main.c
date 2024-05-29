#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  FILE *myptr;
  int i=125;
  char x='a';
  float k=25.3564;
  myptr=fopen("text.txt","a");
  fprintf(myptr,"\n%d %c %f",i,x,k);
  
 fclose(myptr);
    return 0;
}

