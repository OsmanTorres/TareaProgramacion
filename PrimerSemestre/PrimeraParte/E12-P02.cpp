/*
Escriba un programa que despliegue el siguiente menú:
  a.	Capital Inicial
  b.	Abonar a Capital
  c.	Retirar Capital
  d.	Invertir a un plazo
  e.	Terminar
El menú debe estar ciclado hasta que el usuario seleccione la opción de terminar.
Y debe estar en  una función que devuelve la opción elegida.
Para el funcionamiento de este programa sólo puede usar dos variable globales, las demás variable deben ser locales.
1)	La opción  capital Inicial debe solicitar al usuario un monto de dinero en pesos 
el cual servirá de base para todos los movimientos futuros.
2)	La opción de abonar a capital debe pedir al usuario una cantidad de dinero la cual deberá ser agregada al capital inicial,
cada que esta opción sea seleccionada, el monto en dinero que se solicite deberá sumarse al capital ya existente.
3)	La opción de retirar de capital debe pedir al usuario una cantidad de dinero la cual deberá ser restada al capital inicial, 
cada que esta opción sea seleccionada, el monto en dinero que se solicite deberá restarse al capital ya existente.
4)	Invertir implica pedir al usuario el número de meses a invertir, la tasa de interés anual y la cantidad de dinero que se invertirá.
El cálculo del nuevo capital se hará en una función. Dicho cálculo se hace con la siguiente fórmula:
Nuevo Capital=((Interés/12)*(monto a invertir))*número de meses
El resultado de esta fórmula debe acumularse al capital ya existente puesto que se trata de una ganancia.
*/
