#include <stdio.h>
#include <stdlib.h>
#include <conio.h> //permite usar getch(); sin que el programa tire warning
#include <string.h>
#include <ctype.h>
#include "funciones.h"

int main()
{
    eProto persona[20], auxOR[50];
    char opcion, auxNOM[50];
    int flag1 = 0, flag2 = 0, flag3 = 0, rta, auxDNI, cont18, cont1935, cont35, numMayor, flagGraf;

    inicializar0(persona); //inicializa todos los estados a 0

    do
    {
        printf("1. Agregar una persona\n");
        printf("2. Borrar una persona\n");
        printf("3. Imprimir lista ordenada por nombre\n");
        printf("4. Imprimir grafico de edades\n");

        opcion = getch();

        switch(opcion)
        {
            case '1':
                    system("cls");

                    flag2 = 0;
                    for(int i = 0; i < 20; i++)
                    {
                        if(persona[i].estado == 0)
                        {
                            printf("Ingrese nombre: ");
                            fflush(stdin);
                            gets(auxNOM);

                            validarTam(auxNOM); //valida que el tamaño del nombre no exceda al del array

                            nombreSinNum(auxNOM); //valida que no haya ningun numero ingresado en el nombre

                            pasarMayus(auxNOM); //pasa las iniciales a mayuscula

                            strcpy(persona[i].nombre, auxNOM); //copia el auxiliar al array


                            printf("Ingrese edad: ");
                            fflush(stdin);
                            scanf("%d", &persona[i].edad);  for(int i = 0; i < 19; i++) //ordena base de datos alfabeticamente
                    {
                        for(int j = i + 1; j < 19; j++)
                        {

                            if(strcmp(persona[i].nombre, persona[j].nombre) == 1 && persona[i].estado == 1 && persona[j].estado == 1)
                            {
                                strcpy(&auxOR[i], persona[i].nombre); //intercambia los nombres
                                strcpy(persona[i].nombre, persona[j].nombre);
                                strcpy(persona[j].nombre, &auxOR[i]);

                                strcpy(&auxOR[i], &persona[i].edad); //intercambia las edades
                                strcpy(&persona[i].edad, &persona[j].edad);
                                strcpy(&persona[j].edad, &auxOR[i]);

                                strcpy(&auxOR[i], &persona[i].dni); //intercambia los DNI
                                strcpy(&persona[i].dni, &persona[j].dni);
                                strcpy(&persona[j].dni, &auxOR[i]);

                                strcpy(&auxOR[i], &persona[i].estado); //intercambia los estados
                                strcpy(&persona[i].estado, &persona[j].estado);
                                strcpy(&persona[j].estado, &auxOR[i]);

                            }
                        }
                    }


                            printf("Ingrese DNI: ");
                            fflush(stdin);
                            scanf("%d", &persona[i].dni);

                            printf("\n\nCarga exitosa.\n\n");

                            persona[i].estado = 1;
                            flag2 = 1;

                            break;
                        }

                    }
                            if(flag2 == 0)
                            {
                                printf("No hay espacio!\n\n");
                            }

                    break;

            case '2':

                    flag2 = 0;

                    flag3 = verificaBD(persona); //verifica si la BD tiene usuarios ingresados

                    if(flag3 == 0) //si la funcion de arriba devuelve 0, significa que no hay usuarios ingresados
                    {
                        printf("\nNo hay datos ingresados.\n\n");
                        break;
                    }

                    printf("\nIngrese DNI de persona a eliminar: ");
                    fflush(stdin);
                    scanf("%d", &auxDNI);

                    for(int i = 0; i < 20; i++)
                    {
                        if(persona[i].estado == 1  && auxDNI == persona[i].dni)
                        {
                            printf("\n%d--%s--%d\n", persona[i].dni, persona[i].nombre, persona[i].edad);

                            printf("\nEsta seguro de eliminar el cliente? s/n: \n");
                            rta = getch();

                            if(rta == 's')
                            {
                                persona[i].estado = 0;
                                printf("\nAccion completada!\n\n");
                            }
                            else
                            {
                                printf("\nAccion cancelada!\n\n");
                            }
                            flag2 = 1;
                            break;
                        }
                    }

                    if(flag2 == 0)
                    {
                        printf("\nDNI inexistente\n\n");
                    }

                    break;

            case '3':

                    flag3 = verificaBD(persona); //verifica si la BD tiene usuarios ingresados

                    if(flag3 == 0) //si la funcion de arriba devuelve 0, significa que no hay clientes ingresados
                        {
                            printf("\nNo hay datos ingresados.\n\n");
                            break;
                        }


                    for(int i = 0; i < 19; i++) //ordena base de datos alfabeticamente
                    {
                        for(int j = i + 1; j < 19; j++)
                        {

                            if(strcmp(persona[i].nombre, persona[j].nombre) == 1 && persona[i].estado == 1 && persona[j].estado == 1)
                            {
                                strcpy(&auxOR[i].nombre, persona[i].nombre); //intercambia los nombres
                                strcpy(persona[i].nombre, persona[j].nombre);
                                strcpy(persona[j].nombre, &auxOR[i].nombre);

                                strcpy(&auxOR[i].edad, &persona[i].edad); //intercambia las edades
                                strcpy(&persona[i].edad, &persona[j].edad);
                                strcpy(&persona[j].edad, &auxOR[i].edad);

                                strcpy(&auxOR[i].dni, &persona[i].dni); //intercambia los DNI
                                strcpy(&persona[i].dni, &persona[j].dni);
                                strcpy(&persona[j].dni, &auxOR[i].dni);

                                strcpy(&auxOR[i].estado, &persona[i].estado); //intercambia los estados
                                strcpy(&persona[i].estado, &persona[j].estado);
                                strcpy(&persona[j].estado, &auxOR[i].estado);
                            }
                        }
                    }


                     for(int i = 0; i < 20; i++)
                    {
                        if(persona[i].estado == 1)
                        {
                            printf("\nDNI--Nombre--Edad");
                            printf("\n%d--%s--%d\n\n", persona[i].dni, persona[i].nombre, persona[i].edad);
                        }

                    }
                    break;

            case '4':


                    flag3 = verificaBD(persona); //verifica si la BD tiene usuarios ingresados

                    if(flag3 == 0) //si la funcion de arriba devuelve 0, significa que no hay clientes ingresados
                    {
                        printf("\nNo hay datos ingresados.\n\n");
                        break;
                    }

                      cont18 = 0;
                      cont35 = 0;
                      cont1935 = 0;


                    for(int i = 0; i < 20; i++)
                    {
                            if(persona[i].edad < 19 && persona[i].estado == 1)
                            {
                                cont18++;
                            }
                            else if(persona[i].edad > 35 && persona[i].estado == 1)
                            {
                                cont35++;
                            }
                            else if(persona[i].edad > 18 && persona[i].edad < 36 && persona[i].estado == 1)
                            {
                                cont1935++;
                            }
                    }

                    system("cls"); //limpìa pantalla para que el grafico se vea mejor

                    if(cont18 >= cont1935 && cont18 >= cont35)
                    {
                        numMayor = cont18;
                    }
                    else
                    {
                        if(cont1935 >= cont18 && cont1935 >= cont35)
                        {
                            numMayor = cont1935;
                        }
                        else
                        {
                            numMayor = cont35;
                        }
                    }

                    for(int i = numMayor; i > 0; i--)
                    {

                        if(i <= cont18)
                        {

                            printf("*");

                        }
                            if(i <= cont1935)
                            {

                                flagGraf = 1;
                                printf("\t*");

                            }
                                if(i <= cont35)
                                {
                                    if( flagGraf == 0)
                                    {

                                       printf("\t\t*");

                                    }



                                    if(flagGraf == 1)
                                    {

                                       printf("\t*");

                                    }

                                }

                        printf("\n");
                    }

                    printf("<18\t19-35\t>35\n");
                    printf("\n\nPresione cualquier tecla para volver al menu...\n");

                    getch();
                    system("cls");
                    break;

            default:
                    printf("\n\nError, opcion no valida. Presione cualquier tecla para reintentar\n");
                    getch();
                    system("cls");
                    break;
        }

    }while(flag1 == 0);

    return 0;
}
