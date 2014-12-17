
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int rojo, azul, amarillo;

    printf("Mira un color .\n");
    printf("Tu color tiene rojo (1=Si/0=No) ?");
    scanf(" %i", &rojo);
   

    printf("Tu color tiene azul (1=Si/0=No) ?");
    scanf(" %i", &azul);
  

    printf("Tu color tiene amarillo (1=Si/0=No) ?");
    scanf("%i", &amarillo);
 
    

    if (rojo && azul && amarillo)
	printf(" ves blanco \n");
    else if (rojo && azul)
	printf("ves morado \n");
    else if (azul &&  amarillo)
	printf("ves verde \n");
    else if (rojo && amarillo)
	printf("ves naranja \n");
    else if (azul)
	printf("ves azul \n");
    else if (amarillo)
	printf("ves amarillo \n");
    else if (rojo)
	printf("ves rojo \n");
    else 
	printf(" ves negro \n");
    



    return EXIT_SUCCESS;
}

