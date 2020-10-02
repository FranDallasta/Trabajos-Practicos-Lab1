#include <stdlib.h>
#include "TP1,Calculadora.h"


int main(void) {
	//Declaracion de variables
	float A;
	float B;
	float suma;
	float resta;
	float division;
	float producto;
	int factorA;
	int factorB;
	int opcion;
	int flagVacio = 0;

	do{
		do{
			printf("\n Ingrese una opcion: \n");
			printf("\n 1) Ingreso de operandos");
			printf("\n 2) Suma");
			printf("\n 3) Resta");
			printf("\n 4) Division");
			printf("\n 5) Producto");
			printf("\n 6) Factorial");
			printf("\n 7) SALIR");
			printf("\n\n Ingrese la opcion deseada: ");
			scanf("%d", &opcion);
			system("cls");
			if(opcion != 1 && flagVacio == 0){
				printf("\nIngrese 2 numeros primero !\n");
				system("pause");
				system("cls");
			}
		}while(opcion != 1 && flagVacio == 0);

	switch(opcion){
		case 1:
		{
			printf("Ingrese un numero A= "); //Ingreso de numeros
			scanf("%f", &A);
			printf("\n Ingrese un numero B= ");
			scanf("%f", &B);
			flagVacio =1;
			break;
		}
		case 2:		//Funciones
		{
			suma = sumar(A,B);
			printf("\nLa suma da %.2f\n", suma);
			system("pause");
			system("cls");
			break;
		}
		case 3:
		{
			resta= restar (A,B);
			printf("\nLa resta da %.2f\n", resta);
			system("pause");
			system("cls");
			break;
		}
		case 4:
		{
			division = dividir(A,B);
			if(B!=0)
			{
				printf("\nLa division es %.2f\n ", division);
			}
			system("pause");
			system("cls");
			break;
		}
		case 5:
		{
			producto = multilicar(A,B);
			printf("\nEl producto da %.2f\n", producto);
			system("pause");
			system("cls");
			break;
		}
		case 6:
		{
			factorA = factorial(A);
			printf("\nEl factorial (A) da %d ", factorA);
			factorB = factorial(B);
			printf("\nEl factorial (B) da %d \n", factorB);
			system("pause");
			system("cls");
			break;
		}
		case 7:
		{
			printf("\nSaliendo del programa...\n"); //Salida del programa
			system("pause");
			return EXIT_SUCCESS;
		}
	}
	}while(opcion != 7);
}


