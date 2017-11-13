# Descripci�n

La vida es simple en la remota aldea de Tak-Tak. Libre de los ruidos y bullicios de la vida moderna, los habitantes ocupan su d�a complaciendo sus dos m�s grandes gustos: el campo y la cocina. Sus campos de vegetales crecen fuertes y altos, y sus deliciosas comidas comunales iluminan mucho en la noche.

En el centro de la aldea se encuentra un gran �rbol en expansi�n, cuyas largas ramas proporcionan sombra durante los veranos calurosos. El fruto del �rbol Tak-Tak (como es conocido afectuosamente) es renombrado por su dulce y delicioso sabor.

A diferencia de las plantas comunes, el �rbol Tak-Tak no es afectado por el clima y las temporadas. En su lugar, los frutos crecen de acuerdo a los ciclos de la Luna. Cada mes cuando la Luna llena est� en su punto m�s alto, cada fruto del �rbol brilla y se convierte en dos frutos. Cuando el Sol sale, los habitantes se despiertan para ver que el n�mero de frutos se ha duplicado.

Los aldeanos est�n planeando un enorme festival para este a�o. En el d�a del festival cortar�n todos los frutos del �rbol excepto uno. Esto se dividir� equitativamente entre los once habitantes de la aldea, 
ya que son gente justa. (No est� permitido rebanar ni cortar - cada habitante debe recibir un n�mero entero de frutos.) Despu�s, la fruta restante del �rbol Tak-Tak se deja para comenzar el ciclo de nuevo.

Si los habitantes no pueden compartir de forma pareja con un fruto sobrante, esperar�n hasta que puedan. Est�n muy emocionados por el festival y les gustar�a saber cu�ntas Lunas llenas deber�n de esperar.

# Entrada

La entrada consistir� de un solo entero, el n�mero de frutos iniciales en el �rbol. Este estar� entre 2 y 1,000,000 inclusive.

# Salida

La salida consistir� de dos enteros separados por un espacio: el menor n�mero de Lunas llenas que los habitantes deber�n esperar para que el festival sea posible, y el n�mero de frutos para ese entonces.

Se garantiza que eventualmente ser� posible realizar el festival.

# Ejemplo

||input
23
||output
0 23
||description
En el primer ejemplo, $23=2\times11+1$ es un buen n�mero para el festival (cada aldeano recibe dos frutos Tak-Tak y uno sobra, como lo planeado). Es por ello que no necesitan esperar, pueden iniciar el festival inmediatamente.

||input
17
||output
1 34
||description
En el segundo ejemplo, 17 no es un buen n�mero para el festival. Despu�s de una Luna llena, el n�mero de frutos se ha duplicado, convirti�ndose en $34=3\times11+1$. Este es un buen n�mero para el festival.

||input
14
||output
2 56
||description
En el tercer ejemplo, 14 no es un buen n�mero para el festival. Despu�s de dos Lunas llenas, el n�mero de frutos se ha cuadruplicado, convirti�ndose en $56=5\times11+1$. Este es un buen n�mero para el festival.
||end
