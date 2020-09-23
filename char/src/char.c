#include <stdio.h>
#include <conio.h>
int main()
{
 char letra = ' '; //Declaracion de variables
 printf("Introduce una letra: "); //Inicia el programa 
 scanf("%c",&letra);
 //printf("La letra que se introdujo fue %c",letra);

 /*if (letra == 'S')
 {
     printf("La letra que se introdujo fue S");
 }*/
 switch (letra)
 {
 case 's':
 printf("La letra que se introdujo fue s");
 break;
 case 'S':
 printf("La letra que se introdujo fue S");
 break;
 default:
 printf("Error");
 }
}