#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {

    char nombre[50];

    int cont = 0; 

    int max = 0, min = 50; 

    int longitud_palabra = 0; 

    printf("\nIngrese un texto (max 50 caracteres): ");

    fgets(nombre, 50, stdin);

    int len = strlen(nombre);

    if (nombre[len - 1] == '\n') {

        nombre[len - 1] = '\0';

    }

    printf("Texto ingresado: %s\n", nombre);

    for (int i = 0; i < len; i++) {

        if (nombre[i] == ' ' || nombre[i] == '\0') {

            if (longitud_palabra > 0) {

                cont++;

                if (longitud_palabra > max) {

                    max = longitud_palabra;

                }

                if (longitud_palabra < min) {

                    min = longitud_palabra;

                }

                longitud_palabra = 0;

            }

        } else {

            longitud_palabra++;

        }

    }

    if (longitud_palabra > 0) {

        cont++;

        if (longitud_palabra > max) {

            max = longitud_palabra;

        }

        if (longitud_palabra < min) {

            min = longitud_palabra;

        }

    }
     else {
        printf("El numero de palabras es: %d\n", cont);

        printf("La palabra mas larga tiene %d caracteres.\n", max);

        printf("La palabra mas corta tiene %d caracteres.\n", min);
    }
    return 0;

}
