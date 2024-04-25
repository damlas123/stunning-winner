#include <stdio.h>
#include <stdlib.h>

enum sanfoundry{
	c=0,
	d=10,
	h=20,
	s=3,
}a;
int main(int argc, char *argv[]) {
	a=c;
	printf("Size of enum variable = %d bytes",sizeof(a));
	return 0;
}
