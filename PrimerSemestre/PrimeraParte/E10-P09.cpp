/*
Elabore un programa que despliegue el siguiente menú:
	1.-Dar el valor de N
	2.-Vertical
	3. Horizontal
	4.-Diagonal 1 (\)
	5.-Diagonal 2 (/)
	6.-Cruz (+)
	7.-Tache (X)
	8.-Escalera 1
	9.-Escalrea 2
	10.-Animación
	11.-Terminar
Solicitar opcion deseada y validar entre 1 y 11. Todas las acciones deben hacerse lentamente y centradas.
1: Solicitar valor N y validar entre 3 y 21, debe ser impar. Una vez validado almacenar el valor y regresar al menu.
2: Pintar lenta y centradamente una linea vertical de N asteriscos usando el valor N del numero uno, por defecto 3.
3: Pintar lenta y centradamente una linea horizontal de N asteriscos usando el valor N del numero uno, por defecto 3.
4: Pintar lenta y centradamente una linea diagonal (\) de N asteriscos iniciando por esquina superior derecha, por defecto 3.
6: Pintar lenta y centradamente una linea horizontal (/) de N asteriscos iniciando por esquina superior derecha, por defecto 3.


6.-Cruz (+)
Esta opción debe pintar LENTAMENTE y CENTRADA en la pantalla una cruz, es decir una línea vertical y una línea horizontal. AMBAS LINEAS DEBEN PINTARSE AL MISMO TIEMPO. Dicha cruz debe ser de NXN asteriscos, el valor N es el que se capturó en la opción “1”.
7.-Tache (X)
Esta opción debe pintar LENTAMENTE y CENTRADO en la pantalla una tache, es decir dos líneas diagonales inversas. AMBAS LINEAS DEBEN PINTARSE AL MISMO TIEMPO. Dicho tache debe ser de NXN asteriscos, el valor N es el que se capturó en la opción “1”.
8.-Escalera 1
Esta opción debe pintar LENTAMENTE una escalera alineada a la izquierda, donde el primer renglón debe tener un asterisco, el segundo renglón dos asteriscos y así hasta llegar al valor N. El valor N es el que se capturó en la opción “1”.  Suponga que N es igual a 4 y observe la figura para comprender mejor:
*
**
***
****
9.-Escalera 2
Esta opción debe pintar LENTAMENTE una escalera alineada a la derecha, donde el primer renglón debe tener un asterisco, el segundo renglón dos asteriscos y así hasta llegar al valor N. El valor N es el que se capturó en la opción “1”.  Suponga que N es igual a 4 y observe la figura para comprender mejor:
*
**
***
****
10.-Animación
Esta opción debe pintar LENTAMENTE un asterisco que debe iniciar en la posición (1,12) terminar en la posición (n+1,12), el “movimiento” se debe ver como una animación para que parezca que el asterisco se mueve.

Después de que se ejecute cualquiera de las opciones seleccionadas se debe hace una pausa (getche()) y regresar al menú, esta acción sólo terminará cuando el usuario seleccione la opción “11.-Terminar”.
*/
