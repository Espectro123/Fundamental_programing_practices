#include <iostream>

/*
------------Datos-----------
Nombre: Enrique Casale Linde 
DNI: 75575156P
Grupo: D 
Grupo de practicas: D2
Sesion: 3
----------------------------
*/

/*
Este programa intercambia los valores de tres variables (x y z).
No hay ninguna interaccion con el usuario. 
*/


using namespace std;



int main (){

// Declaro las variables a usar
int x,y,z,aux;

// Asigno valores a las variables x y z
x=10;   y=20;   z=30;

// Imprimo los valores en pantalla antes del intercambio

cout << "Los valores de x y z antes del intercambio son respectivamente: " << x << " " << y << " " << z;

// Hago el intercambio

aux = x;
x=z;
z=y;
y=aux;


cout << "\n\nLos valores finales de x y z son respectivamente: " << x << " "  << y << " " << z;
cout << "\n\n";

system("PAUSE");



}
