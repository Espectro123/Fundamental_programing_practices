#include <iostream>

using namespace std;

int main(){
	
	int filas    = 0;
	int columnas = 0;
   int elemento = 0;
		
	cout << "Introduzca el numero de filas: ";
	cin >> filas;
	cout << endl;
	
	cout << "Introduzca el numero de columnas: ";
	cin >> columnas;
	cout << endl;
	
   
   int Matriz[filas][columnas];
   int MatrizT[columnas][filas];
   
   for(int i = 0; i < filas; i++){
   	
   	for(int j = 0; j< columnas; j++){
   		
   		
   		cout << "Introduzca un valor en la matriz: ";
   		cin >> elemento;
   		Matriz[i][j] = elemento;
   		MatrizT[j][i] = elemento;
   		
   		cout << endl;
   		
   		
   		
   	}
   	
   	
   }
   
   
   for(int i = 0; i < filas; i++){
   	
   	for(int j = 0; j < columnas; j++){
   		
   		
   		cout << Matriz[i][j] << " ";
   		
   	}
   	
   	cout << endl;
   }
   
   cout << endl;
   
   for(int i = 0; i < columnas; i++){
   	
   	for(int j = 0; j < filas; j++){
   		
   		cout << MatrizT[i][j] << " ";
   		
   		
   		
   	}
   	cout << endl;
   	
   	
   }
	
	
	
	
	
	
}
