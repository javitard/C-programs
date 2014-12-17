#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char nombre[6];

    fgets(nombre, 6, stdin);
    printf("Hola, %s\n", nombre);
    puts(nombre);

    return EXIT_SUCCESS;
}

