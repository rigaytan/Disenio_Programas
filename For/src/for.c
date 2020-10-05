#include <stdio.h>
#include <conio.h>
int main ()
{
   int i = 0; int numero = 0; int incremento = 0; int veces = 0;
   printf("Introduce un numero");
   scanf("%i",&numero);
   printf("Introduce el valor del incremento");
   scanf("%i",&incremento);
   printf("introduce el numero de veces que deseas incrementar");
   scanf("%i",&veces);
   for(i=0; i<veces; i++)
   {
    numero = numero+incremento;
    printf("El numero ahora es: %i\n",numero);
    if (numero == 30)
    {
        printf("acertaste a un numero ganador el 30\n");
        i = veces;
        //break;
    }  
   }
   printf("Saliste del ciclo for");
}