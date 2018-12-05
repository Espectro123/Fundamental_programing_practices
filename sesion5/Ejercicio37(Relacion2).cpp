#include<iostream>

using namespace std;

int main(){
	
	//Declaro e inicializo las variables
	int numero,divisor;
	int contador = 1;
	int vector[30];
	divisor = 1;
	
	//Pido la introduccion del numero
	cout << "Introduzca el numero a separar: ";
	cin >> numero;
	
	// Primer while. Obtengo el numero de que tiene que tener el divisor dependiendo del numero introducido
	while((numero/divisor) > 0){
						
		divisor *= 10;
	
	}
	
	// Segundo while. Obtengo las unidades del numero y las imprimo en pantalla
	while(divisor > 0){
		
		
			vector[contador] = (numero % divisor) /(divisor/10);
		
			divisor = divisor / 10;
			
	      contador++;
				else{
		
				divisor--;
				  
       		}
	}		
	
	for(int i = 0; i < contador; i++){
		
		cout << " " << vector[i] << endl;
		
	}
	
	
	}
		

