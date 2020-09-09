/*
 ============================================================================
 Name        : TP1,Calculadora.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "TP1,Calculadora.h"

float sumar (float A, float b);
float restar (float A, float B);
float dividir (float A, float B);
float multilicar (float A, float B);
int factorial (int A);

int main(void) {
	//Declaracion de variables
	float A;
	float B;
	float suma;
	float resta;
	float division;
	float producto;
	int factor;

	//Ingreso de numeros
	printf("Ingrese un numero A= ");
	scanf("%f", &A);
	printf("\n Ingrese un numero B= ");
	scanf("%f", &B);
	//Llamado de funciones
	suma = sumar(A,B);
	printf("\n La suma da %.2f", suma);
	resta= restar (A,B);
	printf("\n La resta da %.2f", resta);
	division = dividir(A,B);
	if(B!=0)
	{
		printf("\n La division es %.2f ", division);
	}
	producto = multilicar(A,B);
	printf("\n El producto da %.2f", producto);
	factor = factorial(A);
	printf("\n El factorial da %d \n", factor);
	system("pause");
	return EXIT_SUCCESS;
}


