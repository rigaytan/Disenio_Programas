#include <stdio.h>
#include <conio.h>
int main()
{
    int ancho, area, alto, perimetro = 0;
    printf("Introducir ancho del rectangulo\n");
    scanf("%i",&ancho);
    printf("Introduce el alto del rectangulo\n");
    scanf("%i",&alto);
    area = ancho*alto;
    perimetro = (ancho+alto)*2;
    printf("El area es: %i\n", area);
    printf("El perimetro es: %i", perimetro);
}