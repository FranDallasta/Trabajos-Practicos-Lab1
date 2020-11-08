/*
 * empleados.h
 *
 *  Created on: 26 oct. 2020
 *      Author: Franco
 */

#ifndef EMPLEADOS_H_
#define EMPLEADOS_H_

typedef struct{
	    int id;
		char nombre[51];
		char apellido[51];
		float salario;
		int sector;
		int isEmpty;
}empleados;

#endif /* EMPLEADOS_H_ */
