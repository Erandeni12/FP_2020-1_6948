#include <stdlib.h>
#include <stdio.h>
int saludos(int personas){
	int resta; //declaramos variables
	int y;
	if(personas==1){
		return 0; //si solo hay una persona entonces no hay saludos
	} else{
		y=saludos(personas-1)+(personas-1); //si son dos o mas se ejecuta lo siguiente
		return y;
	}
}
int main(int argc, char*argv[])
{
	int x, z; //declaramos variables
	x=atoi(argv[1]); //convertimos el argumento a entero
	z=saludos(x); //mandamos a llamar a la funcion
	printf("%i\n", z); //mostramos el resultado
	return 0;
}