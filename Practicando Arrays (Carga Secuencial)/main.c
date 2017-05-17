#include <stdio.h>
#include <stdlib.h>
#define MAX 100 //Defino que el vector tiene como maximo 100 caracteres

void main(void) //prototipo
{
    int edad[MAX],i;
    float sueldo [MAX], suma=0,prom,aux;

    for(i=0;i<MAX;i++) //para cuando i es igual a cero y se cumple que i es menor al maximo, se inicializa el contador i mas mas
    {
        printf("Ingrese la Edad del Legajo %d: ",i+1);   //se pide que ingrese la edad que se guardara en el legajo
        scanf("%d", &edad[i]);  //el scanf carga el valor en el vector
        printf("Ingrese el Sueldo del Legajo %d: ",i+1);    //se pide que se ingrese el sueldo que se guardara en el legajo
        scanf("%f", &aux);  //el scanf carga el valor en el vector
        sueldo[i]=aux; //el Sueldo queda en la variable auxiliar
    }
    for(i=0;i<MAX;i++)
        suma=suma+sueldo[i];
    prom=suma/MAX;

    printf("El sueldo Promedio es %.2f",prom);
}
