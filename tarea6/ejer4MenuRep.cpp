/*
EJERICICO FWHILE-MENU REPETITIVO
Autor: Crishtian Martinez
Fecha: 16/10/2026


Enunciado: 
        Elaborar un programa en C++ que muestre el siguiente menú:
        1. Mostrar el doble de un número
        2. Mostrar el triple de un número
        3. Salir
        El programa debe repetirse hasta que el usuario elija la opción 3.
        Si el usuario ingresa una opción inválida, el programa debe mostrar un mensaje de
        error y volver a mostrar el menú.

    E/P/S:
    entrada:
         Una opcion del menu
        Segun la opcion elegida:
            1. Mostrar el doble de un numero
                numero
            2. Mostrar triple de un numero
                numero
            3.Salir

       
    Proceso:
        Mostrar el menu
        Leer la opcione
        Si la opcion es 1;
            Pedir el numero
            Multiplicar numero por 2
            msotrar resultado
        Si la opcion es 2:
            Pedir un numero
            Multiplicar numero por 3
            Mostrar resultado
        Si la opcion es 3:
            Salir.
        SI la opcion es invalida
            Mostrar mensaje de error
        Repetir mientras la opcion sea diferente a 3

    Salida: 
        doble del numero
        triple del numero
        mensaje de saluda
        error opcion invalida

*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    //declaramos las variables
    int numero,opcion;
    //usamos do while porque queremos que el menu se muestre al menos 1 ves
    do{
        //mostramos el menu principal
        cout<<"<-----------MENU-------->"<<endl;
        cout<<"1. Mostrar el doble de un numero"<<endl;
        cout<<"2. Mostrar el triple de un numero"<<endl;
        cout<<"3. Sallir"<<endl;
        cout<<"SELECCIONE UNA OPCION"<<endl;
        cin>>opcion;
 
        if(opcion==1){
            //pedimos el numero para mostrar el doble
            cout<<"Ingrese un numero";
            cin>>numero;
            cout<<"El doble de "<<numero<<" es "<<numero*2<<endl;
            break;
       
        }else if(opcion==2){
            //pedimos el numero para mostrar el triple
            cout<<"Ingrese un numero-->"<<endl;
            cin>>numero;

            cout<<"El triple de "<<numero<<" es "<<numero*3<<endl;
            break;
            
        }else if(opcion==3){

            //mostramos mensaje de salida
            cout<<"HAS DECIDIDO SALIR DEL PROGRAMA"<<endl;
        }else{
            //si la opcion es invalida
            cout<<"ERROR, SOLO HAY 3 OPCIONES"<<endl;
        }
    //el menu seguira repitiendose mientras la opcion sea diferente a 3    
    }while(opcion!=3);

    return 0;

}