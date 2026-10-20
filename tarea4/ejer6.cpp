/*
Ejercicio #6 de la tarea 4
Autor: Cristhian Martinez
Fecha: 16/10/206

Enunciado: Escribe un algoritmo que reciba dos datos: el plan de internet y el consumo. El plan
solo puede ser 1 o 2, y el consumo debe ser un número mayor o igual a cero.
Si el plan es 1, la tarifa base es 12 dólares y el límite incluido es 80. Si el plan es 2, la
tarifa base es 20 dólares y el límite incluido es 150.
Si el consumo supera el límite del plan, se cobra un recargo por excedente: por cada
unidad excedida se suma 0.25 al valor base. Si el consumo no supera el límite, se
paga solo la tarifa base.
Si el plan no es 1 ni 2, o si el consumo es negativo, el algoritmo debe mostrar “DATOS
INVÁLIDOS”. En caso contrario, debe mostrar el total a pagar.

 debe mostrar:
            total a pagar o datos invalidos

    e/p/s:
        Entrada: plan 1 o 2
        Proceso: validar plan 1 o 2 y que el consumo<=0, segun el plan se debe asignar la tarifa base,
        calcular total=tarifaBase+(consumo-limite)*0.25. Sino total=tarifaBase.
        Salida: cout <<"total a pagar es"<<total o "DATOS INCORRECTOS"

*/

#include <iostream>
#include <string>
using namespace std;

int main(){

    int plan;
    double consumo,tarifaBase,limite,total;

    cout<<"Ingrese su plan (1 o 2)-->";
    cin>>plan;
    cout<<"Ingrese el consumo-->";
    cin>>consumo;
    if ((plan !=1 && plan!=2)|| consumo<0){

        cout<<"====DATOS INVALIDOS===="<<endl;

    }else{
        if (plan==1){;
        tarifaBase=12;
        limite=80;

    }else{
        tarifaBase=20;
        limite=120;
        }

    if (consumo>limite){

        total= tarifaBase+(consumo-limite)*0.25;

    }else{

        total=tarifaBase;

        }
        cout<<"EL TOTAL A PAGAR ES-->"<<total<<endl;
    }
    return 0;

}