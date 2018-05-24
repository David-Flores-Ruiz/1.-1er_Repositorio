/*
 ============================================================================
 Name        : -Sesion_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h> //Añadimos esta libreria

#define MAX 10

void leerCaracteres ( char*cadOriginal, int *dezplaz );//Prototipo

char encriptadoCesar (int longit, int dezplaz, char *cadOriginal, char *cadCifrada);//Prtotipo

void imprimir (int longit, char cadCifrada[MAX]);//Prototipo

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
		char cadenaOriginal[MAX];
		char cadenaCifrada[MAX];
		int dezplazamiento;

		leerCaracteres (cadenaOriginal, &dezplazamiento);//llamada

		int longitud = strlen(cadenaOriginal);

		cadenaCifrada = encriptadoCesar (longitud, dezplazamiento, cadenaOriginal, cadenaCifrada);

		imprimir (longitud, cadenaCifrada[MAX]);

	return EXIT_SUCCESS;
}


void leerCaracteres ( char*cadOriginal, int *dezplaz )//Cuerpo de funcion
{
	printf("Introduce la cadena de caracteres:\n");
	gets(*cadOriginal);

	printf("Dezplazamiento: \n");
	scanf("%d", &(*dezplaz));

	return;
}


char encriptadoCesar (int longit, int dezplaz, char *cadOriginal, char *cadCifrada)
{
	for(int i=0; i<longit; i++)
			{
			if (cadOriginal[i] == ' ' || cadOriginal[i] == ',')
				cadCifrada[i] = cadOriginal[i];
				else
					cadCifrada[i] = cadOriginal[i] + dezplaz;

	int resta;

			for(int i=0; i<longit; i++)
			{
				if (65<=cadOriginal[i] && cadOriginal[i]<=90){	//MAYUSCULAS
					if(cadCifrada[i]>=91)
					{
						resta = cadCifrada[i] - 90;
						cadCifrada[i] = 64 + resta;
					}
				}
					// Así no pongo el else (VACIO)

				else 	//MINUSCULAS
					if(cadCifrada[i]>=123)
					{
						resta = cadCifrada[i] - 122;
						cadCifrada[i] = 96 + resta;
					}
			}

	return cadCifrada[MAX];
}


void imprimir (int longit, char cadCifrada[MAX])
{

	printf("\nla longitud de la cadena es: %d",longit);
	printf("\n\nLa cadena con Cifrado Cesar es: %s", cadCifrada);
	return;
}
