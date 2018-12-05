#include <iostream>

/*
Este programa lee dos datos(Edad y salario) de una persona
y en funcion de unas condiciones se lo aumenta un 4%, un 3%
o ambos
*/

using namespace std;


int main(){

//Declaro las variables de la persona y una auxiliar
int edad,salario,aux;

cout << "Introduce la edad de la persona: ";
cin >> edad;


cout << "Introduce el salario de la persona: ";
cin >> salario;

// Guardo en aux salario por si al aumentar el salario por la edad este sobrepasa 299 y no se le aplica
// la subida por el bajo salario.
aux = salario;

//Creo el filtro de los datos

if( edad < 35 || edad > 65){

salario =  salario + ((4*salario)/100);
          
   	if(aux < 300){
			 
    	salario = salario + ((3*salario)/100);

   	}
cout << "El salario modificado es: " << salario;
}

else{

cout << "No se aplica ninguna subida";

}

}
