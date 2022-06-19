#include <stdio.h>
#include "ListaOrdenada.h"

int main() {

    ListaOrdenada *lista1 = crearListaOrdenada();
    ListaOrdenada *lista2 = crearListaOrdenada();

    insertarOrdenado(lista1, crearNodo(12));
    insertarOrdenado(lista1, crearNodo(50));
    insertarOrdenado(lista1, crearNodo(213));
    insertarOrdenado(lista1, crearNodo(1));
    insertarOrdenado(lista2, crearNodo(0));
    insertarOrdenado(lista2, crearNodo(70));
    insertarOrdenado(lista2, crearNodo(54));
    insertarOrdenado(lista2, crearNodo(654));

    imprimirListaOrdenada(lista1);
    imprimirListaOrdenada(lista2);

    ListaOrdenada *concatenada = concatenarListaOrdenada(lista1, lista2);
    // Este ejercicio puede hacerse de dos formas, destruyendo la lista1 y lista2, modificando
    // directamente los nodos para que apunten entre ellos. En ese caso, las lista1 y lista2
    // dejan de ser "utilizables" y debería usarse concatenada.
    // Pero en este caso está hecho para que se copien los nodos de las listas originales,
    // y se añadan a la nueva, sin modificar directamente los originales.
    // Si el enunciado no especifica nada debería estar bien de las dos formas.

    imprimirListaOrdenada(concatenada);
    imprimirListaOrdenada(lista1);
    imprimirListaOrdenada(lista2);

    liberarListaOrdenada(concatenada);

    return 0;
}
