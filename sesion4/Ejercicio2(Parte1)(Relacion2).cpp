#include <iostream>

/*
Este programa lee dos datos(Edad y salario) de una persona
y en funcion de unas condiciones se lo aumenta un 5% o no
*/

using namespace std;


int main(){

//Declaro las variables de la persona
int edad,salario;

// Pregunto la edad y el salario de la persona
cout << "Introduce la edad de la persona: ";
cin >> edad;


cout << "Introduce el salario de la persona: ";
cin >> salario;

// Filtro los datos y si la persona cumple los requisitos le aumento el salario un 5%
if(salario < 300 && edad > 65){
	
salario =  salario+ ((5*salario)/100);

cout << "Su nuevo salario es: " << salario;

}

else{

cout << "La subida no es aplicable";

}

}
