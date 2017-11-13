# Descripci�n

Una v�bora cubre totalmente una tabla de $3  $ x $  n$. Los segmentos sucesivos de la v�bora est�n numerados de $1$ hasta $3n$. Los segmentos con n�meros sucesivos (por ejemplo,1 y 2, 2 y 3, 3 y 4, ...) ocupan un cuadro que comparten un mismo borde. Por ejemplo, una v�bora podr� ocupar una tabla de $3$  x  $9$ as�:

<center>![Ejemplo de una v�bora en un tablero de 3x9](/img/1fea0f61441bd8f9f5f21796354228ceb3e647bc.png)</center>

Algunos n�meros de segmentos de la v�bora, se han borrado. Puedes reconstruir la v�bora?

# Entrada

La primer l�nea de la entrada contendr� un entero $n$ ($1 \leq n \leq 1000$), lo largo de la tabla. Las tres siguientes l�neas describen la tabla; la **i** *-i�sima* contiene $n$ enteros $a_{ij} (0 \leq a_{ij} \leq 3n$ para $1 \leq j \leq n$). Si $a_{ij} > 0$, entonces $a_{ij}$ es el n�mero del segmento de la v�bora que ocupa el cuadro **j** *-i�simo* de la **i** *-i�sima* rengl�n de la tabla. En caso contrario si $a_{ij} = 0$, entonces el n�mero del cuadro que ocupa el segmento de la v�bora es desconocido.

# Salida

Tu programa deber� mostrar 3 l�neas a la salida est�ndar. La **i** *-i�sima* l�nea deber� contener $n$ n�meros enteros positivos $b_{ij}$ (para $1 \leq j \leq n$). Todos los n�meros juntos $b_{ij}$ deber�n ser una permutaci�n de los n�meros del $1$ hasta $3n$. Los n�meros de salida deber�n ser una reconstrucci�n v�lida de la v�bora; por ejemplo, deber� ser consistente con los n�meros (positivos) de entrada y satisfacer las condiciones anteriormente mencionadas.

Deber�s asumir que al menos hay una reconstrucci�n v�lida de la v�bora. Si hay m�s de una, tu programa deber� indicar cualquier reconstrucci�n v�lida.

# Ejemplos

||input
9
0 0 5 0 17 0 0 0 21
8 0 0 3 16 0 0 25 0
0 0 0 0 0 0 0 0 23
||output
7 6 5 4 17 18 19 20 21
8 1 2 3 16 15 26 25 22
9 10 11 12 13 14 27 24 23
||end

# Evaluaci�n

* Un **15%** de los casos para $n \leq 10$
* El **40%** de los casos con $n \leq 40$
* Y un **70%** de los casos para $n \leq 300$