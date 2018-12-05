#include <iostream>

using namespace std;

int main(){
	
	int filasA,filasB;
	int columnasA,ColumnasB;
	
	
	cout << "Introduce el numero de filas de la Matriz A: ";
	cin >> filasA;
	cout << endl;
	
	cout << "Introduce el numero de columnas de la Matriz A: ";
	cin >> columnasA;
	cout << endl;
	
		
	cout << "Introduce el numero de filas de la Matriz B: ";
	cin >> filasB;
	cout << endl;
	
	cout << "Introduce el numero de columnas de la Matriz B: ";
	cin >> columnasB;
	cout << endl;
	
	if(columnasA == filasB){
		
		
		//Reservo el espacio en memoria de las matrices y las declaro en el caso de que se puedan multiplicar
		int MatrizA[filasA][columnasA]
	   int MatrizB[filasB][columnasB]
	   
	   
	   //Bucles para introducir el valor de cada poscicion de la matriz A
	   for(int i = 0; i < filasA; i++){
	   	for(int j = 0; j < columnasA; j++){
	   		
	   		
	   		cout << "Introduzca la posicion [" << i << "][" << j "] de la matriz A: ";
	   		cin >> MatrizA[i][j];
	   		cout << endl;
	   		
	   		
	   	}
	   }
		
		
		//Bucles para introducir el valor de cada posicion de la matriz B
		for(int i = 0; i < filasB; i++){
	   	for(int j = 0; j < columnasB; j++){
	   		
	   		
	   		cout << "Introduzca la posicion [" << i << "][" << j "] de la matriz B: ";
	   		cin >> MatrizB[i][j];
	   		cout << endl;
	   		
	   		
	   	}
	   }
		
		
		
		
		
	}else{
		
		 cout << "Las Matrices no se pueden multiplicar." << endl;
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
