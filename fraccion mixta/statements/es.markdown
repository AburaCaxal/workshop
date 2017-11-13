# Descripci�n
Estas navegando por la red cuando te encuentras una p�gina que te recuerda que en el pasado hab�an muchas formas diferentes de representar fracciones: porcentajes, decimales y fracciones mixtas. No importaba lo grande que fueran los n�meros, las fracciones siempre lograban representarlos en una manera  hermosa y compacta, cuando te diste cuenta que se empez� a perder la costumbre.
En este problema se te dar� una fracci�n de la manera $\frac{n}{m}$ y  deberas encontrar $a$ y b tales que $0 \leq b \leq m$, y $am + b = n$.

# Entrada

Una sola l�nea que contiene los enteros $n$ y $m$.
# Salida
Si  b $\neq$ 0, imprime en una l�nea la representaci�n en la forma $a \cdot \frac{b}{m}$. En caso contrario solo imprime a.

# Ejemplo

||input
22 6

||output
3 4/6
||description
La fracci�n mixta de $n$ y $m$.
||input
49 7
||output
7
||end

# L�mites
$1 \leq n,m \leq 10^8$