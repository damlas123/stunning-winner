#include <stdio.h>
#include <stdlib.h>
enum example{
	a=1,
	b,
	c,
};
enum example example1=2;
enum example answer(){
	return example1;
}
int main(int argc, char *argv[]) {
	(answer()==a)? printf("yes"):printf("no");
	return 0;
}
