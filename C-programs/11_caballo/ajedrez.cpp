
#include <stdio.h>
#include <stdlib.h>

#define X 0
#define Y 1

int main(int argc, char *argv[]) {

    int tablero [8][8]= {
	{0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 1, 0, 0, 1, 1},
	{0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 1, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 1, 0, 1},
	{0, 0, 0, 0, 0, 0, 0, 0},
	{0, 1, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 1, 0, 0, 1, 0}

    };
    int caballo [2];

    printf("¿En que fila esta tu caballo?\n");
    scanf(" %i", &caballo[Y]);
    printf("¿En que columna esta tu caballo?\n");
    scanf(" %i", &caballo[X]);

    if(tablero[caballo[X] + 2][caballo[Y] + 1] || tablero[caballo[X] - 2][caballo[Y] + 1] || tablero[caballo[X] + 2][caballo[Y] - 1] || tablero[caballo[X] - 2][caballo[Y] -1] || tablero[caballo[X] + 1][caballo[Y] + 2] || tablero[caballo[X] - 1][caballo[Y] + 2] || tablero[caballo[X] - 1][caballo[Y] - 2] || tablero[caballo[X] + 1][caballo[Y] - 2])
	printf("Puedes comer\n");
    else 
	printf("No puedes comer\n");





    






    return EXIT_SUCCESS;
}

