
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    char *cadena = argv[1];
    int resultado = 0;

    for (int i = 0; cadena[i] != '\0'; i++){
	resultado *= 10;
	resultado += cadena[i] - '0';
	
	

    }

    printf ("%i\n", resultado);

    return EXIT_SUCCESS;
}

