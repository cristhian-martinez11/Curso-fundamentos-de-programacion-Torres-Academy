/*
EJERCICIO 1: ARREGLOS 1D: CARGAR Y RECORRIDO
Autor: Cristhian Martinez
Fecha: 19/10/2026

Enunciado:
    Realizar un programa en c++ que permita ingresar 5 notas enteras en un arreglo.
    Luego, que el programa debe mostrar todas las notas ingresadas, una por una, indicando tambien,
    la posicion en la que fueron guardadas.
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    //declaramos un arreglo de 5 enteros para guardar las notas
    int nota[5];

    //variable que usaremos para recorrer el arreglo
    int i;

    //carga de datos
    for(i = 0; i < 5; i++){
        cout<<"Ingrese las notas"<<i+1<<":"<<endl;
        cin>>nota[i];
    }
    cout<<endl; //SOLO SERA UN SALTO DE LINEA
    cout<<"Notas registradas"<<endl;

    for (i = 0; i < 5; i++){

        cout<<"Posicion "<<i<<" : "<<nota[i]<<endl;
    }



}