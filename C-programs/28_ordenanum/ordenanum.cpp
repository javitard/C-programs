
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int lista[] = {9,2,5,4,5,7,1};
    
    for (int i=0; lista[i]; i++)
    {
    if (lista[i] <= lista[i+1])
	printf("%i\n", lista[i]);
    };


    return EXIT_SUCCESS;
}

