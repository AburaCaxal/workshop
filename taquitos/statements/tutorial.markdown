Este problema puede ser resuelto simulando la fila de clientes. Para ello, podemos usar un arreglo donde guardemos el n�mero de tacos que pide cada cliente.

    int cola[10000]; //cola[i] = n�mero de tacos que ordena la persona i

Como recordaremos, en una *pila* manejamos adem�s un �ndice que nos indique la posici�n del �ltimo elemento insertado. Sin embargo, como podremos observar, en esta ocasi�n insertamos y eliminamos elementos desde posiciones distintas: insertamos al final y eliminamos desde el principio, por lo que sonar�a razonable manejar dos �ndices para este problema.

    int inicio, fin; //posici�n del primer y del �ltimo elemento

Cada una de las operaciones las podemos interpretar de la siguiente manera:

 - Las operaciones del tipo $1$ $t$ equivale a insertar el elemento $t$ al final de la cola.
 - Las operaciones del tipo $2$ equivale a eliminar el elemento que se encuentra al principio de la cola.
 - Las operaciones del tipo $3$ equivale a encontrar la longitud actual de la cola.
 - Las operaciones del tipo $4$ equivale a imprimir la suma de todos los elementos que han sido eliminados.

Ahora veamos c�mo implementar cada una de estas funciones. La operaci�n de `agregar` en realidad no difiere mucho de la que implementamos para una pila.

    void agregar(int valor) {
        cola[fin++] = valor;
    }

Para la funci�n de `eliminar`, lo �nico que difiere de la pila es que en esta ocasi�n modificamos la posici�n del inicio, en lugar de la posici�n del fin. 

Para fines de este problema, haremos que nuestra funci�n de eliminar retorne tambi�n el elemento (pues lo necesitaremos tambi�n para la operaci�n $4$), y -1 en caso de que la cola est� vac�a.

    int eliminar() {
        if (inicio == fin) //La cola esta vacia
            return -1;
        else //Retornamos el valor y despues actualizamos el inicio
            return cola[inicio++];
    }

En realidad la parte en que verificamos si la cola est� vac�a no es necesaria para este problema, puesto que se nos asegura que nunca se atender� a una fila vac�a. Sin embargo, es bueno que se tome esto en consideraci�n para futuros problemas.

Para calcular el tama�o de nuestra cola, no es dif�cil darse cuenta que son $fin-inicio$ elementos.

    int longitud() {
        return fin - inicio;
    }

Esta estructura de datos que hemos implementado, como es de suponerse, recibe el nombre de **cola**. Una vez implementada, ya podemos usarla para resolver nuestro problema.

    int contador = 0;
    if (operacion == 1) {
        cin >> t;
        agregar(t);
    }
    else if (operacion == 2)
        contador += eliminar();
    else if (operacion == 3)
        cout << longitud() << "\n";
    else if (operacion == 4)
        cout << contador << "\n";
