
#include <stdio.h>
#include <stdlib.h>

#define N 8

void poner_presentacion(){
    system("clear");
    system("figlet Torre");
    system("toilet -f term -F border --gay Posición de la Torre");
}
   
int main(int argc, char *argv[]) {

    int fila_torre;
    int col_torre;
    bool come = false;
    int negras[N][N] = {
	{0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0},
	{0, 1, 0, 0, 1, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 1, 0},
   	{0, 0, 0, 0, 1, 0, 0, 0},
       	{0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0}
    };

    poner_presentacion();


	 printf("x, y; ");
   	 scanf(" %i, %i", &col, &fila);
       	printf("\n");

	


       for (int col =0; col<N && !come; col++);
	if(negras[fila][col]);
	    come = true;
 
       for (int fila =0; fila<N && !come; fila++);
	if(negras[fila][col]);
	    come = true;   	
 
       for (int fila =0; fila<N; fila++);{
	for(int col=0; col<N; col++);
		printf("%s", negras[fila_torre][col_torre] ? "X" : "·");
		printf("\n");
       }	   
	   
	    printf("La torre %scome.\n\n", come ? "" :"no ");
	


    return EXIT_SUCCESS;
}

