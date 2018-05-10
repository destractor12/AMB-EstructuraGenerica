#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define QTY 20

int main()
{
    egaraje autos[QTY];

    int menu;
    int auxiliarId;

    garajeinit(autos,QTY);

    do
    {
        getValidInt("1.Alta\n2.Modificar\n3.Baja\n4.Mostrar\n5.Ordenar\n6.Mostrar Debug\n9.Salir\n","\nNo valida\n",&menu,1,9,1);
        switch(menu)
        {
            case 1:
                garajealta(autos,QTY,,,);
                break;
            case 2:
                garmodificacion(egaraje.numtarjeta,QTY,egaraje.id)
                break;
            case 3:

                break;
            case 4:

                break;
            case 5:

                break;
            case 6:

                break;
        }
    }while(menu != 9);

    return 0;
}
