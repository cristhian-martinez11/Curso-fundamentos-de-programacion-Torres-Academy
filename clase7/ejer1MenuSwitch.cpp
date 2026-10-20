/*
EJERICIO 1-MENU SIMPLE CON SWITCH
Autor: Cristhian Martines
Fecha: 19/10/2026

Switch: es una estructura de seleccion que ermite ejecutar diferentes bloques de codigo segun el valor de una variable

Suele ser util:
    -Hay varias opciones numericas o fijas
    -Se quiere organizar mejor un menu
    -Cada opcion representa un caso distitno


Diferencia rapida con if/else:
    -if/else sirve mas cuando las condiciones pueden ser variadas o completas
    -switch sirve mas cuando comparas una sola variable contra varios valores concretos


Enunciado: Elaborar un programa en C++ que muestre un meno con las sigueintes opciones:
    1. Mostrar mensaje de bienvenida
    2. Mostrar el cuadrado de un numero
    3.Salir

    El programa debe repetirse hasta que el usuario ingrese el numero3.
    si el  usuario ingresa una opcion invalida, debe dar un mensaje de error


    E/P/S
    entrada:
        -una opcion del menu
        -Si elige la opcion2, un numero entero
    Proceso:
        -Mostar menu
        -leeer opcion
        -evaluar opcion con switch
        -ejecutar la accion corresponiente
        -repetir hasta que el usuario elija salir
    Salida:
        -mesnaje de bienvenida
        -el cuadrado de un numero
        -salir
        -mensaje de error opcion invalida
*/

#include <iostream>
#include <string>
using namespace std;
int main(){

    //declaramos variables
    int opcion,numero,cuadrado;

    //usamod do while para que el menu se muestre al menos una ves
    do{
        //mostramos el menu
        cout<<"========MENU CON SWITCH========"<<endl;
        cout<<"1. Mostrar bienvenida"<<endl;
        cout<<"2. Mostrar cuadrado de un numero"<<endl;
        cout<<"3.Salir"<<endl;
        cin>>opcion;

        switch(opcion){
            case 1:
                //opcion 1: mostrar mensaje
                cout<<"Bienvenidos a la clase 6 de C++"<<endl;
                break;
            case 2:
                //opcion 2:pedir numero y mostrar el cuadrado
                cout<<"ingrese el numero-->";
                cin>>numero;
                //calculamos el cuadrado
                cuadrado=numero*numero;
                //mostramos el resultado
                cout<<"el cuadrado de "<<numero<<" es "<<cuadrado<<endl;
                break;
            case 3:
                //Opcion salir del programa
                cout<<"SALIENDO DEL PROGRAMA....."<<endl;
                break;

            default:
            //si la opcion no coincide con ningun caso
                cout<<"Error: opcion invalida"<<endl;
                
             


        }



    }while(opcion!=3);


}