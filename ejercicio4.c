#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//char* TiposProductos[] = {"Galletas","Snack","Cigarrillos","Caramelos","Bebidas"};


struct
{
    int ProductoID;       // Numerado en ciclo iterativo
    int Cantidad;         // entre 1 y 10
    char* TipoProducto;   // Algún valor del arreglo TiposProductos
    float PrecioUnitario; // entre 10 - 100
}typedef Producto;


struct 
{
    int ClienteID;               // Numerado en el ciclo iterativo
    char* NombreCliente;         // Ingresado por usuario
    int CantidadProductosAPedir; // (aleatorio entre 1 y 5)
    Producto* Productos          // El tamaño de este arreglo depende de la variable
    // “CantidadProductosAPedir”
}typedef Cliente;

void cargarClientes(Cliente* todosClientes,int cantClientes,char* TiposProductos[]);

void main()
{
    int cantClientes=0;
    
    char* TiposProductos[] = {"Galletas","Snack","Cigarrillos","Caramelos","Bebidas"};

    puts("ingrese la cantidad de clientes: ");
    fflush(stdin);
    scanf("%d",&cantClientes);


    //--creo el arreglo dinamico--//
    Cliente* todosClientes=malloc(cantClientes*sizeof(Cliente));


}

void cargarClientes(Cliente* todosClientes,int cantClientes,char* TiposProductos[])
{
    for (int i = 0; i < cantClientes; i++)
    {
        char nomcliente[20];

        todosClientes->ClienteID=rand()%20;
        todosClientes->CantidadProductosAPedir=rand()%5+1;
        printf("\ningrese el nombre del cliente {%d} :",i);
        fflush(stdin);
        gets(nomcliente);
        int n=strlen(nomcliente);
        todosClientes->NombreCliente=malloc(n*sizeof(char));
        strcpy(todosClientes->NombreCliente,nomcliente);

        //asignamos memoria para cada producto
        for (int j = 0; j < todosClientes->CantidadProductosAPedir; j++)
        {
            todosClientes->Productos->ProductoID=j;
            todosClientes->Productos->Cantidad=rand()%100;
            todosClientes->Productos->PrecioUnitario=rand()%1000+100;
            todosClientes->Productos->TipoProducto=malloc(15*sizeof(char));
            todosClientes->Productos->TipoProducto;
        }
        

    }
    
    
    
}