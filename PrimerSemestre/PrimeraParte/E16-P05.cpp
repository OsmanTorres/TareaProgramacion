/*
Para mayor seguridad en los accesos o en los contenidos de algunos archivos se usa la encripción 
para evitar que se vea la información real. 
Una encripción cambia el valor de una letra por otra de acuerdo a un código preestablecido, 
por ejemplo si nosotros usamos un código “Shift 1” sabemos que debemos recorrer las letras una posición en el abecedario 
para codificar o decodificar un valor. Suponga que el usuario introduce la palabra “gato”. Observe el código “Shift 1”
  Abecedarios normal	: a b c d e f g h i j k l m n o p q r s t u v w x y z
  Abecedario shift 1	: z a b c d e f g h i j k l m n o p q r s t u v w x y
Por lo tanto una “g” en al abecedario normal equivale a una “f” en shift 1, una “a” equivale a una “z”, 
una “t” equivale a una “s” y una “o” equivale a una “”n”, esto quiere decir que:
En abecedario normal: “gato” equivale a “fzsn” en shift 1.
En abecedario normal: “perro” equivale a “odqqn”” en shift 1.
Una vez entendido lo anterior elabore un programa que muestre el siguiente menú:
  a)	De normal a shift 1
  b)	De shift1 a normal
  c)	Terminar
Opción “a”: Deberá leer una palabra entre 5 y 25 caracteres en abecedario normal y desplegar el equivalente en shift .
Opción “b”: Deberá leer una palabra entre 5 y 25 caracteres en shift 1y desplegar el equivalente en abecedario normal.
Opción “c”: Deberá terminar el programa.
*/
