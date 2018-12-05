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
   Este ejercicio corresponde al ejercicio 1 de la relacion 2.
   Se trata de un programa en el que introduces dos numeros cualesquiera
   y el programa te dice si su division, genera un numero entero.
   El programa compara los numeros para las dos combinaciones posibles.		
  */

using namespace std;


int main(){

// Declaro la variables. Me ha parecido correcto declararlas como numero1 y numero2
// ya que no hay ningun otro contexto para nombrarlas
int numero1,numero2;


cout << "Introduzca el primer numero: ";
cin >> numero1;

cout << endl;

cout << "Introduzca el segundo numero: ";
cin >> numero2;

cout << endl;

if((numero1 % numero2 == 0) || (numero2 % numero1 == 0)){

cout << "Los numeros introducidos dan como resultado un entero";


}else {

cout << "Los numeros introducidos no dan como resultado un entero";

}




}
