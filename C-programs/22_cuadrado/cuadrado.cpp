#include <stdio.h>
#include <stdlib.h>

#define L 5

int main(int argc, char *argv[]) {

    int lado;

    printf("lado: ");
    scanf(" %i", &lado);

    for (int cua_fila=0; cua_fila<4; cua_fila++)
    for (int fila=0; fila<lado; fila++){
   	 for (int cuacol=0; cuacol<L; cuacol++)
		for (int col=0; col<lado; col++)
		    if ((cua_fila * L	+ cuacol) %2==0)
			printf("*");
	 	    else
			printf(" ");

 
         printf("\n");
    }
    return EXIT_SUCCESS;
}

