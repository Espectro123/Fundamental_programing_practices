#include <iostream>

using namespace std;

int main(){
	
	int numero,expresion,exponente;
	int i,j;
	numero = 1;
	exponente = 1;
	
	
	for(i = 1; i < 102; i++){
	  	
	  for(j = 0; j < numero; j++){
	  	
	  	exponente *= (-1);
	  	
	  	
	  	
	  }
	  		
      expresion = ((exponente) * ((numero*numero) -1)) / (2*numero);
		
		cout << "El valor es: " << expresion << endl;
		numero++;
	}

}
