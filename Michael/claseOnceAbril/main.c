#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 4

void getString (char mensaje[], char input[]);
int getStringLetras (char mensaje[], char input[]);
int esSoloLetras (char palabra[]);

void mostrarAlumnos(char [][50], char [][50], int [], int[], int tam);
void ordenarAlumnos(char [][50], char [][50], int [], int[], int tam);



int main()
{
    char nombre[TAM][50]= {"Michell", "Oscar", "Daniel", "Nubia" };
    char apellido[TAM][50]= {"Quintero", "Muñoz", "Ladino", "Hernandez" };
    int edad [TAM]= {22,24, 47, 35};
    //char mail[][30];
    int nota [TAM]= {6, 8, 10, 2};
    int i;

    ordenarAlumnos(nombre,apellido,edad,nota,TAM);
    mostrarAlumnos(nombre,apellido,edad,nota,TAM);


    /* char unNombre[50];
     getString("\n\n Ingrese el nombre: ",&unNombre);

     strcpy(nombre[0], unNombre);

     //getString("\n\nIngrese el nombre: ",nombre[i]);

     for (i=0; i<TAM; i++)
     {
         getString("\n\nIngrese Nombre: ",nombre[i]);
         getString("\n\n Ingrese Apellido: ",apellido[i]);


     }
     for (i=0; i<TAM; i++)
     {
          printf("\nEl nombre es: %s apellido:  %s  edad: %d  nota: %d", nombre[i],apellido[i],edad[i],nota[i]);

     }

     return 0;

     }*/
    void getString (char mensaje[], char input[])
    {

        printf("%s",mensaje);
        scanf("%s", input);

    }
    int getStringLetras (char mensaje[], char input[])
    {
        char aux[50];
        getString(mensaje,aux);

    }
    int esSoloLetras (char palabra[])
    {
        int i;
        for (i=0; palabra[i]!='\0'; i++)
        {
            if(palabra[i]!=' ')
            {
                if(palabra[i]<'a'&& palabra[i]>'z')
                {
                    if (palabra[i]<'A' && palabra[i]>'z')
                        return 0;
                }
            }
        }
        return 1;
    }
    void ordenarAlumnos(char nombre[][50], char apellido[][50], int edad[], int nota[], int tam)
    {
        char auxCadena;
        int i,j,auxEntero;
        for(i=0; i<TAM-1; i++)
        {
            for(j=i+1; j<TAM; j++)
            {
                if(strcmp(nombre[i],nombre[j])>1)
                {
                    strcpy(auxCadena,nombre[i]);
                    strcpy(nombre[i],nombre[j]);
                    strcpy(nombre[j],auxCadena);

                    strcpy(auxCadena,apellido[i]);
                    strcpy(apellido[i],apellido[j]);
                    strcpy(apellido[j],auxCadena);

                    auxEntero=edad[i];
                    edad[i]=edad[j];
                    edad[j]=auxEntero;
                }
            }
        }
    }
    void mostrarAlumnos(char nombre[][50], char apellido[][50], int edad[], int nota[], int tam)
    {
        int i;
        //printf("Nombre\tApellido\tEdad\tNota\n");
        printf("%10s\t%10s\t%s\t%s\n","Nombre","Apellido","Edad","Nota");
        for (i=0; i<TAM; i++)
        {
            if (nombre[i] != -1)
            {
                printf("%10s\t%10s\t%d\t%d\n", nombre[i],apellido[i],edad[i],nota[i]);
            }
        }
}    }
