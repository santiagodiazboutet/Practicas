#include <stdio.h>
#include <stdlib.h>

int pedirEntero(void); // void es pq no ingresa dato, int es pq devuelve dato

int main()
{
    int numeroIngresado;
    numeroIngresado=pedirEntero();
    printf("El numero ingreso es: %d\n", numeroIngresado);
    return 0;
}

int pedirEntero(void)
{
    int numero;
    printf("ingrese un numero entero: ");
    scanf("%d", &numero);
    return numero;
}
