/*
Ejercicio #5 de la tarea 4
Autor: Cristhian Martinez
Fecha: 16/10/206
Enunciado: Escribe un algoritmo que reciba un número entero de horas totales (un valor no
negativo). El algoritmo debe convertir esa cantidad de horas a semanas, días y horas
sobrantes, considerando que una semana tiene 168 horas y un día tiene 24 horas. Al
final debe mostrar cuántas semanas, cuántos días y cuántas horas sobran.

 debe mostrar:
            semanas, dias y horas

    e/p/s:
        Entrada: horasTotales
        Proceso: convertir horasTotales a semanas,dias y horas.
        Salida: cout <<"Semanas"<<semans<<"dias"<<dias<<"horas"<<horas;

*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    int horasTotales,semanas,dias,horas,resto;

    cout<<"Ingrese el numero total de horas-->";
    cin>>horasTotales;

    if (horasTotales<0){
        cout<<"!!!DATOS INCORRECTOS, LAS HORAS NO PUEDEN SER NEGATIVAS!!!!"<<endl;
    }else{
        semanas= horasTotales/168;
        resto=horasTotales % 168;
        dias=resto/24;
        horas=dias%24;

        cout<<"Semanas-->"<<semanas<<endl;
        cout<<"Dias-->"<<dias<<endl;
        cout<<"Horas-->"<<horas<<endl;

    }

return 0;

}