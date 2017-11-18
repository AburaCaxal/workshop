# Descripci�n
Hay una mesa (redonda) con $N$ ni�os numerados de $1$ a $N$, la maestra ha decidido hacer un nuevo juego para determinar quien sale primero a jugar en el recreo, en el cual, iniciando desde el primer ni�o, la maestra avanza $K$ ni�os en el sentido de las manecillas del reloj. Donde termine la maestra, ese ni�o sale al recreo, luego la maestra se para en el siguiente ni�o y vuelve a repetir este proceso hasta que todos los ni�os salgan al recreo. 

Randy est� impaciente por salir a comer y le interesa saber despu�s de cuantos ni�os saldr� �l al recreo. **Randy siempre es el ni�o n�mero 1**.

# Entrada

Dos enteros $N$ y  $K$, el n�mero de ni�os y el salto de avance que se hace. 

# Salida

Un entero que represente el n�mero de ni�os que salieron antes de Randy.

# Ejemplo
||input
11 121
||output
0
||description
Randy es el primero en salir, ning�n ni�o sale antes que �l
||input
2 1
||output
1
||description
Randy es el �ltimo en salir, sale 1 ni�o antes que �l
||end

# L�mites
$1 \leq N,K \leq 1000$