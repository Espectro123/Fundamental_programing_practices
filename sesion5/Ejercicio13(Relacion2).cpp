#include <iostream>

using namespace std;

int main(){
	
	int dato,aux;
	
	aux = 0;
	
	cout << "Le vamos a pedir que introduzca una serie de numeros."<< endl;
	cout << "Cuando quiera salir para introduzca 0."<< endl;
	
	cout << "Introduzca un numero: ";
	cin >> dato;
	
	aux = dato;
	
	if(dato != 0){
	
	do{
		
   cout << "Introduzca otro numero: ";
	cin >> dato;
	
		if(dato < aux && dato != 0){
		
		aux = dato;
		
		}
		
	}while(dato != 0);
		
		
		cout << "El numero mas pequeno que ha introducido es: " << aux << endl;
		
	
	
}
	system("PAUSE");
	
	
}
