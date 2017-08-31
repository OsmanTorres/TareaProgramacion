/*
Una institución financiera le ha pedido elaborar un simulador de inversiones, dicho simulador le servirá a la empresa para poder 
mostrar el rendimiento de una inversión a sus inversionistas de acuerdo al monto y plazo seleccionado. 
El monto de inversión puede ir desde 100,000 pesos hasta 1,000,000 pesos y los plazos de inversión pueden ser 
desde los 6 hasta los 36 meses, no más no menos. La empresa paga una tasa de interés diferente de acuerdo al plazo seleccionado,
según la siguiente tabla:
  Plazo desde 6 y hasta 11 meses, tasa anual del 6%, es decir 0.5% mensual
  Plazo desde 12 y hasta 24 meses, tasa anual del 9 %, es decir 0.75% mensual 
  A partir de 25 meses y hasta 36 meses, tasa anual del 12% anual, es decir, 1% mensual
Además la empresa ofrece a sus inversionistas pagar intereses sobre saldos acumulados, es decir, para el segundo mes 
ya se le pagarían al inversionista intereses sobre los intereses ganados en el primer mes, 
para el tercer mes se pagarían intereses sobre los intereses acumulados en el primero y segundo mes y así sucesivamente.
Para tal efecto su simulador debe:
  1)	Solicitar el monto de la inversión y debe validar que dicho monto esté entre 100,000 y 1,000,000 pesos. (Valor 15 puntos)
  2)	Solicitar el plazo de la inversión en meses, debe validar que los meses estén entre 6 y 36 meses (Valor 15 puntos)
  3)	Con los datos anteriores debe desplegar una tabla que muestre los intereses mensuales ganados iniciando en el mes 1 y terminando
  en el mes “n” seleccionado por el usuario.
  4)	En cada mes debe indicar: Saldo Inicial, Intereses Ganados, Saldo Nuevo.
  5)	La forma de calcular los datos a mostrar en la tabla es:    
  Saldo Inicial: Se refiere al saldo que tiene el inversionista antes de cargar los intereses correspondientes al mes, obviamente en el 
  mes 1, el saldo inicial es el monto de la inversión.
  Intereses: Se obtienen multiplicando el saldo inicial del mes por la tasa de interés mensual de acuerdo al plazo indicado.
  Saldo nuevo: Es la suma del saldo inicial más los intereses ganados
  6)	Para entender mejor lo anterior suponga el siguiente caso:
  
  Monto de la inversión = 200,000 pesos
  Plazo del préstamo = 12 meses, por lo tanto la tasa mensual a pagar es de 0.75%
  Su tabla tendría la siguiente apariencia:
Mes    Saldo Inicial          Intereses           Saldo Nuevo
1          200,000.00            1,500.00            201,500.00
2          201,500.00            1,511.25            203,011.25
3          203,011.25            1,522.58            204,533.83
4          204,533.83            1,534.00            206,067.83
. . . . . . . . .
(Valor por desplegar correctamente Y ALINEADOS los meses del 1 al “n” 5 puntos)
(Valor por calcular correctamente el “Saldo Inicial”  20 puntos)
(Valor por calcular correctamente los “Intereses”  15 puntos)
(Valor por calcular correctamente el “Saldo Nuevo  15 puntos)
 (Valor por desplegar la tabla completa y correcta 15 puntos)
  7)	Al finalizar coloque su actividad en la plataforma Schoology en el espacio correspondiente, recuerde que DEBE ENVIAR el
  archivo CPP, el archivo FUENTE.
  Recuerde que un ciclo de validación implica:
  a)	Pedir un valor
  b)	Verificar que dicho valor cumpla con las condiciones deseadas, en caso de error debe desplegar un mensaje de error, 
  hacer una pausa y regresar a pedir el valor nuevamente.
  c)	Un ciclo de validación sólo se rompe cuando el valor es dado correctamente.
*/




