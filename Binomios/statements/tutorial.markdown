Para resolver el problema, antes debemos introducir el concepto de combinaciones. 

Recordemos, cuando vimos el tema de permutaciones, que si tenemos un conjunto de $n$ elementos y queremos contar el n�mero de permutaciones con $r$ elementos, podemos calcularlo f�cilmente usando la siguiente f�rmula

$$_nP_r=frac{n!}{(n-r)!}$$

Sin embargo, a diferencia de una permutaci�n, en las combinaciones el orden es irrelevante, de modo que si dos subarreglos tienen los mismos elementos, entonces se consideran iguales. Por ejemplo, si tenemos el conjunto $A={1,2,3}$, las permutaciones con 2 elementos ser�an

$${1,2}$$
$${1,3}$$
$${2,1}$$
$${2,3}$$
$${3,1}$$
$${3,2}$$

mientras que los subconjuntos (las combinaciones) de 2 elementos ser�an

$${1,2}$$
$${1,3}$$
$${2,3}$$

$$_nC_r=frac{_nP_r}{_rP_r}=frac{n!}{r!(n-r)!}$$

