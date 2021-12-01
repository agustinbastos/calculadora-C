#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>

#define ROJO_T "\x1b[31m"
#define VERDE_T "\x1b[32m"

int suma (int A, int B)
{
    int resultado = 0;

    resultado = A + B;
    
    printf (VERDE_T"El resultado de la suma es: %d", resultado);
}

int resta (int A, int B)
{
    int resultado = 0;

    resultado = A - B;

    printf (VERDE_T"El resultado de la resta es: %d", resultado);
}

void division (float A, float B)
{
    if (B==0){
        printf(ROJO_T"---No se puede dividir por 0---");
    }
    else{

    float resultado = 0;

    resultado = A / B;

    printf (VERDE_T"El resultado de la division es: %.1f", resultado);
    }
}

int multiplicacion (int A, int B)
{
    int resultado = 0;

    resultado = A * B;

    printf (VERDE_T"El resultado de la multiplicacion es: %d", resultado);
}

int factorialA (int A)
{
    if(A>=0 && A<=12){

    int resultado = 1;
    int i;

    for(i=1; i<= A; i++){
       resultado = resultado * i;
}
    printf (VERDE_T"El resultado del factorial de A es: %d", resultado);
    }
    else{
        printf(ROJO_T"---Ingrese un valor entre 0 y 12---");
    }
}

int factorialB (int B)
{
    if(B>=0 && B<=12){

    int resultado = 1;
    int i;

    for(i=1; i<= B; i++){
       resultado = resultado * i;
}
    printf (VERDE_T"El resultado del factorial de B es: %d", resultado);
    }
    else{
        printf(ROJO_T"---Ingrese un valor entre 0 y 12---");
    }
}