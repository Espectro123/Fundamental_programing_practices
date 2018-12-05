#include <iostream>


using namespace std;

const int RANGO = 'A' - 'a';


int main(){

//Declaro las variables que dicta el enunciado
char letra_original, letra_convertida;

//Pido la entrada del caracter
cout << "Introduzca el caracter: ";
cin >> letra_original;

  
//Veo si el caractert esta entra las letras mayusculas
if(letra_original >= 'A' && letra_original <= 'Z'){
	
	letra_convertida = letra_original - RANGO;
	
	}
	
else{
	
	letra_convertida = letra_original;
	
	}

//Imprimo el resultado en pantalla
cout << "El caracter guardado en la variable letra_convertida es: " << letra_convertida;




}
