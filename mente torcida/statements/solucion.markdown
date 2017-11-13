# An�lisis

Para aclarar, lo que pide el problema es dados dos rect�ngulos encontrar el �rea que cubren ambos.

Para el caso de ejemplo:

![ejemplo](img01.png)


A veces hacer dibujos para representar el problema resulta ser muy �til ya que puede ayudarte a entender el problema y posiblemente llevarte a la soluci�n.

El resultado para este caso de ejemplo es 21 (ya que son 21 celdas las que son cubiertas por los rect�ngulos). Para llegar a esto se puede contar celda por celda, como indica la siguiente imagen:

![solucion](img02.png) 

La idea de contar celda por celda ocupada es buena para casos peque�os, pero de acuerdo con las especificaciones del problema, las coordenadas van de 0 a 10,000. Lo que significa que para casos muy grandes, esto puede llegar hasta 100,000,000 celdas que contar; lo que es impractico ya que esto no se puede realizar dentro del l�mite de tiempo que establece el problema (0.05 segundos).

Retomando la representaci�n del problema mediante dibujos; es importante abarcar tantos casos como sea posible y no solo el que viene de ejemplo. Los siguientes son posibles casos que hay que considerar en nuestra soluci�n:

![posibleCaso1](img03.png) ![posibleCaso2](img04.png) ![posibleCaso3](img05.png) ![posibleCaso4](img06.png)

Como puedes ver hay diferentes escenarios que tu programa debe ser capaz de resolver.

Si observamos la ultima imagen, debido a que los rect�ngulos no se sobreponen en ninguna celda, podemos obtener la respuesta sumando el �rea de cada uno. 

Sin embargo, si los rect�ngulos se sobreponen en al menos una celda al hacer esto nos dara un area mayor a la que en realidad es, esto debido a que estamos contando dos veces cada celda en la que se sobreponen. Como podemos ver en la siguiente imagen:

![colorEjemplo](img07.png)

Este dibujo representa el caso de ejemplo, pintando de rojo el area de un rect�ngulo y de amarillo el del otro. Como se puede ver, el �rea anaranjada es la que se est� contando dos veces.

Esta observaci�n nos lleva a la siguiente idea:

$A_total$ = $A_1$ + $A_2$ - $A_{intersecci�n}$

Donde $A_1$ es el �rea de un rect�ngulo, $A_2$ el �rea del otro y $A_{intersecci�n}$ el �rea (la cantidad de celdas) en las que se sobreponen ambos rect�ngulos. Notando que si no existe intersecci�n su �rea es cero.

De esto, lo que tu programa deber hacer es:

 1. Leer las coordenadas de los rect�ngulos.
 2. Calcular el �rea cubierta:
	- Calcular el �rea de los ract�ngulos.
	- Calcular las coordenadas de la intersecci�n (si existiese).
	- Calcular el �rea de la intersecci�n (si existiese).
 3. Dar la respuesta.

# Encontrar la intersecci�n

Lo que se busca lograr es obtener las coordenadas del rect�ngulo de intersecci�n.

De nuevo para observar las posibles intersecciones analizemos las siguientes imagenes.

![interseccion1](img08.png) ![interseccion2](img09.png) ![interseccion3](img10.png)

Se puede ver que la l�nea roja coincide con una arista izquierda de uno de los rect�ngulos y analogamente la l�nea verde coincide con una arista derecha de uno de los rect�ngulos.

Ahora ya que tenemos dos opciones, �cual de las arista izquierdas hay que tomar?
Bueno la respuesta es algo sencilla, hay que tomar la arista izquierda (de los rect�ngulos que se dan en la entrada) que est� mas a la derecha. Al experimentar con mas casos podras darte cuenta porque la arista izquierda (de alguno de los rect�ngulos) que este mas a la izquierda no puede ser parte de la intersecci�n.

Como se puede observar, algo similar pasa con la l�nea verde, hay que tomar la arista derecha (de alguno de los rect�ngulos) que este mas a la izquierda. 

Ahora buen, para las arista de arriba y abajo pasa algo similar, solo hay que adecuar el procedimiento que acabamos de realizar.

Ahora hay que considerar el siguiente caso, cuando no existe rect�ngulo de intersecci�n:

![noInterseccion](img11.png)

Lo que se puede detectar facilmente, ya que el l�nea roja estar� mas a la derecha que la l�nea verde, y en este caso el �rea de intersecci�n ser� cero.

Con estas observaciones ya se pueden calcular la cantidad de celdas de la intersecci�n y obtener el resultado correcto, sin contar ninguna celda mas de una vez.