
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int lado;
    int inicial;
    /*Preguntar el lado y pintar cada fila entera */
    /*Pintar todos los cuadrados y al final un salto de linea*/
     printf("lado: ");
     scanf(" %i", &lado);

     for (int fila=0; fila<lado; fila++){
	 for (int cuadrado=0; cuadrado<lado; cuadrado++){
	     if (cuadrado == 0)
		 inicial = 0;
	     else 
		 inicial = 1;
	 
	     for(int col=inicial; col<lado; col++)
		 if ((fila == col && cuadrado % 2==0) || (cuadrado % 2 == 1 && fila + col == lado -1))  /*(fila + col == lado -1)*/
		     printf("*");
	 	 else
		     printf(" ");

	 }
	     printf("\n");
     }

    return EXIT_SUCCESS;
}

