/*
Ejercicio #2 de la tarea 4
Autor: Cristhian Martinez
Fecha: 16/10/206
Enunciado: Escribe un algoritmo que reciba la base y la altura de un rectángulo. Con esos datos,
debe calcular y mostrar el área y el perímetro del rectángulo.

 debe mostrar:
            "El area del rectangulo es"<<area;
            "El perimetro del rectangulo es"<<perimetro;

    e/p/s:
        Entrada: base, altura
        Proceso: calcular el area del rectangulo area=base*altura
                 calcular el perimetro de un rectangulo 2*(base+altura)
        Salida: cout "el area de su rectangulo es-->"<<area<<"el perimetro de su rectangulo es"<<perimetro;

*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    double base,altura;
    cout<<"Ingrese la base de su rectangulo-->";
    cin>>base;
    cout<<"Ingrese la altura de su rectangulo-->";
    cin>>altura;
    double area=base*altura;
    double perimetro=2*(base+altura);
    cout<<"EL AREA DE SU RECTANGULO ES:  "<<area<<"  Y EL PERIMETRO ES  "<<perimetro;

    return 0;

}