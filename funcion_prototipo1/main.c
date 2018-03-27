#include <stdio.h>
#include <stdlib.h>

/** \brief permite sumar dos numeros enteros
 *
 * \param el primer numero a sumar
 * \param el segundo numero a sumar
 * \return la suma de los numeros
 *
 */

//prototipo o declaracion de la funcion (siempre con ;)
//el int representa el tipo de dato devuelto por la funcion (int, float, char, double)
//sumarNumeros es el identificador de la funcion
//(int, int) representa los parametros que recibe la funcionn

int sumarNumeros (int, int);

int main()
{
    int resultado;
    int numero1=5;
    int numero2=9;
    //la llamada a la funcion
    resultado=sumarNumeros(numero1, numero2);
    printf("El resultado de la suma es: %d\n", resultado);
    return 0;
}
//desarrollo o la implementacion de la funcion (codigo o algoritmo que resuelve el problema)
//darle nombre a los parametros!
//void "funcion", es para una funcion sumidero, mostrar un msj, etc.
int sumarNumeros (int primerNumero, int segundoNumero)
{
    //desarrollo de la funcion
    int retorno;
    retorno=primerNumero+segundoNumero;
    return retorno;
}
