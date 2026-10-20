/*
EJERICICO FWHILE-mENU REPETITIVO CON DO WHILE
Autor: Crishtian Martinez
Fecha: 16/10/2026


Enunciado: elabora un programa en c++ que muestre un menu repetitivo con las siguientes opciones
    1. Sumar dos numeros
    2. Mostrar la tabal de multiplicar de un numero
    3.Salir
El programa debe repetirse hasta que el usuario eliga la opcion 3, si el usuario ingresa una opcion invalida, 
el programa debe mostrar un mensaje de eror y volver a mostrar le menu.

    E/P/S:
    entrada:
         Una opcion del menu
        Segun la opcion elegida:
            dos numeros para sumar
            o un numero para mostrar la tabla de multiplicar

       
    Proceso:
        Mostrar el menu
        Leer la opcione
        Si la opcion es 1;
            Pedir dos numeros
            sumarlos
            msotrar resultado
        Si la opcion es 2:
            Pedir un numero
            Mostrar su tabla de multiplicar del 1 al 10
            Mostrar resultado
        Si la opcion es 3:
            Salir.
        SI la opcion es invalida
            Mostrar mensaje de error
        Repetir mientras la opcion sea diferente a 3

    Salida: 
        Resultado de al suma
        O tabla de multiplicar
        o mensaje de salida
        o mensaje de rror por opcion ivalida

*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    //declaramos las variables
    int opcion,n1,n2,n3,suma,numero,i;
    //usamos do while porque queremos que el menu se muestre al menos 1 ves
    do{
        //mostramos el menu principal
        cout<<"================MENU==============="<<endl;
        cout<<"1. Sumar 2 numeros"<<endl;
        cout<<"2. Mostrar tabla de multiplicar"<<endl;
        cout<<"3. Sallir"<<endl;
        cout<<"SELECCIONE UNA OPCION"<<endl;
        cin>>opcion;

        if(opcion==1){
            //pedimos dos numero para sumarlos
            cout<<"ingrese el primer numero-->"<<endl;
            cin>>n1;

            cout<<"Ingrese el segundo numero"<<endl;
            cin>>n2;

            //realizamos la suma
            suma=n1+n2;
            cout<<"La suma de los dos numeros es-->"<<suma<<endl<<endl<<endl;
       
        }else if(opcion==2){
            //pedimos un numero para mostrar su tabla de multiplicar
            cout<<"Ingrese un numero-->"<<endl;
            cin>>numero;

            //mostramos la tabla del 1 al 10
            for(i=1;i<=10;i++){
                cout<<numero<<" x "<<i<<"="<<numero * i<<endl;
            }
        }else if(opcion==3){

            //mostramos mensaje de salida
            cout<<"saliendo del programa"<<endl;
        }else{
            //si la opcion es invalida
            cout<<"opcion invalida, intente de nuevo"<<endl;
        }
    //el menu seguira repitiendose mientras la opcion sea diferente a 3    
    }while(opcion!=3);

    return 0;

}