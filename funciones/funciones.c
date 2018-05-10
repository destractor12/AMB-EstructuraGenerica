#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"




float getfloat(char mensaje[])
{
    float auxiliar;
    printf("%s",mensaje);
    scanf("%f",&auxiliar);
    return auxiliar;
}



int getint(char mensaje[])
{
    int auxiliar;
    printf("%s",mensaje);
    scanf("%d",&auxiliar);
    return auxiliar;
}


char getchar(char mensaje[])
{
    char auxiliar;
    printf("%s",mensaje);
    fflush(stdin);
    scanf("%c",&auxiliar);
    return auxiliar;
}

int esNumerico(char str[])
{
    int i=0;

    while(str[i]!='\0')
    {
        if(str[i]<'0'|| str[i]>'9')
        {
            return 0;
        }
        i++
    }

    return 1;
}
