#include <stdio.h>
#include <stdlib.h>

int main()
{

    char nombre[20];

    int edad;


    printf("Ingrese su nombre ");
    scanf("%s", nombre);

    printf("\nIngrese su edad ");
    scanf("%d", &edad);

    printf("\nUsted se llama %s y tiene %d anios", nombre, edad);




    return 0;
}
