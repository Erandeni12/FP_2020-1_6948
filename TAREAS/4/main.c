//declaramos librerias
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	//declaramos variables
	double z=0;
	for(int i=1; i<argc; i++){
	//convertimos el argumento a flotante
		double x=atof(argv[i]);
	//asignamos variables
		z=x+z;
	}
	//declaramos la opreción a realizar
	double promedio=z/(argc-1);
	//mostramos el promedio de los numeros introducidos
	printf("%.2lf\n", promedio);
	return 0;
}