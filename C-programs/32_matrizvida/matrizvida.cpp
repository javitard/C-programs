#include <stdio.h>
#include <stdlib.h>

#define N 16

void aste(int orig[N][N], int dest[N][N], int fila, int col){

   /* if (fila == 0 || col == 0 || fila == N-1 || col == N-1){
	dest[fila][col] = orig[fila][col];
	return;
    }*/

    dest[fila][col] = orig[fila-1][col] + orig[fila][col+1] + orig[fila+1][col] + orig[fila][col-1] + orig[fila+1][col+1] + orig[fila+1][col-1] + orig[fila-1][col+1] + orig[fila-1][col-1];
    if (orig[fila][col] == 1){ 
	if (dest[fila][col] == 2 || dest[fila][col] == 3)
	    dest[fila][col] = 1;
	else
	    dest[fila][col] = 0;
    }
    else{    
	if ( dest[fila][col] == 3)
	    dest[fila][col] = 1;
	else
	    dest[fila][col] = 0; 
    }

}
void imprime(int matriz[N][N]){

    for(int i=0; i<N; i++)
	printf("------");
    printf("\n");

    for (int i=0; i<N; i++){
	for (int j=0; j<N; j++)
	    printf(" %i", matriz[i][j]);
	printf("\n");
    }

    system("sleep 0.5");
    system("clear");
}

int main(int argc, char *argv[]) {
    int A[N][N] = {
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
   	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{ 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{ 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{ 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
 	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{ 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
 	{ 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0},
 	{ 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0},
 	{ 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
 	{ 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{ 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
 
    };

    int final[N][N];
    int (*p_inicial)[N]= A;
    int (*p_final)[N] = final;
    int (*aux)[N];

    imprime(A);

    for (int vez=0; vez<1000; vez++){
	for (int i=0; i<N; i++)
	    for (int j=0; j<N; j++)
		aste(p_inicial, p_final, i, j);

	imprime(p_final);
	aux = p_inicial;
	p_inicial = p_final;
	p_final = aux;
    }




    return EXIT_SUCCESS;
}
