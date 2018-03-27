#include <stdio.h>
#include <stdlib.h>

void sumarNumeros (int, int);

int main()
{
    int numero1;
    int numero2;

    printf("ingrese un numero: ");
    scanf("%d", &numero1);

    printf("ingrese un numero: ");
    scanf("%d", &numero2);

    sumarNumeros(numero1, numero2);     //parametros actuales

    return 0;
}

void sumarNumeros (int primerNumero, int segundoNumero)    //parametros formales
{
    int retorno;
    retorno=primerNumero+segundoNumero;
    printf("la suma es: %d", retorno);
}
