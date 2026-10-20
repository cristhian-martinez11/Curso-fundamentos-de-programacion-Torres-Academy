/*
mini ejercicio 1
Autor: Cristhian Martinez
Fecha: 14/10/206

Enunciado: Pide dos numeros y muestra la suma de ambos.
*/

#include <iostream>
#include <string> //(opcional, solo si se usa texto)
using namespace std;

int main() {
    int n1,n2,suma;
    //ingreso de datos
    cout <<"Ingrese el numero 1-->";
    //lee los datos
    cin>>n1;
    cout <<"Ingrese el numero 2-->";
    cin>>n2;
    //calculo de datos
    suma=n1+n2;
    cout <<"La suma es--> "<<suma;
    return 0;
}
