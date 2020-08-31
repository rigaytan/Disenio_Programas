#include <stdio.h>
#include <conio.h>
int main(){
    //inicia declaracion de variables
    float edad = 0;
    float dia = 24;
    float suma = 0;
    //inicia el codigo del algoritmo
    printf("Hola bienvenido al sistema\n");
    printf("Para comenzar escribe tu edad: ");
    scanf("%f",&edad);
    suma = edad + 10;
    printf("escribe la fecha del dia de hoy: ");
    scanf("%f",&dia);
    printf("La edad que %f gracias, hoy es %f\n",edad,dia);
    printf("Dentro de diez anios tendras %f\n",suma);
    printf("programa finalizado");
    return 0;
}