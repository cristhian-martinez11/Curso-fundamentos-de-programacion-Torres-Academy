/*
EJERCICIO 1 - NUMEROS PARES HASTA N
Se usa while porque una variable avanza paso a paso hasta llegar al limite.
*/
#include <iostream>
using namespace std;
 
int main(){
    int N, i;
 
    cout<<"Ingrese un numero entero positivo N-->";
    cin>>N;
 
    //validamos que N sea positivo
    if(N<=0){
        cout<<"Error: el numero debe ser mayor que 0"<<endl;
        return 0; //terminamos para no seguir con datos incorrectos
    }
 
    cout<<"Numeros pares desde 1 hasta "<<N<<":"<<endl;
 
    i=1;
    while(i<=N){
        //un numero es par si el residuo de dividirlo entre 2 es 0
        if(i%2==0){
            cout<<i<<endl;
        }
        i++; //sin esto el bucle seria infinito
    }
 
    return 0;
}