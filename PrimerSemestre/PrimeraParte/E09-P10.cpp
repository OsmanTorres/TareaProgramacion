/*
Elabore un programa que lea un valor entero “X” el cual debe estar entre 1 y 10 VALIDE DICHA CONDICION.
Cuando el valor “X” es dado correctamente su programa deberá mostrar el factorial del valor dado.
*/

#include <iostream>
#include <string>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main() {


	int numUno, resultado;
	int limMin = 1;
	int limMax = 10;
	printf("\nIntroduzca el primer numero entero : "); scanf("%d", &numUno);
	while (numUno >= limMax || numUno <= limMin) {
		printf("\nError. El numero no esta dentro del rango indicado.");
		printf("\nIntroduzca el primer numero entero : "); scanf("%d", &numUno);
	}
	
	int contador = (numUno - 1);
	
	while (contador > 1) {
		resultado += (numUno*contador);
		contador -= 1;
		numUno -= 1;
	}
	
	printf("\nFactorial : %d", resultado);
	
	_getche();
	return 0;
}
