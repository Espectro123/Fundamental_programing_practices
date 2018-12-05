#include <iostream>

using namespace std;

int main(){
	
	//Variables para el usuario y programador
	int r,valor_Inicial,tope,aux;
	
	//Variables del for
	int i;

	cout << "Introduzca el valor inicial: ";
	cin >> valor_Inicial;
	cout << endl;
	
	cout << "Introduzca el  valor K  o tope hasta el que quieres llegar: ";
	cin >> tope;
	cout <<endl;
	
	cout << "Introduzca el valor r: ";
	cin >> r;
	cout << endl;
	
	aux = valor_Inicial;
	
	for(i = 0; i < tope; i++){
		
		valor_Inicial = (valor_Inicial * r) - 1;
		
		aux += valor_Inicial;
	
	}
	
	
	cout << "El valor final de la progresion geometrica es: " << aux << endl;
	
	
}
