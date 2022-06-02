
#include <iostream>

struct Nodo {
    int dato;
    Nodo* der;
    Nodo* izq;
};

Nodo* addNodo(int);
void insertNodo(Nodo*&, int);
Nodo* arbol = NULL;

int main()
{
    std::cout << "Hello World!\n";
}

Nodo* addNodo(int x) {
    Nodo* nuevo_nodo = new Nodo();
    nuevo_nodo->dato = x;
    nuevo_nodo->der = NULL;
    nuevo_nodo->izq = NULL;

    return nuevo_nodo;
}

void insertNodo(Nodo*& arbol, int x) {
    if (arbol == NULL) {
        Nodo* nuevo_nodo = addNodo(x);
        arbol = nuevo_nodo;
    }
    else {
        int valorRaiz = arbol->dato;
        if (x < valorRaiz) {
            insertNodo(arbol->izq, x);
        }
        else {
            insertNodo(arbol->der, x);
        }
    }
}