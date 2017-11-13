# Descripci�n

Un m�sico de la ciudad va a dar un concierto para recabar fondos para la caridad. El concierto se realizar� en un teatro, con un espacio perfectamente destinado. Hay $r$ filas de asientos donde cada una contiene exactamente $s$ asientos. En cada asiento se puede sentar como m�ximo una persona (es decir, dos personas no pueden sentarse en un mismo asiento)

Pero, hay un problema - los boletos para el concierto se han sobrevendido. �sto quiere decir que si cualquiera que haya comprado un boleto, algunos de ellos estar�n parados en el concierto. Por eso el m�sico te ha pedido tu ayuda para que respondas la siguiente pregunta: si todos los que compraron boleto vienen al concierto y tratan de buscar un asiento, cu�ntas personas estar�n sentadas y cu�ntas estar�n paradas?

# Entrada

La primer l�nea de la entrada consistir� en dos enteros $r$ y $s$, el n�mero de filas y el n�mero de asientos por fila, en ese orden. Se garantiza que $0 \leq r,s \leq 10,000$. La segunda l�nea contendr� un s�lo entero entre 0 y 1,000,000,000 el n�mero de boletos que se han vendido.

# Salida

La salida deber� consistir en dos enteros separados por un espacio: el n�mero de personas que estar�n sentadas y loas que permanecer�n paradas, respectivamente.

Recuerda que todos intentar�n sentarse, si pueden. Si los boletpos para el concierto se han sobrevendido, no se podr�n sentar todos los que asistan.

# Ejemplo

||input
7 12
1000
||output
84 16
||description
La primera l�nea de la entrada dice que hay **7** filas de **12** asientos cada una (es decir, 7 x 12 = 84 asientos en total). La segunda l�nea indica que hay 100 personas que tienen boletos. As� que no hay suficiente espacio para todos ellos, solo 84 personas podr�n sentarse y 16 permanecer�n paradas.
||end