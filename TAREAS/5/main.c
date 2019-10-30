#include <stdio.h>
#include <stdlib.h>
int valor(char n){ //para devolver un numero de un caracter
    int z;
    switch(n){
    	case 'J':
    	    z=10;
    	    break;
    	case 'Q':
    	    z=10;
    	    break;
    	case 'K':
    	    z=10;
    	    break;
    	case 'A':
    	    z=11;
    	    break;
    	case 'j':
    	    z=10;
    	    break;
    	case 'q':
    	    z=10;
    	    break;
    	case 'k':
    	    z=10;
    	    break;
    	case 'a':
    	    z=11;
    	    break;                                 
    }
    return z;
}
int main(int argc, char *argv[])
{
	int imprimir, coi; //coi se usa como char o int
	for(int i=1; i<argc; i++){//el recorrido de la lista incia en 1
		coi=argv[i][0]=='J'|| argv[i][0]=='j'||argv[i][0]=='Q'||argv[i][0]=='q'||argv[i][0]=='K'||argv[i][0]=='k'||argv[i][0]=='A'||argv[i][0]=='a';
		if(coi==1){ //si es un caracter a pedir se usa la funcion valor
			imprimir=valor(argv[i][0]);
		}
		else{
			imprimir=atoi(argv[i]);
		}
		printf("%i\n", imprimir);
	}
	return 0;
}