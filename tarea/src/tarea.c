//Realizar un programa que al introducir dos números me 
//diga cual es el mayor y cual es el menor, siempre y cuando 
//los dos números sean pares.
#include <stdio.h>
#include <conio.h>
int main (){
    int num_1, num_2, par_1, par_2 = 0;
    printf("Introduce primer numero\n");
    scanf("%i",&num_1);
    printf("Introduce segundo numero\n");
    scanf("%i",&num_2);
    par_1 = num_1%2;
    par_2 = num_2%2;
    if(par_1==0)
    {
       if(par_2==0)
       {
           if(num_1>num_2)
           {
              printf("el numero 1 es mayor que el numero 2\n");
           }
           else
           {
               printf("el numero 2 es mayor que el numero 1\n");
           }
       }
    }
    printf("programa finalizado\n");
}