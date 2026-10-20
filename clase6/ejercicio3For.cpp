/*
EJERICICO FOR-Acumulador con for
Autor: Crishtian Martinez
Fecha: 16/10/2026


Enunciado: Elabora un programa en c++ que solicite al usuario 5 numeros enteros 
y calcule la suma total de esos numeros usando el bucle for, al final el programa debe mostrar el 
resultado acumulado


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
        La suma total de los 5 numeros ingresados.



*/

#include <iostream>
#include <string>
using namespace std;

int main(){

    int i,numero,suma;
    //inicializamos el acomulador en 0
    suma=0;

    //usamos un for porqe ya sabemos cuantas veces se repite
    for(i=1;i<=5;i++){
        //pedimos cada numero al usuario
        cout<<"Ingrese el numero-->"<<i<<"-->";
        cin>>numero;

        //Acomulamos el numero ingresado en la suma total
        suma=suma+numero;

    }
    cout<<"Suma final es-->"<<suma<<endl;

    return 0;


}