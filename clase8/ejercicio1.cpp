/*
EJERCICIO 3- REGIUSTRAR PRECIOS Y BUSCAR UN VALOR
Autor: Cristhian Martinez

Enunciado: 
    Realicar un programa en c++ que permita ingresar 6 precios enteros en un arreglo
    Luego el programa debe:
        -Mostrar todos los precios registrados junto con su posicion
        -Pedir al usuario un precio para buscar dentro del arreglo
        -Indicar si ese precio fue encontrado o no
        -Mostrar a posicion de la primera coincidencia encontrada
*/

   #include <iostream>
#include <string>
using namespace std;

int main(){
    //Declaracion de variables
    int precios[6];
    int i;
    int buscado;
    int posicion = -1;
    bool encontrado = false;

    //PASO 1: CARGAR LOS PRECIOS EN EL ARREGLO
    for(i=0; i<6; i++){
        cout<<"INGRESE EL PRECIO "<<i+1<<": ";
        cin>>precios[i];
    }

    //PASO 2: MOSTRAR LOS PRECIOS GUARDADOS
    cout<<endl<<"PRECIOS REGISTRADOS"<<endl;
    for(i=0; i<6; i++){
        cout<<"Posicion "<<i<<" : "<<precios[i]<<endl;
    }
    cout<<endl;

    //PASO 3: PEDIR PRECIO A BUSCAR
    cout<<"INGRESE EL PRECIO QUE DESEA BUSCAR: ";
    cin>>buscado;

    //PASO 4: BUSQUEDA SECUENCIAL
    for(i=0; i<6; i++){
        if(precios[i] == buscado && encontrado == false){
            encontrado = true;
            posicion = i;
        }
    }

    cout<<endl;

    //PASO 5: MOSTRAR EL RESULTADO
    if(encontrado == true){
        cout<<"Precio encontrado en la posicion: "<<posicion<<endl;
    }else{
        cout<<"Precio no fue encontrado en el arreglo"<<endl;
    }

    return 0;
}