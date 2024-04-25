#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	enum result {
pass,
fail,
};
enum result s1,s2;
s1=pass;
s2=fail;
printf("%d",s1);
	return 0;
}
