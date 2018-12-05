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
	Este programa separa un numero de tres cifras con dos espacios entre cada  unidad del numero introducido
	*/
	
	using namespace std;
	
	int main(){
		
	// Declaro las variables
	int numero,centena,decena,unidad;
	
	// Pido el numero de 3 cifras
	cout << "Introduzca un numero de 3 cifras por favor: ";
	cin >> numero;
	
	// Obtengo la unidad, la decena y la centena del numero con el operando modulo
	unidad  = numero % 10;
	decena  = (numero % 100  /10);
	centena = (numero % 1000 /100);
		
	// Imprimo el resultado en la consolo
	cout << "\n\nSu numero ha sido separado \n\n";
	cout << centena << "  " << decena << "  " << unidad;
	
	}
