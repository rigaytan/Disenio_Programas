#include<stdio.h>
#include<conio.h>
int main()
{
    int numero, residuo = 0;
    printf("Introduce el numero");
    scanf("%i",&numero);
    if (numero>100)
    {
        residuo = numero%2;
        if (residuo == 0)
        {
            printf("El numero es mayor a 100 y es par");
        }
        else
        {
            printf("El numero es mayor a cien pero no es par");
        }
    }
    else
    {
        printf("El numero no es mayor a 100");
    }    
}