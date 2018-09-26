#include <stdio.h>
#include <stdlib.h>
#include <conio.h> //libreria donde esta "getch" para evitar el warning
#include "funciones.h"

int main()
{
    char opcion;
    int num1 = 0;
    int num2 = 0;
    int flag = 1;
    int flag2 = 1;

    do
    {

    if (flag == 1 && flag2 == 1)
    {
        printf("1.- Ingresar el primer operando \n");
        printf("2.- Ingresar el segundo operando \n");
        flag = 0;
    }
    else //esta parte hace que, cuando el código corrio una vez, el menu muestre los operando seleccionados
    {
         printf("1.- Primer operando ingresado: %d \n", num1);
         printf("2.- Segundo operando ingresado: %d \n", num2);
    }

    printf("3.- Calcular la suma \n");
    printf("4.- Calcular la resta \n");
    printf("5.- Calcular la division \n");
    printf("6.- Calcular la multiplicacion \n");
    printf("7.- Calcular el factorial \n");
    printf("8.- Calcular todas las operaciones \n");
    printf("9.- Salir \n");

    opcion = getch();

    switch (opcion)
    {
        case '1':
                num1 = primerNumero();
                flag2 = 0;
                break;
        case '2':
                num2 = segundoNumero();
                flag2 = 0;
                break;
        case '3':
                sumar(num1, num2);
                break;
        case '4':
                restar(num1, num2);
                break;
        case '5':
                dividir(num1, num2);
                break;
        case '6':
                multiplicar(num1, num2);
                break;
        case '7':
                factorial(num1);
                break;
        case '8':
                todas(num1, num2);
                break;
        case '9':
                printf("\nHasta luego!\n");
                break;
        default:
                system("cls");
                printf("Error, caracter no valido. Reingrese numero.\n\n");
                flag = 1;
                break;

    }

    }while(opcion != '9'); //mientras el usuario no apriete la opcion 9, es decir "cerrar", el programa sigue

    getch();

    return 0;

}
