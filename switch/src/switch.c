#include <stdio.h>
#include <conio.h>
int main ()
{
    int seleccion = 0;
    float area, base, altura = 0;
    printf("Seleccione una figura a calcular: \n");
    printf("1.- Triangulo\n");
    printf("2.- Cuadrado\n");
    printf("3.- Circulo\n");
    printf("4.- Rombo\n");
    scanf("%i",&seleccion);
    switch(seleccion)
    {
    case 1:
        printf("seleccionaste triangulo\n");
        printf("Introduce base y altura separados por enter");
        scanf("%f",&base);
        scanf("%f",&altura);
        area = (base*altura)/2;
        printf("El area es; %f", area);
        break;
    case 2:
        printf("Aqui calculariamos el area del cuadrado\n");
        break;   
    case 3:
        printf("Aqui calculariamos el area del circulo\n");
        break;
    case 4:
        printf("Aqui calculariamos el area del rombo\n");
        break;
    }
    if (seleccion >=5 || seleccion<=0)
    {
    printf("Esa seleccion no existe\n");
    }
}