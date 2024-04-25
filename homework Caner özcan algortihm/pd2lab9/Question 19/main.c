#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct player{
	char pname[20];
	
}pl;
char* play(struct player *temp_pl){
		strcpy(temp_pl->pname,"kohli");
		return temp_pl->pname;
}
int main(int argc, char *argv[]) {
	strcpy(pl.pname,"dhoni");
	
	printf("%s %s ",pl.pname,play(&pl));

	return 0;
}
