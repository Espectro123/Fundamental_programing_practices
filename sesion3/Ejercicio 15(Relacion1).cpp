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
 Este progrma pide un numero ( del 1 al 9 ) lo almacena en un char,
 lo pasa a un entero, y te muestra el numero introducido. 
 */
 
 using namespace std;
 
 
 int main(){
 	
 	int entero;
 	char car; 
 	
 	cout << "Introduzca el numero para almacenarlo en char: ";
 	cin >> car;
 	
 	// Utilizo el valor del ASCII del 0 para restarselo al numero del 1 al 9 o al 0
 	
 	 entero = car -'0';
	 
	 cout << "\n";
	 
	 cout << "El valor en int del numero es: " << entero;	
	 
	 
 	
 	
 	
 	
 	
 	
 }
