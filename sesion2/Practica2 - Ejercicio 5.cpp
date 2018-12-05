#include <iostream>
		
	/*
	------------Datos-----------
	Nombre: Enrique Casale Linde 
	DNI: 75575156P
	Grupo: D 
	Grupo de practicas: D2
	----------------------------
	*/
	
			
	/*
	Este programa divide el total de las ganancias entre 4 personas. 1 diseñador y 3 fabricantes
	de los cuales el diseñador cobra el doble que los fabricantes
	*/
		
		
	using namespace std; 
		
	int main(){
		
 		//declaro las varibles
		double total_Ventas;

		double disenador;

		double fabricante;
    
	   double aux;
		
	
		// Pido que se ingrese el total de las ganancias
		cout << "Ingrese a continucion el total de las ganancias por favor: ";
		cin >> total_Ventas;
		
	
		// Calculo el dinero correspondiente a cada uno
		aux = total_Ventas/5;
		disenador = aux*2;
		fabricante = aux;
		
		
		// Muestro en pantalla los resultados obtenidos
		cout << "Las ganancias del disenador son: " << disenador << " euros" << endl;
		cout << "\n\n";
		cout << "Las ganancias de los 3 fabricantes son: " << fabricante << " euros"<< endl;
		
		
		}
