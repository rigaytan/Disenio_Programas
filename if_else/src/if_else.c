#include <stdio.h>
#include <conio.h>
int main ()
{
    int numero = 0;
    printf("Introduce un numero: ");
    scanf("%i",&numero);
    //if y else servira para que el program tome decisiones
    int num = numero%2;
    if(num == 0) //un igual es para igualacion y == es para comparacion
    {
        printf("\nel numero que se introdujo es par");
    }
    else
    {
       printf("\nEl numero que se introdujo no es par"); 
    }
    //printf("\nprograma finalizado");
    return main();
}