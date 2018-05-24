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

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
		char cadenaOriginal[10];
		char cadenaCifrada[10];
		int dezplazamiento;

		printf("Introduce la cadena de caracteres:\n");
			//fflush(stdout);
		gets(cadenaOriginal);

		printf("Dezplazamiento: \n");
			//fflush(stdout);
		scanf("%d", &dezplazamiento);

		printf("\nLa cadena original es: %s ", cadenaOriginal);	//Linea 29 - 31 para asegurar que se guardo bien
		int longitud = strlen(cadenaOriginal);
		printf("\nla longitud de la cadena es: %d",longitud);


		for(int i=0; i<longitud; i++)
		{
//			if (cadenaOriginal == ' ' || cadenaOriginal == ',')
//				cadenaCifrada[i] = cadenaOriginal[i];
//			else
				cadenaCifrada[i] = cadenaOriginal[i] + dezplazamiento;

			//printf("Cadena cifrada: %c", cadenaCifrada[i] );
			//printf("Cadena original: %c", cadenaOriginal[i]);
		}


		//int resta;
//De la 47 a 63 me perdí!!!! Puedo dejar un if sin un else
/*		for(int i=0; i<longitud; i++)
		{
			if (65<=cadenaOriginal[i] && cadenaOriginal[i]<=90)	//MAYUSCULAS
				if(cadenaCifrada[i]>=91)
				{
					resta = cadenaCifrada[i] - 90;
					cadenaCifrada[i] = 64 + resta;
				}
				else//VACIO


			else 	//MINUSCULAS
				if(cadenaCifrada[i]>=123)
				{
					resta = cadenaCifrada[i] - 122;
					cadenaCifrada[i] = 96 + resta
				}
		}
*/

		printf("\n\nLa cadena con Cifrado Cesar es: %s", cadenaCifrada);


	return EXIT_SUCCESS;
}
