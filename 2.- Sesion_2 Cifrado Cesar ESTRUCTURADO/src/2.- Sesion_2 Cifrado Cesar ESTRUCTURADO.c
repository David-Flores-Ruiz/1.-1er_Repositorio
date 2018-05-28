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

#define MAX 20

void encriptadoCesar(int desplaz, char *cadOriginal,  char *cadCifrada); //Prototipo

void imprimir(char cadCifrada[MAX]); //Prototipo

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	char cadenaOriginal[MAX];
	char cadenaCifrada[MAX];
	int desplazamiento;

	printf("Introduce la cadena de caracteres:\n");
	gets(cadenaOriginal);

	printf("Desplazamiento: \n");
	scanf("%d", &(desplazamiento));

	encriptadoCesar(desplazamiento, cadenaOriginal, cadenaCifrada);

	imprimir(cadenaCifrada);

	return EXIT_SUCCESS;
}

void encriptadoCesar(int desplaz, char *cadOriginal, char *cadCifrada) {
	int longit = strlen(cadOriginal);
	for (int i = 0; i <= longit; i++) {	//Hace desplazamiento con 3 excepciones
		if (cadOriginal[i] == ' ' || cadOriginal[i] == ',' || cadOriginal[i] == 0)//Si es ESPACIO, COMA o CARACTER NULO entonces los deja igual
			cadCifrada[i] = cadOriginal[i];
		else
			cadCifrada[i] = cadOriginal[i] + desplaz;


	}
	int resta;

	for (int i = 0; i < longit; i++) {
		if (65 <= cadOriginal[i] && cadOriginal[i] <= 90) {	//MAYUSCULAS
			if (cadCifrada[i] >= 91) {
				resta = cadCifrada[i] - 90;
				cadCifrada[i] = 64 + resta;
			}
		}
		// Así no pongo el else (VACIO)

		else 								//MINUSCULAS
			if(97 <= cadOriginal[i] && cadOriginal[i] <= 122){
				if (cadCifrada[i] >= 123) {
					resta = cadCifrada[i] - 122;
					cadCifrada[i] = 96 + resta;
				}
			}
	}
}

void imprimir(char cadCifrada[MAX]) {

	printf("\nla longitud de la cadena es: %d", strlen(cadCifrada));
	printf("\n\nLa cadena con Cifrado Cesar es: %s", cadCifrada);
}
