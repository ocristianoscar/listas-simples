#include <stdio.h>
#include <stdlib.h>

// DEFINICION DE NODO

typedef struct{
    int dato;
    struct nodo *siguiente;
}nodo;


nodo * iniciarLista();
nodo * crearNodo(int dato);
nodo * agregarAlFinal(nodo * lista, nodo * nuevoNodo);
nodo * buscarUltimoNodo(nodo *lista);
void mostrarNodo(nodo * aux);
void mostrarLista(nodo * lista);

