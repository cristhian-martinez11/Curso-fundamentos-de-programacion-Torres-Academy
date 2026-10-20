/*
Ejercicio #4 de la tarea 4
Autor: Cristhian Martinez
Fecha: 16/10/206
Enunciado: Escribe un algoritmo que reciba tres calificaciones: Parcial 1, Parcial 2 y Proyecto.
Con esos valores, debe calcular la nota final usando ponderaciones: el Parcial 1 vale
el 30%, el Parcial 2 vale el 30% y el Proyecto vale el 40%. El algoritmo debe mostrar la
nota final.

 debe mostrar:
            nota final despues del calculo por porcentajes.

    e/p/s:
        Entrada: parcial1,parcial2, proyecto
        Proceso: calcular los valores de las entradas con ponderaciones y mostrar la nota final
        Salida: cout <<"Estimado estudiante, su nota final es-->"<<notaF;

*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    double parcial1,parcial2,proyecto;
    cout<<"Ingrese la nota del Parcial 1-->";
    cin>>parcial1;

    cout<<"Ingrese la nota del Parcial 2-->";
    cin>>parcial2;

    cout<<"Ingrese la nota del Proyecto-->";
    cin>>proyecto;

    double notaF=parcial1*0.30 + parcial2*0.30 + proyecto*0.40;

    cout<<"Estimado estudiante, su nota final es-->"<<notaF;

    return 0;
}