
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    char letra;
    
    printf("Elige la letra que mas te gusta, güey\n");
    letra = getc(stdin);
    printf("Pues la %c es una mierda de letra. \n", letra);
    
    if (letra < 'a')
	printf("Por favor, escribe en minúsculas.\n");






    return EXIT_SUCCESS;
}

