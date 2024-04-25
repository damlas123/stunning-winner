#include <stdio.h>
#include <stdlib.h>
enum sanfoundry{
	a=1,b
};
enum sanfoundry1{
	c,d
};
int main(int argc, char *argv[]) {
	enum sanfoundry1 s1=c;
	enum sanfoundry1 s=a;
	enum sanfoundry s2=d;
	printf("%d\n",s);
	printf("%d\n",s1);
	printf("%d",s2);
	return 0;
}
