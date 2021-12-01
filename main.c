#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

#define ROJO_T     "\x1b[31m"
#define VERDE_T    "\x1b[32m"
#define AMARILLO_T "\x1b[33m"
#define AZUL_T     "\x1b[34m"
#define MAGENTA_T  "\x1b[35m"
#define CYAN_T     "\x1b[36m"

int main()
{
    char seguir='s';
    int opcion=0;
    int A=0;
    int B=0;

    while(seguir == 's')
    {
        printf(CYAN_T"------------------------------------\n");
        printf(CYAN_T"----------MENU CALCULADORA----------\n");
        printf(CYAN_T"------------------------------------\n");
        printf(MAGENTA_T"1- Ingresar el 1er operando: "); printf(VERDE_T"%d", A); printf("\n");
        printf(MAGENTA_T"2- Ingresar el 2do operando: "); printf(VERDE_T"%d", B); printf("\n");
        printf(MAGENTA_T"3- Calcular la suma\n");
        printf(MAGENTA_T"4- Calcular la resta\n");
        printf(MAGENTA_T"5- Calcular la division\n");
        printf(MAGENTA_T"6- Calcular la multiplicacion\n");
        printf(MAGENTA_T"7- Calcular el factorial de A\n");
        printf(MAGENTA_T"8- Calcular el factorial de B\n");
        printf(MAGENTA_T"9- Calcular todas las operaciones\n");
        printf(MAGENTA_T"10- Salir\n\n");
        
        printf (AMARILLO_T"Elija la operacion a realizar: ");
        scanf("%d",&opcion);

        switch(opcion)
        {   case 1:
            printf(AZUL_T"Ingrese un valor: ");
             scanf("%d", &A);
              system("cls");
                break;
            case 2:
            printf(AZUL_T"Ingrese un valor: ");
             scanf("%d", &B);
              system("cls");
                break;
            case 3:
            system("cls");
             suma (A, B);
               printf("\n\n");
                break;
            case 4:
            system("cls");
             resta (A, B);
               printf("\n\n");
                break;
            case 5:
            system("cls");
             division (A, B);
               printf("\n\n");
                break;
            case 6:
            system("cls");
             multiplicacion (A, B);
               printf("\n\n");
                break;
            case 7:
            system("cls");
             factorialA (A);
               printf("\n\n");
                break;
            case 8:
            system("cls");
             factorialB (B);
               printf("\n\n");
                break;
            case 9:
            system("cls");
             suma (A, B);
               printf("\n\n");
             resta (A, B);
               printf("\n\n");
             division (A, B);
               printf("\n\n");
             multiplicacion (A, B);
               printf("\n\n");
             factorialA (A);
               printf("\n\n");
             factorialB (B);
               printf("\n\n");
                break;
            case 10:
             seguir= 'n';
                break;
            default:
                system("cls");
                 printf (ROJO_T"----------Opcion Invalida----------");
                  printf("\n\n");
        }
    }
    return 0;
}