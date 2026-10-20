/*
EJERICICO WHILE-CONTADOR DE NUMEROS PARES
Autor: Crishtian Martinez
Fecha: 16/10/2026


Enunciado: 
        Elaborar un programa en C++ que solicite al usuario un número entero positivo N y
        muestre en pantalla todos los números pares desde 1 hasta N.
        Si el usuario ingresa un valor menor o igual a 0, el programa debe mostrar un mensaje
        de error.

    E/P/S:

    Entrada: un numero entero positivo N
    Proceso: leer el valor de N, verificar si N es menor o igual que 0
    si lo es, mostrar mensaje de error, si no lo es iniciar un contador que inicie en 1
    repetir de 2 en 2 mientras el contador sea menor o igual a N.
    mostrar el valor del contador
    aumentar el contador en 1 cada vuelta.
    Salida: los numeros desde 1 hasta n en pares
    o mensaje de error


*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    //declaramos variables
    int N,i;
    //ingresa el numero hasta donde lleagra
    cout<<"Ingrese un numero entero positivo-->";
    cin>>N;

    //se valida que N sea positivo
    if(N<=0){
        cout<<"ERROR, EL NUMERO DEBE SER MAYOR A 0";
        return 0;
    }
    cout<<"Numeros pares desde 1 hasta "<<N<<"-->";
    //variable que avanza
    i=1;
    while(i<=N){
        //un numero se considera par si el residuo se dividirlo entre 2 es 0
        if(i%2==0){
            cout<<i<<endl;
        }
        i++;//incrementa sino no tendra fin
    }
    return 0;
}