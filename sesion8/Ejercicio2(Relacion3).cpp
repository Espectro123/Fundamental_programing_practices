#include <iostream>

using namespace std;


//Funcion para ver el maximo de 3 valores
double Max(double un_valor, double otro_valor, double el_tercero){
	
	double maximo;
	maximo = 0;
	
	if(un_valor > otro_valor && un_valor > el_tercero){
		
		maximo = un_valor;
		
	}else if(otro_valor > un_valor && otro_valor > el_tercero){
		
		maximo = otro_valor;
		
	}else if(el_tercero > un_valor && el_tercero > otro_valor){
		
		maximo = el_tercero;
				
	}
	
	return maximo;
}


//Funcion main

int main(){
	
	//Variables para el usuario
	double valor1,valor2,valor3;
	
	//Variables inicializadas
	valor1 = 0;
	valor2 = 0;
	valor3 = 0;
	
	//Pido los datos de entrada al usuario
	cout << "Introduzca el primer valor: ";
	cin >> valor1;
	cout << endl;
	
	cout << "Introduzca el segundo valor: ";
	cin >> valor2;
	cout << endl;
	
	cout << "Introduzca el tercer valor: ";
	cin >> valor3;
	cout << endl;
	
	
	//Imprimo el valor maximo obtenido por la funcion
	cout << "El valor maximo es: " << Max(valor1, valor2, valor3);
	
	
}
