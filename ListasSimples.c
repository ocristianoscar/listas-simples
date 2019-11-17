#include "ListasSimples.h"



nodo * iniciarLista(){
    return NULL;
}

nodo * crearNodo(int dato){
    nodo * aux = (nodo*)malloc(sizeof(nodo));
    aux->dato = dato;
    aux->siguiente = NULL;
    return aux;
}

nodo * agregarAlFinal(nodo * lista, nodo * nuevoNodo){
    if(lista == NULL){
        lista = nuevoNodo;
    }else{
        nodo * ultimo = buscarUltimoNodo(lista);
        ultimo->siguiente = nuevoNodo;
    }
    return lista;
}

nodo * buscarUltimoNodo(nodo *lista){
    nodo * ultimo = lista;

    if(ultimo){
        while(ultimo->siguiente != NULL){
            ultimo = ultimo->siguiente;
        }
    }

    return ultimo;
}

void mostrarNodo(nodo * aux){
    printf("-----\n%i\n-----\n", aux->dato);
}

void mostrarLista(nodo * lista){
    nodo * actual = lista;
    if(actual == NULL){
        printf("\nLa lista esta vacia!\n");
    }else{
        while(actual != NULL){
            mostrarNodo(actual);
            actual = actual->siguiente;
        }
    }
}
