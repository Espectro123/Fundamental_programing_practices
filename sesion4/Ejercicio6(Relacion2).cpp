#include <iostream>

/*
Este programa pasa una letra mayuscula a minuscula y viceversa
En el caso de la introduccion de otro carater(Unos que no sea una letra) este se imprime tal cual se ha introducido
*/

using namespace std;

const int RANGO = 'A' - 'a';


int main(){


char letra_original, letra_convertida;

cout << "Introduzca el caracter: ";
cin >> letra_original;

// Hago un filtro para ver si la letra es mayuscula,minuscula o es otrocaracter. En ese orden

if(letra_original >= 'A' && letra_original <= 'Z'){

//Le resto el rango a letra original para calcular la letra mayuscula
letra_convertida = letra_original - RANGO;

}

else if(letra_original >= 'a' && letra_original <= 'z'){

		//Le sumo el rango a letra original para calcular la letra minuscula
		letra_convertida = letra_original + RANGO;

	}

	else{

		// Si el caracter introducido no es una letra se almacena simplemente en letra_convertida
		// y se guarda para luego mostrarlo.

			letra_convertida = letra_original;

}

cout << "El caracter guardado en la variable letra_convertida es: " << letra_convertida;




}
