#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	int feliz,numero,divisor,total,i,grado;
	bool bandera = true;
	
	cout << "Introduzca un numero para comprobar si es feliz: ";
	cin >> feliz;
	
	cout << "Introduzca el grado maximo de numero feliz a calcular: ";
	cin >> grado;
	
	divisor = 1;
	total = 0;
	
	/*
	Tambien pido el grado maximo para calcular un numero feliz, ya que si un numero
	resulta ser  "no feliz" entrara en un ciclo sin fin
	*/
	
	
	for(i = 0; i <= grado && bandera; i++){
		
	    while(feliz/divisor > 0 && bandera){
		 
          divisor *= 10;		
		     
		 }
		
		 while(divisor != 1 && bandera){
		 	
		 	
		 numero = (feliz%divisor)/(divisor/10);
		 
		 total = total + pow(numero,2);
		 
		 divisor /= 10;
		 
		
		 	
		 }
		 
		 if(total != 1){
		 
		 	feliz = total;
		   total = 0;	
		 }else{
		 	
		 	bandera = false;
		 	
		 }
		 
		 	
	}
	
	cout << endl;
	cout << endl;
	
	if(total == 1){
		
		cout << "El numero introducido es un numero feliz de rango " << i;
		
		
	}else{
		
		
		cout << "El numero introducido no es un numero feliz.";
		
		
	}
	 
	
}
