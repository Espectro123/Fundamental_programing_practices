	#include <iostream>
	
	/*
	------------Datos-----------
	Nombre: Enrique Casale Linde 
	DNI: 75575156P
	Grupo: D 
	Grupo de practicas: D2
	----------------------------
	*/
	
	
	/*
	Este programa intercambia las edades de dos personas llamadas juan y pedro
	*/
	
	
	using namespace std; 
	
	int main(){
	
	// Declaro las variables
	
	int pedro;
	int juan;
	int aux;
	
	
	// Pido la edad de pedro y la muerto en pantalla
	
	cout << "Introduzca la edad de Pedro: ";
	cin >> pedro;
	cout << "\n\n";
	
	
	// Pido la edad de juan y la muestro en pantalla
	
	cout << "Introduzca la edad de Juan: " ;
	cin >> juan;
	cout << "\n\n";
	
	
	// Intercambio las edades con una variable auxiliar
	
	aux = pedro;
	pedro = juan;
	juan = aux;
	
	
	// Muestro las edades intercabiadas en la consola
	
	
	cout << "-------Intercambiando edades----";
	
	cout << "\n\n";
	
	cout << "---> La edad de Pedro es ahora: " << pedro;
	
	cout << "\n";
	
	cout << "---> La edad de Juan  es ahora: " << juan;
	
	cout << "\n\n";
	
}
