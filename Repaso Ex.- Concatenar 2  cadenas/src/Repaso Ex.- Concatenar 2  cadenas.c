/*
 ============================================================================
 Name        : -.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void concatenar ( char c1[10], char c2[10], char* cF[20] );

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	char cad1[10];
	char cad2[10];
	char cadFinal[20];

	gets (cad1);
	gets (cad2);

	//puts(cad1);
	//puts(cad2);

	concatenar (cad1, cad2, cadFinal);
	//setbuf(stdout, 0);	//NO funcionó
	puts(cadFinal);

	return EXIT_SUCCESS;
}

void concatenar ( char c1[10], char c2[10], char* cF[20] ){
	int i, j;
	char *apunCF = cF;

	for(i=0; i != '\0'; i++){
		*(apunCF + i) = c1[i];
	}

	for(j=i; j != '\0'; j++){
		*(apunCF + j) = c2[j];
	}

	*(apunCF + j) = '\0';
}

