/*
 ============================================================================
 Name        : menu.c
 Author      : David Flores Ruiz
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
setvbuf(stdout, NULL, _IONBF, 0);
	char opcion;


	    do{
	        printf("\na. Registrar nuevo alumno");
	        printf("\nb. Imprimir datos");
	        printf("\nc. Eliminar alumno");
	        printf("\nd. Buscar alumno\n \t -Por expediente \n \t -Por edad");
	        printf("\ne. Salir");

	        printf("\nEscoja su opción (a-e) la letra válida:");
	        scanf("%c", &opcion);

	        switch(opcion)
	           {
	               case 'a':

	                       break;

	               case'b':

	                       break;

	               case'c':

	                       break;

	               default:
	                       printf( "\n   Letra NO válida, escoja de nuevo");
	           }

	    }while(opcion != 'e');

	return EXIT_SUCCESS;
}
