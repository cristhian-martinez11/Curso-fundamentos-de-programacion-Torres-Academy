/*
Ejercicio #1 de la clase 6
Autor: Cristhian Martinez
Fecha: 16/10/206
Enunciado: Promedio de 3 notas (Validacion  0 a 10)
            El sistema recibe 3 notas y muestra el promedio.
            Regla: cada nota debe estar dentro del rango 0 a 10.
            Si alguna nota esta fuera del rango, mostrar "Datos invalidos"


    e/p/s:
        Entrada: n1,n2,n3
        Proceso: validar rango y calcular promedio
        Salida: promedio o "datos invalidos"
*/

#include <iostream>
#include <string>
using namespace std;

int main(){

    //variables de entrada
    double n1,n2,n3,promedio;

    //2) lectura de notas
    cout<<"Ingrese su nota1-->"<<endl;
    cin>>n1;
    cout<<"Ingrese su nota2-->"<<endl;
    cin>>n2;
    cout<<"Ingrese su nota3-->"<<endl;
    cin>>n3;

    //3) si una notaa esta fuera del rango (0 a 10)--> invalido

    if(n1<0 || n1>10 || n2 <0 || n2>10 || n3<0 || n3>10){
        cout<<"DATOS INVALIDOS"<<endl;
        return 0; //aqui termina para no calcular con datos incorrectos
    }

    //4) proceso caldulo del promedio
    promedio=(n1+n2+n3)/3;
    cout<<"Su promedio es-->"<<promedio<<endl;

    return 0;


}

