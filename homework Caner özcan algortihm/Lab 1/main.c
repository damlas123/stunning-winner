#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*int x=5;

int main(int argc, char *argv[]) {
	{
	
	int x=10,y=20;
	{
		printf("x=%d ,y=%d\n",x,y);
		{
			int y=40;
			x++;
			y++;
			printf("x=%d,y=%d\n",x,y);
		}
		printf("x=%d ,y=%d\n",x,y);	
	}
}
  printf("x=%d",x);
	return 0;/*
}
*/
/*#include <stdio.h>
void fonk(void);
int gid=287;
int main(void){
	printf("deneme1.c gid degisken degeri :%d\n",gid);
	fonk();
	return 0;
}
 extern int gid;
 void fonk(void){
 	printf("deneme2.c gid degisken degeri:%d",gid);
 }
 */
 int main(void){
 	clock_t start_t,end_t;
 	register int id1,id2;
 	start_t=clock();
 	for(id1=0;id1<2000000;id1++){
 		for(id2=0;id2<100;id2++){
		 }
	 }
 }
 end_t =clock();
 printf("start_t degeri:%lu\n",start_t);
 printf("end_t degeri:%lu\n",end_t);
 printf("dongu calisma suresi(saniye):%.3f",(double)(end_t-start_t));
 return 0;
}
