#include <stdlib.h>
#include <stdio.h>
int main(int argc, char*argv[])
{
	//introducimos variables
	double x;
	double y;
	double z=1;
	int i;
	x=atof(argv[1]);
	y=atof(argv[2]);
	//creamos el ciclo for
	for(int i=1; i<=y; i++){//i va a ir aumentando hasta llegar al exponente
	//creamos una variable que va ir acumulando la multiplicacion de la base por ella misma
	z=z*x;
	}
	printf("%.2lf", z); //por ultimo mostramos el resultado
	return 0;
}