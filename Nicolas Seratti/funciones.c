#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "funciones.h"
#define TAMANIO 10
#define OCUPADO 0
#define LIBRE 1

int egar_init( egaraje autos[],int limite)
{
    int retorno = -1;
    int i;
    if(limite > 0 && autos != NULL)
    {
        retorno = 0;
        for(i=0; i<limite; i++)
        {
            autos[i].estado= LIBRE;
            autos[i].id= 0;
        }
    }
    return retorno;
}

/*int garajealta(egaraje array,int limite)
{
    int retorno = -1;
    int i;
    int IdPropietario;
    int numtarjeta;
    char nombre[100];
    char direccion[50];
    if(limite > 0 && array != NULL)
    {
        i = buscarLugarLibre(array,limite);
        if(i >= 0)
        {
            if(!getValidString("\nNombre y Apellido? ","\nEso no es un nombre","El maximo es 40",nombre,40,2))
            {
                 if(!getValidString("\nDireccion? ","\nEso no es una direccion","El maximo es 40",direccion,40,2))
                {
                    if(!getValidInt("\nNumero de Tarjeta? ","\nEso no es un numero correspondiente(ejemplo: 1111-1111 )",&numtarjeta,0,1))
                            {
                                retorno = 0;
                                strcpy(array[i].nombreapellido,nombre);//cambiar baffer por auxiliarzaraza
                                strcpy(array[i].direccion,direccion);

                                //------------------------------
                                //------------------------------
                                array[i].id = proximoId();//genera un numero (unico) que no habia existido antes;
                                array[i].isEmpty = 0;
                    }
                }
            }
            else
            {
                retorno = -3;
            }
        }
        else
        {
            retorno = -2;
        }

    }
    return retorno;
}*/
int egar_alta(egaraje  autos[],char nombreapellido[],char direccion[],int numtarjeta,int limite)
{
    int retorno = -1;
    char nombre[50];
    int idpropietario;
    int indice;
    int id=

    if(limite > 0 && autos != NULL)
    {
        retorno = -2;
        indice = egar_buscarLugarLibre(autos,limite);
        if(indice >= 0)
        {
            retorno = -3;
            id = egar_siguienteId(autos,limite);

            //if(!getValidString("Nombre?","Error","Overflow", nombre,50,2))
            //{
                retorno = 0;
                strcpy(autos[indice].nombreapellido,"juan Diaz ");
                strcpy(autos[indice].direccion,"Av Mitre ");
                autos[indice].id = id;
                autos[indice].numtarjeta=11111111;
                autos[indice].estado = OCUPADO;
            //}
        }
    }
    return retorno;
}

int egar_buscarLugarLibre(egaraje autos[],int limite)
{
    int retorno = -1;
    int i;
    if(limite > 0 && autos != NULL)
    {
        retorno = -2;
        for(i=0;i<limite;i++)
        {
            if(autos[i].estado == LIBRE)
            {
                retorno = i;
                break;
            }
        }
    }
    return retorno;
}


int proximoId()
{
    static int proximoId = -1;
    proximoId++;
    return proximoId;
}

int egar_modificacion(egaraje numtarjeta[],int limite, int id)
{
    int flag=0;
    int auxInt;
    char rta;
    int i;

    printf("Ingresar Id: ");
    scanf("%d", id);

for(i=0;i<limite;i++)
{

        if(id[i]==numtarjeta)
        {

            printf("\nIngresar : ");
            scanf("%d",auxInt);
            fflush(stdin);

            printf("\n¿Desea realizar la modificacion?");
            scanf("%c",rta);

            if(rta=='s')
            {
                numtarjeta=auxInt;

            }
            else
            {
                printf("\nAccion cancelada");
            }
            flag=1;
        }


}

int egar_siguienteId(egaraje autos[],int limite)
{
    int retorno = 0;
    int i;
    if(limite > 0 && autos != NULL)
    {
        for(i=0; i<limite; i++)
        {
            if(autos[i].estado == OCUPADO)
            {
                    if(autos[i].id>retorno)
                    {
                         retorno=autos[i].id;
                    }

            }
        }
    }

    return retorno+1;
}
