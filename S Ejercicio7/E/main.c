#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num1;
    int num2;
    int suma;
    int resta;
    int mult;
    float div;


    printf("Ingrese el primer numero ");
    scanf("%d",&num1);

    printf("Ingrese el segundo numero ");
    scanf("%d",&num2);

    suma = num1 + num2;
    resta = num1 - num2;
    mult = num1 * num2;
    div = (float)num1 / num2;

    printf("La suma da: %d\n",suma);
    printf("La resta da: %d\n", resta);
    printf("La multiplicacion da: %d\n", mult);
    printf("La division da: %f\n", div);


    return 0;
}
