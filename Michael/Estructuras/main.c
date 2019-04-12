#include <stdio.h>
#include <stdlib.h>
typedef struct
    {
        char nombre[50];
        char apellido[50];
        int edad;
        int nota;
    }eAlumno;
int main()
{
   eAlumno unAlumno ={"Pedro","Gomez",45,7};
   printf("%s",unAlumno);

    return 0;
}
