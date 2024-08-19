#include <iostream>
#include "Lista/Lista.h"
using namespace std;

void printLista (Lista<int> Lista, int p, int n){
    for (int i = p; i < n; i++){
        cout << Lista.getDato(i) << " -> ";
    }
}

int main() {

    Lista<int> Lista;
    int n, d, p;
    cout<<"Ingrede tamanio de la lista: ";
    cin>>n;
    for (int i = 0; i < n; i++){
        cout << "Ingrese valor de la lista en la posicion "<< i + 1 <<": ";
        cin>>d;
        Lista.insertar(i, d);
    }
    cout << "Ingrese a partir de que posicion quiere ver la lista: ";
    cin >> p;
    printLista(Lista, p, n);
    return 0;
}
