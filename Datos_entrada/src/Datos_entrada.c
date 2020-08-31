#include <stdio.h>
#include <conio.h>
main (){
    float calif1 = 0; float calif2 = 0; float calif3 = 0;
    float semestral = 0; float promedio = 0;
    printf("Introduce los 3 parciales, separados por una coma: ");
    scanf("%f,%f,%f",&calif1,&calif2,&calif3);
    printf("Introduce el semestral en base 40: ");
    scanf("%f",&semestral);
    /*calif1 = calif1*0.2;
    calif2 = calif2*0.2;
    calif3 = calif3*0.2;
    semestral = semestral/10;*/
    //promedio = calif1+calif2+calif3+semestral;
    promedio = calif1*0.2+calif2*0.2+calif3*0.2+semestral/10;
    printf("el promedio es: %f",promedio);
}