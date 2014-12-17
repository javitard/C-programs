

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int altura;
    int base;
    int opcion;
    int radio;
    char *opciones[] = {
	"Circulo",
	"Cuadrado",
	"Triangulo"
    };

    do {
	system("clear");

	system("figlet Menu");
	printf( "\n\n\t Elige una y te mostraré el area: \n\n");

	for (int i=0; i<sizeof(opciones) / sizeof(char *); i++)
	    printf("%i.- %s. \n", i+1, opciones[i]);

	printf("\nOpcion: ");

	scanf(" %i", &opcion);
    } 
    
    while(opcion<1 || opcion>3);



    switch(opcion){
	case 1:
	    printf("Has elegido circulo.\n");
	    printf("¿Cúal es su radio?\n");
	    scanf(" %i", &radio);
	    printf("Su area es %lf\n", radio * radio * 3.14159);
	    break;
	case 2:
	    printf("Has elegido cuadrado.\n");
	    printf("¿Cúal es su lado?\n");
	    scanf(" %i", &radio);
	    printf("Su area es %i\n", radio * radio); 
	    break;
	case 3:
	    printf("Has elegido triangulo.\n");
	    printf("¿Cúal es su base?\n");
	    scanf(" %i", &base);
	    printf("¿Cúal es su altura?\n");
	    scanf(" %i", &altura);
	    printf("Su area es %i\n", base * altura / 2);
	    break; 
	default:
	    printf("Has elegido ser un gilipollas en esta vida. \n");
	    break;
    }

    return EXIT_SUCCESS;
}

