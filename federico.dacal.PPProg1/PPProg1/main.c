/*
1.Dada una estructura ePais cuyos campos son id(int), nombre(20 caracteres), infectados(int), recuperados(int) y muertos(int). Desarrollar una función llamada actualizarRecuperados que reciba el país y los recuperados del dia y que acumule estos a los que ya tiene el país. La función no devuelve nada.
*/


/*
2.Crear una función que se llame invertirCadena que reciba una cadena de caracteres como parámetro y su responsabilidad es invertir los caracteres de la misma. Ejemplo si le pasamos UTN-FRA la deja como ARF-NTU
*/

/*
3.Crear una función que se llame ordenarCaracteres que reciba una cadena de caracteres como parámetro y su responsabilidad es ordenarlos caracteres de manera ascendente dentro de la cadena. Ejemplo si le pasamos "algoritmo" la deja como "agilmoort"
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
    int id;
    char nombre[20];
    int infectados;
    int recuperados;
    int muertos;
}ePais;

void actualizarRecuperados(int id, int cantRecuperados);

void invertirCaracteres(char cadena[]);

void ordenarCaracteres(char cadena[]);

int main()
{
    char string[20]="UTN-FRA";
    char string2[20]="algoritmo";

    ePais unPais;

    unPais.id=1;
    unPais.recuperados=100; // Recuperados del dia

    actualizarRecuperados(unPais.id, unPais.recuperados);

    ordenarCaracteres(string2);

    return 0;
}

void actualizarRecuperados(int id, int cantRecuperados)
{

    int acumuladoruladorRecup=200; // Recuperados acumulados

    acumuladoruladorRecup+=cantRecuperados;
    printf("La cantidad de recuperados es %d: \n\n",acumuladoruladorRecup); // Recuperados totales

}

void invertirCaracteres(char cadena[])
{
    //
}

void ordenarCaracteres(char cadena[])
{
    char aux;
    int cadenaLen;

    cadenaLen=strlen(cadena);

    for(int i=0;i<cadenaLen-1;i++) {
      for(int j=i+1;j<cadenaLen;j++) {
         if (cadena[i]>cadena[j]) {
            aux=cadena[i];
            cadena[i]=cadena[j];
            cadena[j]=aux;
         }
      }
    }
    printf("%s \n\n",cadena);
}
