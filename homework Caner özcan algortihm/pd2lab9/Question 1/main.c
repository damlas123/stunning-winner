#include <stdio.h>
#include <stdlib.h>
enum day{sunday =1,tuesday,wednesday,thursday,friday,saturday};

int main(int argc, char *argv[]) {
	enum day d = thursday;
	printf("The day number stored in d is:%d",d);
	return 0;
}
