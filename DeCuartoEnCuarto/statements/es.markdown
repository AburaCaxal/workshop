# Problema

En este problema controlas a un personaje que est� atrapado en una casa enorme. Inicialmente el personaje empieza en el cuarto $X$ de la casa y desea llegar al cuarto $Y$ (los cuartos est�n numerados de $1$ a $N$).

Los cuartos de la casa tienen la particularidad que tienen exactamente dos puertas, cada una de ellas conecta a otro cuarto.

# Entrada y Salida

**Este es un problema interactivo**, por lo que no tendr�s que leer la entrada ni imprimir la salida, sino implementar en tu c�digo la funci�n `Player1(int x)` y podr�s mandar a llamar algunas funciones del evaluador.

# Implementaci�n

### Tu funci�n `Player1(int x, int y)`

C/C++ `void Player1(int x, int y);`

### Descripci�n

El evaluador buscar� en tu c�digo esta funci�n y la llamar� con dos enteros $x$ , $y$ donde $1$ $\leq$ N $\leq$ $10^{5}$ .

### Par�metros

* `x`: El cuarto donde inicia el personaje.
* `y`: El cuarto a donde debe llegar personaje.

### Funci�n del evaluador `siguienteCuarto(int n)`

C/C++ `int siguienteCuarto(int n)`

Puedes llamar a esta funci�n para saber a que cuarto te conduce la $n-�sima$ puerta del cuarto donde actualmente est� el personaje. (Si $n$ es mayor a 2 o menor a 1 regresar� -1; de lo contrario el cuarto al que conduce la puerta).

### Descripci�n

* `1`: La funci�n regresa el cuarto al que llegas desde el cuarto actual tomando la puerta 1.
* `2`: La funci�n regresa el cuarto al que llegas desde el cuarto actual tomando la puerta 2.
* `k`: Si $k\neq1$ y $k\neq2$ la funci�n regresa -1 ya que  no ser� una puerta v�lida.

### Funci�n del evaluador `move(int c)`

C/C++ `void move(int c)`

Con esta funci�n le dices al evaluador que quieres mover al personaje al cuarto $c$, esto se realizar� siempre y cuando donde est� actualmente el personaje exista una puerta que conduzca al cuarto $c$ de lo contrario chocar�s con pared (gui�o gui�o) y perder�s el juego. �Ten cuidado con el move()!

### Par�metros
* `c`: Un entero tal que $1$ $\leq$ $c$ $\leq$ $N$.

### Funci�n del evaluador `regresa()`

C/C++ `void regresa()`

Con est� funci�n el personaje regresar� al cuarto de donde lleg� al actual siempre y cuando haya a donde regresar, de lo contrario el universo explotar� y perder�s el juego. �Ten cuidado con el regresa()!.

# Rutina de Ejemplo

A continuaci�n se muestran las primeras llamadas de una rutina de ejemplo.

|| input
Funci�n llamada
|| output
Valor devuelto
|| description
Descripci�n
|| input
adivina(5,10)
|| output
-
|| description
Se llama a tu procedimiento.
|| input
pista(7)
|| output
1
|| description
El numero que esta pensando omegaUp es mayor que 7.
|| input
pista(10)
|| output
-1
|| description
El numero que esta pensando omegaUp es menor que 10.
|| input
pista(9)
|| output
0
|| description
El numero que esta pensando omegaUp es 9.

|| end

# Restricciones

*$-2^{61}$ $\leq$ a,b $\leq$ $2^{61}$*

# Consideraciones

* Tu puntuaci�n ser� en base a la cantidad de llamadas que hagas a la funci�n `long long pista(long long x)` de la siguiente manera.

* Tendras el 100% del valor del caso si haces a lo m�s $\log (b-a+1)$ llamadas.
* Tendras el 50% del valor del caso su haces a lo mas $2\log (b-a+1)$ llamadas.
* Si haces mas de $2\log (b-a+1)$ llamadas no obtendr�s porcentaje.

{{libinteractive:download}}
