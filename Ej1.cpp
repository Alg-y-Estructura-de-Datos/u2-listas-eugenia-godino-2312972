#include <iostream>
#include "Lista/Lista.h"
using namespace std;

int main() {

    Lista<int> Lista;
    int n, d, p;
    cout<<"Ingrede tamaño de la lista: ";
    cin>>n;
    for (int i = 0; i < n; i++){
        cout << "Ingrese valor de la lista en la posición "<< i + 1 <<": ";
        cin>>d;
        Lista.insertarUltimo(d);
    }
    return 0;
}
