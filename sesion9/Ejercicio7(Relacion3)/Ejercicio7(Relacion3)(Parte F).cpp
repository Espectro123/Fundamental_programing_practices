#include <iostream>

using namespace std;


/*
En este apartado no he tenido que modificar el main.  Solo he modificado el 
constructor(double double double) de la clase y he creado las funciones set. 
*/


//Clase para definir el molde de una rectaO
class Recta{
  
 private:
   //Coeficientes de las rectas AX + By + C
  	double A,B,C;

  
 public:
 	
 

	
	//Construtor por defecto de la clase. Inicializa los valores en 0,0,1. Lo que me pedia el apartado E. Ya estaba hecho
	Recta(){
		
		A=0;
		B=0;
		C=1;
		
	}
	
	//Constructor secundario de clase recta
	Recta(double valor_A, double valor_B, double valor_C){

	  
	  A = valor_A;
	  B = valor_B;
	  C = valor_C;
	  
	}
   
   //Funcion de la clase para calcula la pendiente de la recta. Lo tenia hecho desde el apartado a)
   double Pendiente(){
   	
   	double pendiente;
   	
   	pendiente = -A/B;
   	
   	return pendiente;
   	
   }
   
	//Suprimo las funciones set. Parte exclusiva del apratad F
   
	/*
	//Funcion para dar valor al coeficiente A de la recta
	void setA(double set_A){
		A = set_A;
	}
	
	//Funcion para dar valor al coeficiente B de la recta
	void setB(double set_B){
		B = set_B;
	}
	
	//Funcion para dar valor al coeficiente C de la recta
	void setC(double set_C){
		C = set_C;
	}
	
	//Funcion para dar valor a los coeficientes A,B y C de una recta
	void setABC(double set_A,double set_B, double set_C){
		
		A = set_A;
		B = set_B;
		C = set_C;
		
		
	}
	
	*/
	
	
	//Obtengo la coordenada y en funcion de una coordenada x
	double obtenerY(int valor_X){
		double valor_Y;
		
		valor_Y = ((-C)-(valor_X*A) / B);
		
		return valor_Y;
	}
	
	//Obtengo la coordenada x en funcion de una coordenada y
	double obtenerX(int valor_Y){
		double valor_X;
		
		valor_X = ((-C)-(valor_Y*A) / B);
		
	   return valor_X;
	}
	
	
};


int main(){
	
	//Varaibles para la tercera recta
	double primeraRecta_A,primeraRecta_B,primeraRecta_C;
	
	//Varaibles para las segunda recta
	double segundaRecta_A,segundaRecta_B,segundaRecta_C;
	
	//Pido los datos de la primera recta
	cout << "Introduzca el valor A de la primera recta: ";
	cin >> primeraRecta_A;
	cout << endl;
	
   cout << "Introduzca el valor B de la primera recta: ";
	cin >> primeraRecta_B;
	cout << endl;
	
	cout << "Introduzca el valor C de la primera recta: ";
	cin >> primeraRecta_C;
	cout << endl;
	
	//Pido los datos de la segunda recta
	cout << "Introduzca el valor A de la segunda recta: ";
	cin >> segundaRecta_A;
	cout << endl;
	
	cout << "Introduzca el valor B de la segunda recta: ";
	cin >> segundaRecta_B;
	cout << endl;
	
	cout << "Introduzca el valor C de la segunda recta: ";
	cin >> segundaRecta_C;
	cout << endl;
	
	//Defino la primera recta
	Recta primeraRecta(primeraRecta_A,primeraRecta_B,primeraRecta_C);
	
	//Defino la segunda recta
	Recta segundaRecta(segundaRecta_A,segundaRecta_B,segundaRecta_C);
	
	//Imprimo el valor de la primera pendiente
	cout << "La pendiente de la primera recta es: " << primeraRecta.Pendiente() << endl;
	
	//Imprimo el valor de la segunda pendiente
	cout << "La pendiente de la segunda recta es: " << segundaRecta.Pendiente() << endl;
	
}
