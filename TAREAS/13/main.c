#include <stdlib.h>
#include <stdio.h>
//ordenar de menor a mayor por metodo burbuja
void burbuja(int *item, int cont){
	int i, j, ordenado;
	int temp;
	for(i=1; i<cont; i++){ //funciona como apuntadores
		for(j=cont; j>i; j--){ //para que se recorra de menor a mayor
			ordenado=1;
			if(item[j-1]>item[j]){
				temp=item[j-1];
				item[j-1]=item[j];
				item[j]=temp;
				ordenado++;
			}
		}
		if(ordenado==0){ //si el arreglo es igual a cero, no debe haber ordenamiento
			break;
		}
}
}
int main(int argc, char *argv[]){ 
	int arreglo[argc]; //definimos el tamaño del arreglo
	for (int i = 0; i < argc; ++i){ 
		double x=atof(argv[i]);
		arreglo[i]=x;
		} //se llama a la funcion burbuja
		burbuja(arreglo, argc-1);
		for (int i = 0; i < argc; ++i) //mostramos el rreglo ordenado
		printf("%i\n", arreglo[i]);
	
	}


