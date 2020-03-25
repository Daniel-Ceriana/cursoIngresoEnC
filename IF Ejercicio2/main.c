#include <stdio.h>
#include <stdlib.h>

int main()
{
   int edad;

   printf("Ingrese su edad ");
   scanf("%d",&edad);

   if(edad >=18){
        printf("Es mayor de edad");
   }else{
        printf("No es mayor de edad");

    }


    return 0;
}
