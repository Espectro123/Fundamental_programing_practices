#include <iostream>

using namespace std;

/*
Este programa te obtiene los divisores de un numero que introduzcas que sea positivo
y mayor que 0 y 1. En estos dos  ultimos casos se imprime un mensaje de error
*/


int main(){
	//Declaro las variables e inicializo aux
	int tope,aux;
	aux = 0;
	
	cout << "Introduzca el numero: ";
	cin >> tope;
	
	//Filtro para comprobar que el numero es positivo
	if(tope < 0){
	
	do{
		
		cout << "Introduzca un numero positivo para seguir.";
		cin >> tope;
		
	}while(tope < 0);
}
	//Bucle para sacar los divisores
	while(aux < tope){
		
		tope= tope - aux;
		
		if(tope%2 == 0){
			
				cout << "Este numero es divisor:" << tope << endl;
		}
		
		tope = tope + aux;		
		aux++;		
	}
	
	//En caso de que el numero sea 0 imprime este mensaje
			if(tope == 0 || tope == 1){
		
				cout << "El numero que has introducido es 0 o 1 por lo que no hay divisores.";
		
			}
			
			system("PAUSE");
	
}
