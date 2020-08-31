#include <stdio.h>
#include <conio.h>
int main()
{
int dividendo, divisor, resultado = 0;
printf("Introduce dividendo: ");
scanf("%i",&dividendo);
printf("Introduce el divisor: ");
scanf("%i",&divisor);
// (==) Comparacion (!=) Desigualdad
    if(divisor != 0)
    {
    resultado = dividendo/divisor;
    printf("El resultado es: %i", resultado);
    }
    else
    {
    printf("Programa finalizado");
    }
}