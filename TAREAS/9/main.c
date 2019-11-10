//determinar la suma de los dígitos de un numero
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argv[])
{
	int n;
	int suma=0;
	n=atoi(argv[1]);
	while(n>0){
		suma= suma+n%10; //n%10 sirve para que te de el ultimo digito y se sume a la suma anterior
		n=n/10; //para quitar el digito que ya sumamos
	}
	printf("%i", suma);
	return 0;
}