#include <iostream>

using namespace std;

/*
Este programa te dice el numero de numeros repetidos de una secuencia segun el orden en el que se encuentren

*/


int main(){
	
	long int secuencia,anterior,divisor,numero,contador;
	divisor = 1;
	bool bandera = true;
	
	
	cout << "Introduzca la secuencia: ";
	cin >> secuencia;
	
	
	while ((secuencia/divisor) > 1){
		
		divisor*=10;
	
	}
	
	
	numero = (secuencia%divisor)/(divisor/10);
	anterior = numero;
	divisor /= 10;
	contador = 2;

	
	for(int i = 0; divisor > 1; i++){
		
		anterior = numero;
		numero = (secuencia%divisor)/(divisor/10);
	
	
		
				if(anterior == numero){
			
					contador++;
			
				}
				 else{
			
						cout << contador<< "-" << anterior << " ";
			
					contador = 1;
			       
				}
		      
		      if(divisor == 10){
		      	
		      		cout << contador<< "-" << anterior << " ";
		      	
		      }
		
		  
		  divisor/=10;
	  
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
