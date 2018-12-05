#include <iostream>

using namespace std;

int main(){
	
	//Variables del programa
	int exponente;
	double base,aux;
	//Variables de los ciclos for
	int i;
	
	
	cout << "Introduzca la base de la potencia: ";
	cin >> base;
	cout << endl;
	
	aux = base;
	
	cout << "Introduzca el exponente: ";
	cin >> exponente;
	cout << endl;
	
	
	for(i = 1; i < exponente; i++){
	
		base = base * aux;
	
	}
	
	cout << "El valor de la operacion introducida es: " << base << endl;
	cout << endl;
	
	aux = exponente;
	
	for(i = 1; i < exponente; i++){
		
		aux *= (exponente-1);
		exponente--;
		
		
	}
	
	cout << "El factorial del exponente es: " << aux;
	
}






















