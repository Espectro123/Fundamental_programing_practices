#include <iostream>


using namespace std;

const int RANGO ='a'-'A';
enum Mayuscula {mayuscula= 1,minuscula};



//Funcion tipo enum para saber si es mayuscula o minuscula
Mayuscula Capitalizacion(char caracter){
	
	Mayuscula queEs;
	
	if(caracter >= 'A' && caracter <= 'Z'){
		
		 queEs = mayuscula;
		
		
	}else if(caracter >='a' && caracter <= 'z'){
		
		 queEs = minuscula;
		
		
	}
	
	return queEs;
	
}

//Funcion para pasar minusculas a mayusculas
char Convierte_a_Mayuscula(char caracter){
	
	if(Capitalizacion(caracter) == 2){
		
			caracter = caracter - RANGO;
		
	}
	
	return caracter;
	
}

//Funcion para pasar Mayusculas a minusculas
char Convierte_a_Minusculas(char caracter){
	
		
	if(Capitalizacion(caracter) == 1){
		
		caracter = caracter + RANGO;
		
	}
	
	return caracter;
	
	
	
}

//Funcion que cambia mayusculas a minusculas y viceversa. Ademas devulve los caracteres no validos
char CambiaMayusculaMinuscula(char caracter){
	
	
	
	if(Capitalizacion(caracter) == 1){
		
		caracter = Convierte_a_Minusculas(caracter);
		
	}
	 else if(Capitalizacion(caracter) == 2){
		
		caracter = Convierte_a_Mayuscula(caracter);
		
		
    }else{
    	
    	caracter = caracter;
    	
    }
	
	return caracter;
}


int main(){
	
char minuscula = 'b', mayuscula = 'B', caracter ='@';
	
	cout << "Sale B?: " << Convierte_a_Mayuscula(minuscula);
	cout << endl;
	cout << "Sale b?: " << Convierte_a_Minusculas(mayuscula);
	cout << endl;
	cout << "Paso B a b: " << CambiaMayusculaMinuscula(mayuscula) << " Paso b a B: " << CambiaMayusculaMinuscula(minuscula) << endl;
	cout << "Muestro el caracter: " << Convierte_a_Mayuscula(caracter) << endl;
}
