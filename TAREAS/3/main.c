#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	double x;
	double y;
	x=atof(argv[1]);
	y=atof(argv[2]);
	printf("La suma es %g\n", x+y);
	printf("La resta es %g\n", x-y);
	printf("La multiplicación es %g\n", x*y);
	printf("La división es %.2lf\n", x/y);
	return 0;
}