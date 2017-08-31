/*
La empresa de concretos premezclados “Angustia SA” maneja dos tipos de resistencia en sus mezclas:
  1.	Resistencia 200, que cuesta 1,200 pesos el metro cúbico
  2.	Resistencia 250, que cuesta 1,450 pesos el metro cúbico
Dicha empresa le ha solicitado un sistema en “C” que le permita controlar sus ventas del día; para tal efecto su sistema debe:
  a)	Solicitar la cantidad de metros cúbicos a consumir
  b)	Solicitar el tipo resistencia de la mezcla, en este caso VALIDAR que sólo haya opción 1 ó 2, 
  Se lo contrario debe marcar un error y no contabilizar nada. 
  EN caso de que la opción sea correcta se deben acumular los metros cuadrados de acuerdo a la mezcla seleccionada.
  c)	Con estos datos debe ir contabilizando cuantos clientes hay en el día diferenciando cuantos fueron de cada mezcla, 
  cuantos metros cúbicos se han vendido de cada mezcla y el costo acumulado correspondiente.
  d)	Preguntar si se desea capturar un nuevo consumo y tipo de resistencia, en caso afirmativo se debe regresar al punto “a”, 
  en caso contrario terminar el ciclo.
  e)	Los pasos del “a” al “d” deben repetirse y acumularse hasta que el usuario diga que YA NO desea capturar un nuevo consumo 
  (inciso “d”).
  f)	Una vez terminado el ciclo de los pasos “a” al “d” sus sistema debe mostrar la siguiente tabla
	TIPO	RESISTENCIA	CLIENTES    CONSUMO EN M3    CONSUMO EN $$$
	--------------------------------------------------------------
	1      	200	       	3	         	50	         		30000
	2	      250		      5		         10	        		14000
	--------------------------------------------------------------
	TOTAL DE LAS VENTAS DEL DIA  			        	44000
	--------------------------------------------------------------
Su programa debe tener las siguientes funciones:
  1)	Función que despliega los mensaje de error
  2)	Función “Captura” es la función encargada de repetir los pasos del “a” al “d”.
  3)	Función “Muestra” una vez que el usuario indica que ya no quiere capturar otro cliente 
esta función será la encargada de desplegar la tabla del iniciso “f”.
*/
