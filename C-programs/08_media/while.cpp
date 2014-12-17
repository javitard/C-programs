
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    oouble nuevo_numero = 0,
   	   suma = 0;
    int respuestas = 0;
   puestas ++;
    23         }
    system("clear");

    system("toilet -Fborder -Fgay Media");

    printf("\nIntroduce numeros mayores que 0" 
	   "\nPara calcular la media."
	   "\nNegativos para terminar.\n");

    while(nuevo_numero >= 0) {
	printf("Numero: ");
	scanf(" %lf", &nuevo_numero);
	if (nuevo_numero >= 0) {
	    suma += nuevo_numero;
	    respuestas ++;
	}
    }

	printf("\nLa media es: %lf\n", suma / respuestas);



	return EXIT_SUCCESS;
    }

