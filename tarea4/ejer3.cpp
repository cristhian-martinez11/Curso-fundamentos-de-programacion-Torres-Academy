/*
Ejercicio #3 de la tarea 4
Autor: Cristhian Martinez
Fecha: 16/10/206
Enunciado: Escribe un algoritmo que reciba la edad de una persona y determine el precio a pagar
según estas reglas: si la edad es 18 o más, el precio es 5 dólares; si la edad es menor
a 18, el precio es 2.50 dólares. El algoritmo debe mostrar el precio final.

 debe mostrar:
            Precio final a pagar dependiento la edad

    e/p/s:
        Entrada: edad
        Proceso: calcular si edad>18 pagar $5 / si 18<edad pagar $2.50
        Salida: cout <<"el precio final a pagar segun su edad es-->"<<precioF;

*/

#include <iostream>
#include <string>
using namespace std;

int main(){

    int edad;
    double precioF;
    cout<<"Ingrese su edad-->";
    cin>>edad;
    if (edad<0 || edad>130){
        cout<<"DATOS INCORRECTOS, EDAD DEBE SAR MAYOR A 0 Y MENOR A 130 "<<endl;
    }else if (edad>=18){
         precioF=5;
         cout<<"SI USTED TIENE: "<<edad<<" YEARS "<<"DEBERA PAGAR: "<<precioF<<endl;
    }else{ 
        precioF=2.50;
        cout<<"SI USTED TIENE: "<<edad<<" YEARS "<<"DEBERA PAGAR: "<<precioF<<endl;
    }

    return 0;
        
}