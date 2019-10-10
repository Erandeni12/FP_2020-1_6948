#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int x;
	x=atoi(argv[1]);
	if(x%2==0){
		printf("1\n");
	}
	else {
		printf("0\n");
	}
	return 0;
}