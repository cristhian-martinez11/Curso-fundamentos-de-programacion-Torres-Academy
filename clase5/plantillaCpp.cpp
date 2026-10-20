/*PLANTILLA BASE PARA TODO PROGRAMA EN C++
Autor: Cristhian Martinez
fecha 14/10/2026

Plantilla para copiar siempre

#include <iostream>
#include <string> //(opcional, solo si se usa texto)
using namespace std;

int main() {
1)Declarar variables
2)Pedir datos al usuario (entradas)
3)Procesos (calculos,operaciones,etc)
4) Mostrar resultados (salidas)

return 0;
}
*/

/*
EXPLICACION DE CADA PARATE DE LA PLANTILLA:

1) #include <iostream>
    esto le da al programa la capacidad de mostrar funciones de entrada y salida, como cout para mostrar el mensaje en la pantalla
    y cin para recibir datos del usuario.

2)using namespace std;
    Esto es para no escribir "std::" antes de cada funcion de la biblioteca estandar, como cout, y cin.
    Es una forma de simplicar codigo.
    
3) int main(){...}
    El main es la puerta de entrada. Es la funcion principal cuando el programa comienza.
    El codigo que quieras ejecutar debe estar dentro de esta funcion.

4)Declaraciones de variables
    Aqui es donde se define las variables que se van a usar en el programa. Por ejemplo:
        int edad, o string nombre;

5) cout << "texto"
    Esto imprime en pantalla el texto que se encuentra entre comillas.
    Es la forma de mostrar mensajes al ususario.Pensemos en esto como la salida;

6) cin >> variable
    Esto es para recibir datos del usuario. El programa se detiene y espera a que el usuario ingrese un valor;
    que luego almacena en la variable;

7) endl;
    Significa salto de linea (como si fuera un enter en un archivo de texto)

8) return 0;
    Esto indica que el programa finalizo correctamente. Es una forma de decirle al sistema operativo que todo salio bien.

9) {} (llaves)
   Marcan el bloque de codigo (inicio y fin)

10) ; (punto y coma)
    Terminar una isntruccion. Si falta, da error.

11) // (cometnario)
    Comenta una linea.

12) /*...
    Me sirve para comentar varias lineas de codigo 
*/

/*
TIPOS DE DATOS BASICOS EN C++:
int-> enteros (1,2,-3)
float/doubles->(4.14,12,5....)
char->un caracter ("a")
string-> texto("Hola") (requiere usar #include <string>)
bool-> verdadero/falso (true/false)
*/

/*
CONDICIONALES EN C++

Estructura basica para un (if/else)

if (condition){
    //se ejecuta si la condicion es verdadera
}else{
    //se ejecuta si la condicion es falsa
}


VARIAS CONDICIONES (else if)

if(nota>=9){
    cout << "excelente" <<endl;
}else if (nota>=7){
    cout << "aprobado" <<endl;
}else{
    cout << "reprobado" <<endl;
}
*/


/*
OPERACIONES DE COMPARACION
= asignacion
== igual a(comparacion)
!= diferente de
< than menor que
> mayor que
<= menor o igual que
>= mayor o igual que
*/

/* OPERADORES LOGICOS

&& AND: ambas condiciones deben cumplirse
|| OR: se cumple una u otra
! NOT: negacion
*/
