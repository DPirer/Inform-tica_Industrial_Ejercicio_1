#include <stdio.h>

// Pedro Antonio Estévez Pérez

// Ejercicio 1

/* Desarrollar un programa en C con las siguientes opciones:
a) Introducir un valor entero impar comprendido entre 1 y n
b) Crea una función para calcular 1 + 3 + 5 + ··· + n
c) Crea una función para calcular 1 * 3 * 5 * ··· * n*/

int suma (n)
{
    int i, suma=0;

    for (i=1; i<=n; i+=2)
        suma = suma + i;

    return suma; //Devolvemos el valor suma al resutlado1
}
int por(n)
{
    int i, por=1;

    for (i=1; i<=n; i+=2)
        por = por * i;

    return por; //Devolvermos el valor por a resultado2
}

void main()
{
    int n;

    while (1) //Pediremos al usuario que introduzca un número y comprobaremos que sea un válido.
    {
        printf("Introduce un valor impar entre 1 y 100: ");
        scanf("%d", &n);
        if (n%2!=1 || n<1 || n>100) //Si introduzco un número no entero, cogerá solo la parte entera
            printf("Introduce un numero valido\n");
        else
            break;
    }

    int resultado1 = suma(n); //De aquí, nos lleva a la función suma, y nos dará un valor
    int resultado2 = por(n); //De aquí, nos lleva a la función por, y nos dará un valor

    printf("El resultado de la suma es: %d\n", resultado1);
    printf("El resultado de la multiplicacion es: %d\n", resultado2);
    printf("\n");

}
/*A partir de 63, creo que la multiplicación se hace tan grande que excede el
tipo de dato int*/
