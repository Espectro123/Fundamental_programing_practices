O#include <iostream>

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
Este programa realiza 3 comprovaciones para saber algo sobre los valores introducidos
*/


using namespace std;




int main(){
	
	bool comprobador;
	char letra;
	int valor_Letra,edad,year;
	
	// Parte 1. Comprobando si una letra es minuscula o no. Lo hago por medio del valor de ASCII.
	
	cout << "Introduzca una letra para saber si es minuscula o no: ";
	cin >> letra;
	
	valor_Letra = letra;
	
	comprobador = (valor_Letra  >= 97 && valor_Letra <= 122);
	
	cout << "\n";
	cout << "Si sale 1 has introducido una letra minuscula si sale 0 no lo has hecho";
	cout << "\n";
	cout << "El resultado de la comprovacion es: " << comprobador;
	cout << "\n\n";
	
	
	// Parte 2. Comprobando el rango de una edad < 18 y > 65
	cout << "\n";
	cout << "Ahora debes de intorducir una edad para un sujeto imaguinario.\n";
	cout << "\n";
	cout << "Si la edad es menor de 18 o mayor de 65 el resultado sera un 1.\n";
	cout << "\n";
	cout << "Introduca la edad del sujeto: ";
	cin  >> edad;
	
	comprobador = (edad < 18 || edad > 65);
	
	cout << "\n";
	cout << "El resultado de la comprobacion es: " << comprobador;
	cout << "\n\n";
	
	// Parte 3. Comprobando si un año es bisiesto o no
	cout << "Ahora toca introducir un año para comprobar si es bisiesto.";
	cout << "\n\n";
	cout << "Introduce el año para comprobar si es bisiesto.";
	cin >> year;
	
	comprobador = (year % 4 == 0 || year % 400 == 0) && (year % 100 != 0);
	
	
	cout << "\n";
	cout << "Si sale 1  es bisisteo. Si no, no lo es.";
	cout << "\n";
	cout << "La comprobacion da como resultado: " << comprobador;
	

}
