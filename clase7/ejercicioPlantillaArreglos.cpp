/*
EJERCICIO PLANTILLA- ARREGLOS
Autor: Crishtian Martinez

Aqui quiero que se queden con esta idea;
    -el arreglo guarda los datos
    -el indice nos dice en que opcion estamos
    -el for nos ayuda a movernos por todas las posiciones


*/

#include <iostream>
#include <string>
using namespace std;
 
int main(){

    int datos[5]; //arreglo de 5 enteros
    int i; //variable para recorrer posiciones

    //carga de datos
    for(i=0; i<5; i++){
        cout<<"Ingrese el numero a guardarse en el espacio "<<i+1<<endl; //primera vuelta-->"Ingrese el numero a guardarse en el espacio"
        cin>>datos[i];
        //priemra vuelta-->cin>> datos[0]
        //segunda vueelta-->cin>>datos[1]
    }
    //Impresion de datos
    for(i=0; i<5; i++){
        cout<<datos[i]<<endl;
    }

    return 0;
}