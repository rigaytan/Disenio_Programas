/*Escribir un programa que determine si un año es 
bisiesto. Un año es bisiesto si es múltiplo de 4 
(por ejemplo, 1984). Sin embargo, los años múltiplos 
de 100 sólo son bisiestos cuando a la vez son múltiplos 
de 400 (por ejemplo, 1800 no es bisiesto, mientras que 
2400 sí lo será)*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int anio,multiplo4,multiplo100,multiplo400,dato = 0;
    printf("Introduce el año");
    scanf("%i",&anio);
    multiplo4 = anio%4;
    multiplo100 = anio%100;
    multiplo400 = anio%400;
    //!= Diferente a
    //100 200 300 400 500 600 700 800 900 1000 1100 ... 
    if (multiplo4 == 0 && multiplo100 !=0)
    {
        dato = 1;
    }
    else if (anio == 0)
    {
        dato = 3;
    }
    else if (multiplo100 == 0 && multiplo400 == 0)
    {
        dato = 2;
    }

    switch(dato)
    {
    case 1:
    printf("El año %i es biciesto",anio);
    break;

    case 2:
    printf("El año %i es biciesto multiplo de 400,",anio);
    break;

    case 3: 
    printf("El año cero no es biciesto");
    break; 

    default:
    printf("El año no es biciesto");
    //break;
    }
}

