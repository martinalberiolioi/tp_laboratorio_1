#include <stdio.h>
#include <stdlib.h>
#include <conio.h> //libreria donde esta "getch" para evitar warning
#include "funciones.h"


int primerNumero(void)
{
    int X;

    system("cls");

    printf("Ingrese a continuacion el primer operando: ");
    scanf("%d", &X);

    system("cls");

    return X;
}


int segundoNumero(void)
{
    int Y;

    system("cls");

    printf("Ingrese a continuacion el segundo operando: ");
    scanf("%d", &Y);

    system("cls");

    return Y;
}


void sumar (int X, int Y)
{
    int res;

    system("cls");

    printf("Los numeros ingresados son %d y %d \n", X, Y);

    res = X + Y;
    printf("\nEl resultado de la suma es: %d \n", res);

    printf("\n\n\nPresione cualquier tecla para volver al menu principal");
    getch();
    system("cls");

}


void restar (int X, int Y)
{
    int res;

    system("cls");

    printf("Los numeros ingresados son %d y %d \n", X, Y);

    res = X - Y;
    printf("\nEl resultado de la resta es: %d", res);

    printf("\n\n\nPresione cualquier tecla para volver al menu principal");
    getch();
    system("cls");
}



void dividir (int X, int Y)
{
     float res;

     while (Y == 0) //valida que divisor no sea 0
     {
         system("cls");
         printf("Error, no se puede dividir por 0. Reingrese un caracter: ");
         scanf("%d", &Y);
     }

    system("cls");

    printf("Los numeros ingresados son %d y %d \n", X, Y);

    res = (float) X / Y;
    printf("\nEl resultado de la division es: %f", res);

    printf("\n\n\nPresione cualquier tecla para volver al menu principal");
    getch();
    system("cls");
}


void multiplicar(int X, int Y)
{
     int res;

    system("cls");
    printf("Los numeros ingresados son %d y %d \n", X, Y);

    res = X * Y;
    printf("\nEl resultado de la multiplicacion es: %d", res);

    printf("\n\n\nPresione cualquier tecla para volver al menu principal");
    getch();
    system("cls");
}



void factorial(int X)
{
    int res1 = 1;

    for(int i = 1; i <= X; i++)
    {
        res1 = res1 * i;
    }

    if (X == 0) //el factorial de 0 es 1. Entonces si el usuario ingresa 0, el programa devuelve 1
    {
        X = 1;
    }

    system("cls");
    printf("El numero ingresado es %d \n", X);


    printf("\nEl resultado del factorial del operando ingresado es: %d \n", res1);

    printf("\n\n\nPresione cualquier tecla para volver al menu principal");
    getch();
    system("cls");
}



void todas(int X, int Y)
{
    int ressum;
    int resres;
    float resdiv;
    int resmul;
    int res1 = 1;

    while (Y == 0) //valida que el divisor no sea 0
     {
         system("cls");
         printf("Error, no se puede dividir por 0. Reingrese un caracter: ");
         scanf("%d", &Y);
     }

    system("cls");
    printf("Los numeros ingresados son %d y %d \n", X, Y);

    ressum = X + Y;
    resres = X - Y;
    resdiv = (float) X / Y;
    resmul = X * Y;


    for(int i = 1; i <= X; i++)
    {
        res1 = res1 * i;
    }


    if (X == 0) //el factorial de 0 es 1. Entonces si el usuario ingresa 0, el programa devuelve 1
    {
        X = 1;
    }


    printf("\nEl resultado de la suma es: %d", ressum);
    printf("\nEl resultado de la resta es: %d", resres);
    printf("\nEl resultado de la division es: %f", resdiv);
    printf("\nEl resultado de la multiplicacion es: %d", resmul);
    printf("\nEl resultado del factorial del operando ingresado es: %d", res1);

    printf("\n\n\nPresione cualquier tecla para volver al menu principal");
    getch();
    system("cls");
}
