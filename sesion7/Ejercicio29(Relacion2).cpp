#include <iostream>

using namespace std;

int main(){
	
	//Declaro las variables
	long min,max,divisor,numero,contador,cifra;
	
	//Pido los datos de entrada
	cout << "Introduzca el minimo del intervalo: ";
	cin >> min;
	cout << endl;
	
	cout << "Introduzca el maximo del intervalo: ";
	cin >> max;
	cout << endl;
	
	cout << "Introduce el numero que quieres buscar(1-9): ";
	cin >> cifra;
	
	//Inicializo las variables
	numero = 0;
	contador = 0;
	divisor = 1;
	
	//Incremento el minimo hasta el maximo
	for(min; min <= max; min++){
		
		//Aumento el divisor
		while(min/divisor > 0){
			
			divisor*=10;
		
		}
		
		while(divisor != 1 ){
		
			numero = (min % divisor) / (divisor/10);
			
			//Si se encuentra una coincidencia aumenta contador
			if(numero == cifra){
				
				contador++;
				
			}
			//Disminuyo el divisor
				divisor/=10;
		
		}
		
	}
	//Imprimo el resultado
	cout << endl;
	cout << endl;
	cout << "Hay " << contador <<  " " << cifra  << " en ese intervalo.";
	
	
	
	
}
