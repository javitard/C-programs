
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int rojo, verde, azul;

    printf("Mira un color .\n");
    printf("Tu color tiene rojo (1=Sí/0=No) ?");
    scanf(" %i", &rojo);

    if (rojo)
	printf("Tu estás viendo rojo, true and.\n");
    else
	printf("no ves rojo \n");


    return EXIT_SUCCESS;
}

