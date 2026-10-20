/*
EJERICICO WHILE-Contador con while
Autor: Crishtian Martinez
Fecha: 16/10/2026


Enunciado: 
        Elaborar un programa en C++ que solicite al usuario un numero entero positivo N
        y muestre en pantalla los numeros desde 1 hasta N, usando un bucle while.
        si el ususario ingresa un valor menor o igual a 0, el programa debe mostrar un error y terminar

    E/P/S:

    Entrada: un numero entero positivo N
    Proceso: leer el valor de N, verificar si N es mayor que 0
    si no lo es 0, mostrar mensaje de error, si si lo es iniciar un contador que inicie en 1
    repetir mientras el contador sea menor o igual a N.
    mostrar el valor del contador
    aumentar el contador en 1 cada vuelta.
    Salida: los numeros desde 1 hasta n
    p memsaje de errpr si el numero ingresado no es valido


*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    //declaramos variables
    int N,contador;
    //pedimos el usuario muestre un numero positivo
    cout<<"Ingrese un numero entero positivo-->";
    cin>>N;

    //validadmos que el nuemro sea mayor que 0
    if(N<=0){
        //si el numero no es valido muestra error
        cout<<"ERROR, EL NUMERO DEBE SER MAYOR QUE 0"<<endl;
    }else{
        //inicializamos el contador en 1
        contador=1;
        //repetimos mientras contador dea menor o igual a N
        while (contador<=N){
            //mostrarmos el valor actual del contador
            cout<<contador<<endl;

            //aumentamos el contador en 1 para evitar bicles infinitos
            contador=contador+1;

        }

    }
return 0;

}