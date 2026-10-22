
/*
EJERCICIO 4 - MENU REPETITIVO (version con switch)
Reto opcional: misma logica que la version if / else.
Autor:Cristhian Martinez
Fecha: 22/10/2026
*/
#include <iostream>
using namespace std;
 
int main(){
    int opcion, numero;
 
    do{
        cout<<"================MENU==============="<<endl;
        cout<<"1. Mostrar el doble de un numero"<<endl;
        cout<<"2. Mostrar el triple de un numero"<<endl;
        cout<<"3. Salir"<<endl;
        cout<<"SELECCIONE UNA OPCION-->";
        cin>>opcion;
 
        switch(opcion){
            case 1:
                cout<<"Ingrese un numero-->";
                cin>>numero;
                cout<<"El doble de "<<numero<<" es-->"<<numero*2<<endl<<endl;
                break; //sin break seguiria al siguiente case
 
            case 2:
                cout<<"Ingrese un numero-->";
                cin>>numero;
                cout<<"El triple de "<<numero<<" es-->"<<numero*3<<endl<<endl;
                break;
 
            case 3:
                cout<<"Saliendo del programa"<<endl;
                break;
 
            default:
                cout<<"Opcion invalida, intente de nuevo"<<endl<<endl;
        }
 
    }while(opcion!=3);
 
    return 0;
}