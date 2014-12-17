
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    double numero = 0, 
	   suma = 0;
    int resp = 0;

    printf("Introduce nuevo número:");

    while(numero >= 0){
	printf("Numero: ");
	scanf("%lf", &numero);
	if (numero >= 0) {
	    suma += numero;
	    resp ++;
	}
    }

    printf("\nLa media es: %lf\n", suma / resp);


    return EXIT_SUCCESS;
}

