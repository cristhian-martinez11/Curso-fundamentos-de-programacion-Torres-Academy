/*
EJERICICO FOR-TABLA MULTIPLICAR
Autor: Crishtian Martinez
Fecha: 16/10/2026


Enunciado: Elaborar un programa en C++ que solicite al usuario un número entero y muestre su
tabla de multiplicar del 1 al 10.
Al final, el programa debe mostrar un mensaje indicando que la tabla fue generada
correctamente.


    E/P/S:
    entrada:
        N
    Proceso:
        Pedir numero N
        Mostrar tabla de multiplicar del 1 al 10
        Mostrar Resultado

    Salida: 
        Tabla de multiplicar hasta el 10 del numero N ingresado


*/

#include <iostream>
#include <string>
using namespace std;

int main(){

    int i, numero;

    cout<<"Ingrese el numero del cual desea la tabla de multiplicar-->";
    cin>>numero;

    cout<<"La tabla de multiplicar del "<<numero<<":"<<endl;

    for(i=1;i<=10;i++){

        cout<<numero<<" x "<<i<<"="<<numero*i<<endl;

    }
    cout<<"<----------LA TABLA FUE GENERADA CORRECTAMENTE----------->"<<endl;
    return 0;
}