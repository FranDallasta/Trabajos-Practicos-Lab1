#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"

/****************************************************
    Menu:
     1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).
     2. Cargar los datos de los empleados desde el archivo data.csv (modo binario).
     3. Alta de empleado
     4. Modificar datos de empleado
     5. Baja de empleado
     6. Listar empleados
     7. Ordenar empleados
     8. Guardar los datos de los empleados en el archivo data.csv (modo texto).
     9. Guardar los datos de los empleados en el archivo data.csv (modo binario).
    10. Salir
*****************************************************/



int main()
{
    int opcion;
    int contador = 0;

//    LinkedList* listaEmpleados = ll_newLinkedList();
    do{
    	printf("Ingrese una opcion: ");
    	printf("\n1) Cargar los datos de los empleados desde el archivo data.csv ");
    	printf("\n2) Cargar los datos de los empleados desde el archivo data.csv ");
    	printf("\n3) Alta de empleado ");
    	printf("\n4) Modificar datos de empleado ");
    	printf("\n5) Baja de empleado ");
    	printf("\n6) Listar empleados ");
    	printf("\n7) Ordenar empleados ");
    	printf("\n8) Guardar los datos de los empleados en el archivo data.csv ");
    	printf("\n9) Guardar los datos de los empleados en el archivo data.csv ");
    	printf("\n10) SALIR ");
    	printf("\nOpcion seleccionada: ");

    	scanf("%d", &opcion);
    	switch(opcion)
    			{
    			case 1:
    				system("pause");
    				break;
    			case 2:
    				system("pause");
    				break;
    			case 3:
    				system("pause");
    				break;
    			case 4:
    				system("pause");
    				break;
    			case 5:
    				system("pause");
    				break;
    			case 6:
    				system("pause");
    				break;
    			case 7:
    				system("pause");
    				break;
    			case 8:
    				system("pause");
    				break;
    			case 9:
    				system("pause");
    				break;
    			case 10:
    				printf("Saliendo del programa\n");
    				system("pause");
    				break;
    			default:
    				printf("Opcion Incorrecta\n");
    				system("pause");
    				break;
    		}
    		system("cls");
    }while(opcion!= 10);
    return 0;
}



/*    do{
        switch(option)
        {
        Hola
            case 1:
                controller_loadFromText("data.csv",listaEmpleados);
                break;
        } */
