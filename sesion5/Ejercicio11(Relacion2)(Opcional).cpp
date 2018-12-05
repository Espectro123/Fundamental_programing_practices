#include <iostream>

using namespace std;


int main(){
	
	//Declaro las variables a usar
	int sucursal,codigo,producto;
	int sucursal1,sucursal2,sucursal3;
	

	// Ejecuto el ciclo do while
	do{
		
	cout << "Introduzca la surcursal: ";
	cin >> sucursal;
	
	if(sucursal != -1){
	cout << "Introduzca el codigo del producto: ";
	cin >> codigo;
	cout << "Introduzca el numero de productos vendidos: ";
	cin >> producto;
   }
	
	
	// Depende de la sucursal la cantidad de productos se guardan en una variable o en otra
	if(sucursal == 1){
		
		sucursal1 = sucursal1 + producto;
		
		
	}
	else if(sucursal == 2){
		
			sucursal2 = sucursal2 + producto;
		
		}else if(sucursal == 3){
			
			sucursal3 = sucursal3 + producto;
			
		}
	
		// Si sucursal es -1 sale del ciclo
	}while(sucursal != -1);
	
	
	//Calculo que surcursal tiene mayor numero de productos vendidos e imprimo
	if(sucursal1 > sucursal2 && sucursal1 > sucursal3){
		
		cout << "Sucursal: " << 1 << endl;
		cout << "Numero de productos vendidos: " << sucursal1;
		
	}else if(sucursal2 > sucursal1 && sucursal2 > sucursal3){
		
		cout << "Sucursal: " << 2;
		cout << "Numero de productos vendidos: " << sucursal2;
		
		}else if(sucursal3 > sucursal1 && sucursal3 > sucursal2){
			
				cout << "Sucursal: " << 3;
				cout << "Numero de producos vendidos: " << sucursal3;
			
			}
				else{
				
					cout << "Se han vendido los mismos productos en dos sucursales";
				
			}
	
	
	
	
	
}
