
#include "TP1,Calculadora.h"


float sumar (float A, float B)
{
	float suma;
	suma = A + B;
	return suma;
}

float restar (float A, float B)
{
	float resta;
	resta = A- B;
	return resta;
}

float dividir (float A, float B)
{
	float division;
	if(B == 0)
		{
			printf("\n No puede realizarse la division.");
			return 0;
		}
		else
		{
			division = A/B;
			return division;
		}
}

float multilicar (float A, float B)
{
	float producto;
	producto = A*B;
	return producto;
}

int factorial (int A)
{
	int factorial = 1;
	int i;
	for(i =1;A>=i;i++)
	{
		factorial = factorial *i;
	}
	return factorial;
}



