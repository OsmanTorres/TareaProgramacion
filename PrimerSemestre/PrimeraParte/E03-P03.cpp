/*
Leer y sumar dos valores. Elabore un programa que lea dos valores enteros proporcionados por el usuario.
Posteriormente sume dichos valores y despliegue el resultado de la suma MOSTRANDO los dos valores capturados y la suma de los mismos.
*/

#include <iostream>
#include <string>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main() {

	int x; 
	double y;
	printf("Introdusca un Valor Entero:  "); scanf("%d", &amp;x);
	printf("Introdusca un Valor Flotante:  "); scanf("%f", &amp;y);
	printf("Valor Entero Introducido: %d", x);
	printf("Valor Flotante Introducido: %f", y);
	
	_getche();
	return 0;
}
