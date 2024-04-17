#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*-------FUNCIONES Y PROCEDIMIENTOS-------*/

void cargarMatriz(int matriz[5][12]);
void mostrarMatriz(int matriz[5][12]);
void promedio(int matriz[5][12]);
void maximosYminimos(int matriz[5][12]);


/*--------------------------------------------------------------------------------*/


void main()
{
    /*--varaibeles*/
    int matriz[5][12];
    srand(time(NULL));
    
    cargarMatriz(matriz);

    mostrarMatriz(matriz);

    promedio(matriz);

    maximosYminimos(matriz);
}



/*---------------------------------------------------------------------------------*/
void cargarMatriz(int matriz[5][12])
{

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            matriz[i][j] = rand() % 40000 + 10000;
        }
    }
}

void mostrarMatriz(int matriz[5][12])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            printf("\n%d", matriz[i][j]);
        }
    }
}

void promedio(int matriz[5][12])
{
    float promedio;
    int suma;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            suma += matriz[i][j];
        }
        promedio = (float)(suma / 12);
        printf("\nla ganancia promedio del anio [%d] es = {%.2f}", i, promedio);
    }
}

void maximosYminimos(int matriz[5][12])
{
    int maximo = 0, minimo = 50000, anioMx = 0, mesMx = 0, aniomin = 0, mesmin = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            if (maximo < matriz[i][j])
            {
                maximo = matriz[i][j];
                anioMx = i;
                mesMx = j;
            }
            else
            {
                if (minimo > matriz[i][j])
                {
                    minimo = matriz[i][j];
                    aniomin = i;
                    mesmin = j;
                }
            }
        }
    }
    printf("\nEl anio y mes que mas se gano fue [ %d ][ %d ] con una ganancias de {$ %d }", anioMx, mesMx, maximo);
    printf("\nEl anio y mes que menos se gano fue [ %d ][ %d ] con una ganancias de {$ %d }", aniomin, mesmin, minimo);
}