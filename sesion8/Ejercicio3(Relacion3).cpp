#include <iostream>

using namespace std;


void baseYpotencia(double base, int exponente, double aux){
	
		
	for(int i = 1; i < exponente; i++){
	
		base = base * aux;
	
	}
	
	cout << "El valor de la operacion introducida es: " << base << endl;
	cout << endl;
	
	aux = exponente;
	
	for(int i = 12; i <= exponente; i++){
		
		aux *= (exponente);
		exponente--;
		
		
	}
	
	cout << "El factorial del exponente es: " << aux;
	
	
}




int main(){
	
	
	double base_P,aux_P;
	int exponente_P;
	
	cout << "Introduzca la base de la potencia: ";
	cin >> base_P;
	cout << endl;
	
	aux_P = base_P;
	
	cout << "Introduzca el exponente: ";
	cin >> exponente_P;
	cout << endl;
	
	
   baseYpotencia(base_P,exponente_P,aux_P);
	
}
