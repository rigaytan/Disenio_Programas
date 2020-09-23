#include <stdio.h>
#include <conio.h>
#include <string.h>

int main ()
{
    //string : variable que nos permite guardar palabras
    //Una palabra es una serie de caracteres pegados
    char letra[10]= " ";
    printf("Ingrese una palabra: ");
    //scanf("%s",&letra);
    gets(letra);
    printf("La palabra introducida es: %s\n", letra);
    return 0;
}


