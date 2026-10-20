/*
MINI EJERCICIO 2
Autor: Cristhian Martinez
Fecha: 14/10/206
Enunciado: Pide base y altura (enteros) y calcula el area
*/

#include <iostream>
#include <string> //(opcional, solo si se usa texto)
using namespace std;

int main() {
    int base, altura, area;
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese la altura: ";
    cin >> altura;
    area = base * altura;
    cout << "El area del rectangulo es: " << area << endl;
    return 0;
}