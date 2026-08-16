#include <iostream>
#include <string>
#include <list>
using namespace std;

int main() {
    int productos = 20;
    int cantidad;
    int valor = 1000;

    cout << "¿Cuantos productos deseas llevar?: ";
    cin >> cantidad;

    if (cantidad > productos) {
        cout << "Stock insuficiente";
        return 1;
    } else {
        productos -= cantidad;
    }
    
    int precio = cantidad * valor;

    if (cantidad >= 6) {
        int nuevoprecio = precio * 0.90;
        cout << "El total a pagar con el descuento es: " << nuevoprecio << "\n";
        cout << "Stock restante: " << productos << "\n";
        return 1;
    } else {
        cout << "El valor a pagar es: " << precio << "\n";
        cout << "Stock restante: " << productos << "\n";
        return 1;
    }


    return 0;
}