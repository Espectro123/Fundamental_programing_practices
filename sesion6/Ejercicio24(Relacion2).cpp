#include <iostream>

using namespace std;

int main(){
	
	//Variables del ejercicio 15
	double capital,interes,total,acumulador;
	int years;
	acumulador = 0;
	
	//Variables del ejercicio 12
	int tope,aux;
   aux = 0;
   
	
	cout << "Primer programa. Ejercicio 15" << endl;
	
	cout << "Introduzca el capital:";
	cin >> capital;
	
	cout << "Introduzca el interes:";
   cin >> interes;
   
   cout << "Introduzca el numero de 'years' a invertir:";
   cin >> years;
	
	for(years; years > 0; years--){
		
		total = capital + capital * (interes/100.0);
   	capital = total;
   	acumulador++;
		cout << "Total en el 'years' numero " << acumulador << "= " << capital << endl; 	
		
		
	}
	
	
	cout << "\n Segundo Programa. Ejercicio 12" << endl;
	
	cout << "Introduzca el numero: ";
	cin >> tope;
	
	
		
	
		
		
	while(tope < 0){
		cout << "Introduzca el numero: ";
    	cin >> tope;
		
	}
	
	for(aux; aux < tope; aux++){
		
		
		tope= tope - aux;
		
		if(tope%2 == 0){
			
				cout << "Este numero es divisor:" << tope << endl;
		}
		
		tope = tope + aux;		
		aux++;	
		
		
	}
	
			if(tope == 0 || tope == 1){
		
				cout << "El numero que has introducido es 0 o 1 por lo que no hay divisores.";
		
			}

}
