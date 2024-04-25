#include <stdio.h>
#include <stdlib.h>
enum sanfoundry{
	a,b,c
};
enum sanfoundry g;
int main(int argc, char *argv[]) {
	g++;
	printf("%d",g);
	return 0;
}
