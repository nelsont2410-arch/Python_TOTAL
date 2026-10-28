#include <iostream>
using namespace std;

int main() {
    string nombre;
    int edad;

    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "Ingrese su edad: ";
    cin >> edad;
    cout << "Hello, " << nombre << "!" << endl;
    cout << "Tienes " << edad << " años." << endl;

    return 0;
}