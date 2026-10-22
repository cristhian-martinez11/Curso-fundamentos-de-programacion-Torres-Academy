/*
EJERICICO FOR-SUMA DE 5 NUMEROS
Autor: Crishtian Martinez
Fecha: 16/10/2026


Enunciado: Elaborar un programa en C++ que solicite al usuario 5 números enteros y calcule la
suma total de esos valores.
Al final, el programa debe mostrar:
• la suma total
• y cuántos números fueron ingresados


    E/P/S:
    entrada:
        5 numeros enteros
    Proceso:
        Inicializar una variable suma en 0
        Rpetir 5 veces:
            pedir el numero
            leer el numero
            sumar ese valor al acumulador
        Al final, mostrar la suma total
    Salida: 
        La suma total de los 5 numeros ingresados y cuantos numeros fueron ingresados



*/

#include <iostream>
#include <string>
using namespace std;

int main(){

    int numero,suma,contador,i;

    suma=0; //la suma debe empzar desde 0
    contador=0; //cuantos numeros se han ingresado

    for(i=1;i<=5;i++){
        cout<<"Ingrese el numero "<<i<<"-->";
        cin>>numero;

        suma=suma+numero; //se acumulan los valores
        contador++; //contamos el numero ingresado
    }
    cout<<"La suma total es-->"<<suma<<endl;
    cout<<"Cantidad de numeros ingresados-->"<<contador<<endl;

    return 0;
}
  