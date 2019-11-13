#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double raiz(double x, double tolerancia, double candidato){
	double div, dif, prom; //declaramos varibales
	div=x/candidato; //se divide el numero que introducimos entre el candidato 
	dif=fabs(div-candidato); //la diferencia nos va a servir para saber la tolerancia
	while(dif>tolerancia){ //si la diferencia no llega a la tolerancia, entonces se realiza lo siguiente
		div=x/candidato;
		dif=fabs(div-candidato);
		prom=(candidato+div)/2; //para sacar el promedio se suma nuestro candidato mas el resultado de la division de x/candidato y se divide entre dos
        candidato=prom; //si no se llega a la tolerancia, el promedio se volvera el candidato
	}
    return candidato;
}
int main(int argc, char*argv[])
{
	double num, tolerancia, z, candidato;
	num=atof(argv[1]);
	tolerancia=atof(argv[2]); //convertimos los argumentos a flotantes
	candidato=atof(argv[3]);
    z=raiz(num, tolerancia, candidato); //mandamos a llamar la funcion para que se ejecute
    printf("%lf\n", z); //mostramos el resultado
	return 0;
}