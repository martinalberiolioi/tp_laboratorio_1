#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"

void inicializar0(eProto persona[20])
{
    for (int i = 0; i < 20; i++)
    {
        persona[i].estado = 0;
    }
}

void validarTam (char auxNOM[40])
{
     while(strlen(auxNOM) > 50)
    {
        system("cls");
        printf("Error, nombre demasiado largo. Reingrese nombre: ");
        fflush(stdin);
        gets(auxNOM);
    }

}

void nombreSinNum (char auxNOM[40])
{
    int flag3 = 0;

    while(flag3 == 0)
    {
        for(int i = 0; i < 20; i++)
        {
            if(isdigit(auxNOM[i]) == 0)
            {
                flag3 = 1;
            }
            else
            {
                printf("Error, ingrese solamente letras. Reingrese nombre: ");
                fflush(stdin);
                gets(auxNOM);
                flag3 = 0;
                break;
            }

        }
    }

    flag3 = 0;
}

void pasarMayus (char auxNOM[40])
{
    strlwr(auxNOM);

    auxNOM[0] = toupper(auxNOM[0]);

        for (int i = 0; i < strlen(auxNOM); i++)
        {
            if(auxNOM[i] == ' ')
            {
                auxNOM[i + 1] = toupper(auxNOM[i + 1]);
            }
        }
}

int verificaBD (eProto aux[])
{
    int flag3;

     for(int i = 0; i < 20; i++)
     {
        if(aux[i].estado == 0)
        {
            flag3 = 0;
        }
        else
        {
            flag3 = 1;
            break;
        }
    }

    return flag3;
}
