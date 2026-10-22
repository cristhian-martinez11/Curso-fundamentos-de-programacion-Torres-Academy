#include <iostream>
#include <string>
using namespace std;

int main(){

    int numeros[6];
    
    int i;
    //variable donde se guarda el numero que se quiere buscar
    int buscado;  

    int posicion; //variable para guardar la posicion donde se encuentra el numero, si el valor final no cambia de -1 entonces significa que no se encontro el numero

    bool encontrado = false; //variable bander nos ayuda a saber si encontramos o no el numero

    //CARGA DE DATOS
    for(i = 0; i < 6; i++){

        cout<<"Ingrese el numero "<<i+1<<"-->";
        cin>>numeros[i];

    }
    cout<<endl;
    //pedimos el numero que desea buscar
    cout<<"INGRESE EL NUMERO QUE DESEA BUSCAR : ";
    cin>>buscado;

    //Busqueda secuenciaL

    //Recorrer el arreglo

    for (i=0; i<6; i++){

        //Comprobamos si el valor guardado en la posicion i es igual al numero que queremos buscar
        if (numeros[i] == buscado && encontrado == false){
            //si coincide marcamos que si fue encontrado
            encontrado = true;

            //guardamos la posicion donde la encontramos
            posicion=i+1;
        }
    }

    cout<<endl;

    //resultado final
    if(encontrado==true){
        cout<<"Numero encontrado en la posicion : "<<posicion<<endl;
    
    }else{
        cout<<"Numero no encontrado en el arreglo"<<endl;

    }
    return 0;

}