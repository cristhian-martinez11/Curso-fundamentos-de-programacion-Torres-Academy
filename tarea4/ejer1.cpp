/*
Ejercicio #1 de la tarea 4
Autor: Cristhian Martinez
Fecha: 16/10/206
Enunciado: Escribe un algoritmo que reciba una temperatura en grados celsius y la convierta a grados fahrenheit.
El algoritmo debe mostrar el valor final en Fahrenheit. Usa la conversion estandar entre Celsius y Fahrenheit.
F=(C*9/5)+32

 debe mostrar:
            Temperatura en grados Fahrenheit

    e/p/s:
        Entrada: gradosC
        Proceso: aplicar la conversion estandar para convertir de grados celsius a fahrenheit
        Salida: cout "la temperatura en grados fahrenheit es-->"
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    //declaro variables
    double gradosC;
    cout <<"Ingrese los grado Centigrados"<<endl;
    cin >> gradosC;
    double gradosF=(gradosC*9/5)+32;
    cout<<"La temperratura en grados Fahrenheit es-->"<<gradosF<<endl;

    return 0;
}