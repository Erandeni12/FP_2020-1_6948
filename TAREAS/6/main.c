#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	//declaramos variables
	int z=1;
	//el primer for es para excliur el argv
	for(int i=1; i<argc; i++){
		int x=atoi(argv[i]); //para copiar las lista argv
		z=x*z;
		}
	//el siguiente for es para realizar la operacion sin excluir ninguno
	for (int i=1; i<argc; i++){
		int x=atoi(argv[i]);
		int resultado=z/x;
		printf("%i\n", resultado );
	}

	return 0;
}