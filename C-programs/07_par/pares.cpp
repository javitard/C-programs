
#include <stdio.h>
#include <stdlib.h>

#define N 5

int main(int argc, char *argv[]) {

	printf("+---+---+---+---+---+\n");
	printf("|");
    int par[N];
    for (int i=0; i<N; i++)
	par[i] = i ;

    for (int i=0; i<N; i++)
	printf(" %i |" , i * 2, par[i]);


	printf("\n");
	printf("+---+---+---+---+---+\n");
    return EXIT_SUCCESS;
}


