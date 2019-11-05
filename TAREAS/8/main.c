#include <stdlib.h>
#include <stdio.h>
int main(int argc, char*argv[])
{//declaramos variables
	double x;
	double y;
	double c;
	double f;
	x=atof(argv[1]);
	y=atof(argv[2]); //convertimos los argumentos a flotantes
	if(x==0){ //si x es igual a cero, convertimos grados celsius a farenheit
		f=(y*9/5)+32; //usamos la formula para la conversion
		printf("%.2lf", f); //mostramos el resultado
	} else if(x!=0){ //en else usamos otra condicion, si x es diferente de cero para hacer la conversion de farenheit a celsius
		c=(y-32)*5/9; //usamos la formula de conversion
		printf("%.2lf", c); //mostramos resultados
	}
	return 0;
}