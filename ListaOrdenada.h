#ifndef INC_15_1_HERRERAOCAMPOMARTIN_LISTAORDENADA_H
#define INC_15_1_HERRERAOCAMPOMARTIN_LISTAORDENADA_H

typedef struct nodo {
    int codigo;
    struct nodo *siguiente;
} Nodo;

typedef struct listaOrdenada {
    Nodo *primero;
    int tam;
} ListaOrdenada;

ListaOrdenada *crearListaOrdenada();
Nodo *crearNodo(int codigo);
void insertarOrdenado(ListaOrdenada *lista, Nodo *nodoAInsertar);
void imprimirListaOrdenada(ListaOrdenada *lista);
Nodo *copiarNodo(Nodo *nodo);
ListaOrdenada *concatenarListaOrdenada(ListaOrdenada *lista1, ListaOrdenada *lista2);
void liberarListaOrdenada(ListaOrdenada *lista);



#endif
