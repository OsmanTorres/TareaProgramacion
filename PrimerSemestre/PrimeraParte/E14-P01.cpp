/*
Una empresa manufacturera de juguetes que cuenta con varias sucursales, desea determinar el mejor punto de ubicación 
para sus distribuidoras, para lograr tal efecto su programa debe solicitar los datos de las tiendas que se encuentran en una zona,
el número de tiendas por zona es variable desde dos tiendas hasta quince como máximo, los datos que se proporcionarán por cada tienda son: 
  a.	Nombre, la cual se identifica con una letra del abecedario
  b.	Coordenada en X valor flotante entre 1 y 300 (valide)
  c.	Coordenada en Y valor flotante entre 1 y 300 (valide)
  d.	Demanda de productos valor entero entre 1 y 1000 (valide)
Use un arreglo por cada dato.
Para indicar que se ha terminado la captura de tiendas el usuario usará una “x” para indicar que ha terminado de capturar.
Al final quedará algo como lo siguiente en cuatro arreglos diferentes:
Tienda	Coord X	Coord X	Demanda
A	97.5	30.1	150
B	82.3	28.7	120
C	88.4	31.2	100
D	93.4	25.4	150
E	90.2	28.3	180
F	91.7	30.4	190
G	88.9	28.7	170
Posteriormente se deben ordenar TODOS los datos de menor a mayor con respecto a la coordenada en X, 
es decir, la tabla quedará de la siguiente forma:
Tienda	Coord X	Coord X	Demanda
B	82.3	28.7	120
C	88.4	31.2	100
G	88.9	28.7	170
E	90.2	28.3	180
F	91.7	30.4	190
D	93.4	25.4	150
A	97.5	30.1	150
Una vez que se ha ordenado la tabla su programa debe obtener el total de la demanda, es decir, la suma de todas las demandas, 
en este caso: 1060, posteriormente obtendrá lo que se conoce como semisuma, el total de la demanda entre 2, en este caso: 530.
De acuerdo al orden su programa deberá obtener el acumulado de las demandas, es decir para la tienda B el acumulado es 120,
para la tienda C el acumulado es (120+100) 220, para la tienda G el acumulado es (120+100+170) 390, 
para la tienda E el acumulado es (120+100+170+180) 570; en este momento el acumulado ya es mayor que la semisuma (530), 
por la tanto la X óptima es la del renglón anterior, en este caso la tienda G por XO=88.9.
Posteriormente deberá hacer lo mismo para obtener la Y óptima.
Su programa debe dar como salida:
-	La tabla como se capturó en origen
-	La tabla ordenada con respecto a X y la XO
-	La tabla ordenada con respecto a Y y la YO
*/
