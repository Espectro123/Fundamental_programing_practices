#include <iostream>

using namespace std;

int main(){
	  
	  
	  
	//Primera parte del ejercicio 32. Modificar el ejercicio 30 para cualquier valor
	  
    int modificador;
	 
	cout << "Introduzca el numero: ";
	cin >> modificador;
	
		
	for( int i = 1 ; i < modificador; i++){
		
		
		for(int j = i; j < modificador; j++){
			
			
			cout << j;
			
			
		}
		
		cout << endl;
		
	}
	
	//Segunda parte del ejercicio 32. Modificar el ejercicio 31 para cualquier valor
	
	cout << "\n\n\n";
	
	cout << "Introduzca el numero: ";
	cin >> modificador;
	
	
	 for(int i = 1; i < modificador +1; i++){
   	
   	
   	for(int j = i; j <  modificador +i ; j++ ){
   		
   		cout << j;
   		
   		
   	}
   	
   	cout << endl;
   	
   }
	
	
	
}
