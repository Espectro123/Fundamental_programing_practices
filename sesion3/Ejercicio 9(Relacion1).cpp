#include <iostream>
/*
------------Datos-----------
Nombre: Enrique Casale Linde 
DNI: 75575156P
Grupo: D 
Grupo de practicas: D2
Sesion: 3
----------------------------
*/

/*
Este programa corresponde con el ejercicio 9 de la relacion 1.
Su funcion es la de pedir al usuario que introduzca un numero de 
horas minutos y segundos(aunque sea 8000 minutos) y el programa se encarga
de pasar dichos valores a  valores posibles.
*/

using namespace std;


int main(){
	
	// declaro las variables a usar
	
	int dia,hora,minuto,segundo;
	
	// Pido la introduccion de las varaibles para los calculos
	
	cout << "Introduzca el numero de horas: ";
	cin >> hora;
	
	cout << "\n";
	
	cout << "Introduzca el numero de minutos: ";
	cin >> minuto;
	
	cout << "\n";
	
	cout << "Introduzca el numero de segundos: ";
	cin >> segundo;
	
	
	//Claculos los dias,horas,minutos y segundos
	
	   
	   minuto = (segundo/60)+minuto;
	   segundo = segundo % 60;
	   hora = (minuto/60) + hora;
	   minuto = minuto % 60;
	   dia = (hora/24);
	   hora = hora % 24;
	   
	   
	 
	
	
	
	//Imprimo el resultado final en pantalla
	
	cout << "\n";
	
	cout << "El tiempo introducido es: " << dia << " dias " << hora << " horas " << 
	
	minuto << " minutos y " << segundo << " segundos"; 
	
	
	
}
