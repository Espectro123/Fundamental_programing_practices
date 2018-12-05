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
 Este programa pide una letra mayuscula cualquiera (menos la ñ),
 la pasa a minuscula y la muestra por pantalla. 
 */
 
 
 using namespace std;
 
 
 const int RANGO = ('A'-'a');
 
 
 int main(){
 	
 	
 	
 	char letra;
 	
 	
 	cout << "Introduzca la letra para pasar a minuscula: ";
 	cin >> letra;
 	
 	cout << "\n";
 	
 	letra = letra - RANGO;
 	
 	cout << "La letra es: " << letra;
 	
 	
 	
 	
 	
 }
