#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void main()
{
    /*---varaibles---*/

    char *lista[5];
    char *buff;
    buff = malloc(100 * sizeof(char));

    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese el nombre: ");
        gets(buff);

        lista[i] = malloc((strlen(buff) + 1) * sizeof(char));
        strcpy(lista[i], buff);
    }

    for (int i = 0; i < 5; i++)
    {
        puts(lista[i]);
    }

    free(buff);

}
