//Introducir un numero comprendido entre 1 y 100
//determinar en que rango queda
#include <stdio.h>
#include <conio.h>
int main ()
{
    int num = 0;
    printf("introduce un numero entre 1 y 100: \n");
    scanf("%i",&num);
    if(num>=1 && num<=100)
    {
        if(num>=1 && num<=25)
        {
            printf("el numero esta en el rango 1\n");
        }
        else if(num>=26 && num<=50)
            {
                printf("el numero esta en el rango 2\n");
            }
        else if(num>=51 && num<=75)
            {
                printf("el numero esta en el rango 3\n");
            }
        else if(num>=76 && num<=100)
            {
                printf("el numero esta en el rango 4\n");
            }
    }
    
    else{
    printf("error no esta dentro de los primeros 100\n");
    }
    return main();
}