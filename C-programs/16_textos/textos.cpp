#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    FILE *pf;
    bool asterisco = false;
    char letra;

    pf = fopen("a.dam", "r");

    if (pf == NULL){
	fprintf(stderr, "No hemos podido abrir el fichero. \n");
	return EXIT_FAILURE;

    }

    while( (letra = fgetc(pf)) == '#'){
	putchar(letra);
    }








    return EXIT_SUCCESS;
}

