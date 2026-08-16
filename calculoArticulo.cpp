#include <iostream>
#include <string>
using namespace std;

int main() {
    int precioArticulo;
    int costoEnvio = 5000;

    cout << "Escribe el costo del articulo: ";
    cin >> precioArticulo;

    int sumaTotal = precioArticulo + costoEnvio;

    cout<< "El total del envio es: " << sumaTotal << "\n";
}