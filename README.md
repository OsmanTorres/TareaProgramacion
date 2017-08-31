# Tarea de Programacion

## Primer Semestre (Introduccion a C++)

### Printf (E01 y E02)
```cpp
//Caracteres Especiales: a(160), e(130), i(161), o(162), u(163), ñ(164), Ñ(165) 
//Imprimir
printf("Hello World!");
//Imprimir nueva linea
printf("\n");
//Imprimir una variable
int x = 10;
printf("%d",x);
```
### Scanf (E03 y E04)
```cpp
//Operadores Aritmeticos: (+), (*), (/), (-)
//Obtener una variable
int x;
scanf("%d",&x);
```
### If (E05, E06, E07)
```cpp
//Comparadores: (==), (!=), (>), (<), (<=), (>=)
//Operadores Logicos: (&&), (||)
//Ejecutar un codigo, una sola vez, si una condicion se cumple.
int x = 10;
if (x == 10){
  //Ejecutar codigo si condicion es verdadera
} else if (x == 5) {
  //Ejecutar codigo si condicion es verdadera
} else {
  //Ejecutar codigo si ninguna condicion es verdadera.
}
```
### While (E08 y E09)
```cpp
//Incrementar y Decrementar por Uno: (++), (--), 
//Ejecutar un codigo, multiples veces, mientras la condicion se cumpla.
int x = 0;
while (x < 10) {
  //Este codigo se repetira mientras la condicion se cumpla, es decir 10 veces.
  x++;
}
```
### For (E10)
```cpp
//Ejecutar un codigo, multiples veces, mientras la condicion se cumpla.
for (int x = 10; x < 10; x++) {
  //Equivalente al While anterior, este codigo se repetira 10 veces.
}
```
### Funciones (E11 y E12)
```cpp
//Almacenar un codigo dentro de otro mas pequeño y facil de usar.
//Crear la funcion Hola, su codigo imprime el mensaje "Hola Mundo!"
void decirHola(){
  printf("Hola Mundo!");
}
//Ejecutar la funcion
decirHola();
```
### Arrays (E13, E14 y E15)
```cpp
//Almacenar una lista de valores.
//Crea una lista con tres espacios para guardar tres valores
int Lista[2];
//Guarda los valores 1, 2, y 3 en los espacios de la lista
Lista[0] = 1;
Lista[1] = 2;
Lista[2] = 3;
```
### Strings (E16)
```cpp
//Almacenar y manipular texto
//Crea un texto y guardalo en un string
string saludo = "Hola Mundo!";
//Imprime el texto
printf("%s", saludo.c_str());
```
### Matrices (E17)
```cpp
//Almacenar una lista de listas.
//Crea una lista con dos espacios para guardar dos listas de tres valores
int Matriz[1][2];
//Guarda los valores 1, 2, y 3 en la primera lista
//Guarda los valores 4, 5, y 6 en la segunda lista
Matriz[0][0] = 1; Matriz[0][1] = 2; Matriz[0][2] = 3;
Matriz[1][0] = 4; Matriz[1][1] = 5; Matriz[1][2] = 6;
```
