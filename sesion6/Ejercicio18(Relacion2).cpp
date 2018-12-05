#include <iostream>
#include <cmath>

/*
Este programa pide un numero  y te dice si un numero es desgarrado o no.
Un numero desgarrado es aquel que al separarse en algun tipo de conjunto
y posteriormente sumarlos y elevar el numero resultante al cuadrado,
produce el mismo numero como salida.
*/


using namespace std;

int main(){


int divisor,numero,cociente,parte1,parte2,anterior,expresion,salir;
int i;
bool bandera;

salir = 0;
bandera = true;
anterior = 0;
numero = 1;
divisor = 1;




cout << "Introduzca el numero: ";
cin >> numero;



while( (numero/divisor) != 0){
	
	divisor = divisor * 10;
	cout << "Divisor: " << divisor << endl;
}



parte1 = (numero % divisor) / (divisor/10);
anterior = parte1;
parte2 = (numero % divisor);
parte2 = parte2 - (parte1 * (divisor/10));
expresion = pow((parte1 + parte2),2);
if(expresion == numero){
	
	cout << "El numero es un numero desgarrable.";
	!bandera;
	
}
divisor /= 10;

while(salir == 0 && divisor > 1){

	parte1 = (numero % divisor) / (divisor/10);
 	parte1 = (anterior * 10) + parte1;
 	anterior = parte1;
 	parte2 = numero % (divisor/10);
 	expresion = pow((parte1 + parte2),2);
   divisor /= 10;
   
	 if(expresion == numero){
 		
 		cout << endl;
 		cout << "El numero introducido es desgarrable.";
 		salir = 1;
 		
 	}
 	
    if(divisor == 1){
 		
 		cout << "El numero introducido no es desgarrable.";
 		
 	}

}
  
}
