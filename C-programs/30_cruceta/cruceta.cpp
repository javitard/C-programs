
#include <stdio.h>
#include <stdlib.h>

#define M 8
#define N M

int main(int argc, char *argv[]) {

    double A [N][M]= {
	{1, 2, 3, 3, 5, 6, 4, 3},
	{4, 5, 6, 6, 4, 3, 4, 6},
	{1, 7, 2, 4, 6, 1, 2, 5},
	{2, 8, 3, 5, 3, 4, 0, 5},
	{3, 9, 5, 4, 4, 1, 1, 5},
	{2, 3, 6, 3, 9, 6, 9, 5},
        {3, 8, 9, 4, 6, 1, 3, 5},
	{4, 3, 2, 3, 5, 3, 6, 7}

    };

    double media [N][M];

    for (int fila = 1; fila<N-1; fila++)
	for( int col=1; col<M-1; col++)
	 A[N][M] = (A[fila][col-1] + A[fila-1][col] + A[fila][col+1] + A[fila+1][col]) / 4;

    for (int fila = 0; fila<N; fila++){
	for (int col=0; col<M; col++)
	    printf("%2.1lf", media[fila][col]);
	printf("\n");
    }

   


    return EXIT_SUCCESS;
}

