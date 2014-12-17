
#include <stdio.h>
#include <stdlib.h>

#define PALABRAS(x) ( sizeof( x ) / sizeof(char *) )

int main(int argc, char *argv[]) {

    const char *lista[] = {
	"pepe",
       	"luis",
       	"jose",
       	"dani",
	NULL
    
    };

    for (int i=0; lista[i]; i++)
    printf(" %s\n ", lista[i]);


    return EXIT_SUCCESS;
}

