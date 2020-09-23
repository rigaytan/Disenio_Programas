#include <stdio.h>
#include <conio.h>
int main()
{
 char letra = ' '; //Declaracion de variables
 printf("Introduce una letra: "); //Inicia el programa 

 scanf("%c",&letra);
 //printf("La letra que se introdujo fue %c",letra);

 if (letra == 'S')
 {
     printf("La letra que se introdujo fue S");
 }
}