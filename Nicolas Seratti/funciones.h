#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
typedef struct
{
    char nombreapellido[100];
    char direccion[50];
    int numtarjeta;

    //los dos siguientes siempre deben estar en un (ABM)
    int id;
    int estado;//auxiliar banderaLugarLibre
}egaraje;
#endif
int egar_init(egaraje [],int limite);
int egar_alta(egaraje [] ,char nombreapellido[],char direccion[],int numtarjeta,int limite);
int egar_baja(egaraje [] ,int limite, int id);
int egar_modificacion(egaraje [] ,int limite, int id);
int egar_siguienteId(egaraje [] ,int limite);
int proximoId();
int getValidString(char requestMessage[],char errorMessage[], char errorMessageLenght[],char input[], int maxLenght,int attemps);
int getValidInt(char requestMessage[],char errorMessage[], int* input,int lowLimit, int hiLimit,int attemps);
int getValidFloat(char requestMessage[],char errorMessage[], float* input,float lowLimit, float hiLimit,int attemps);
