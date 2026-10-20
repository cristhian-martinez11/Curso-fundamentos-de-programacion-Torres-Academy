/*
MINI EJERCICIO 2
Autor: Cristhian Martinez
Fecha: 14/10/206
Enunciado: Un cliente compra un producto, el sistema recibe un precio del producto y el dinero pagado
 debe mostrar:
    Si pagado>= precio, mostrar cambio
    Si pagado < precio, mostrar cuanto falta

    e/p/s:
        Entrada: precio, pagado
        Proceso:comparar pagado con precio, calcular cambio o faltan
        Salida: cout "su cambio es" o "falta"
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    // declaramos la variable
    double precio,pagado;
    //lectura de datos
    cout << "ingrese el precio del prodcuto:"<<endl;
    cin >>precio;
    cout << "ingrese el dinero pagado:"<<endl;
    cin >>pagado;
    //proceso
    if(pagado<precio){
        //si pagado es menor, falta dinero
        double faltante=precio-pagado;
        cout << "Faltan$:" <<faltante<<endl;
    }else{
        //si pagado es mayor o igual, hay cambio
        double cambio=pagado-precio;
        cout << "Su cambio es$-->" <<cambio<<endl;
    }

    return 0;
}
