#include <iostream>
/*
Este programa calcula el precio de un billete de avion siguiendo una serie de condiciones.
--> Si el trayecto es menor de 200 kilometros, el precio es siempre 150
--> Si el trayecto es superior a 200 le suma 10 centimos por kilometro al precio del billete
--> Tras superar las 600 kilometros se aplican varias rebajas (3% hasta 1100 y 4% para mas de 1100 kilometros) "No son acumulativos"
--> Tambien se aplica un descuento por haber sido cliente antes. "Si se acumula con otro descuento"
--> Tambien se contempla la posibilidad de que solo se puede aplicar un desceunto a la vez
*/

using namespace std;

const double TARIFA_INICIAL = 150.0;

int main(){

double distancia,precio,precio_superior;
bool anterioridad;
char seleccionar;

cout << "Distancia hasta el destino: ";
cin >> distancia;
cout << endl;
cout << "Ha viajado con anterioridad con esta compañia (Y/N): ";
cin >> seleccionar;
anterioridad = (seleccionar == 'Y' || seleccionar == 'y');
precio_superior = TARIFA_INICIAL + ((distancia - 200) * 0.10);
cout << endl;



if(distancia < 200){

precio = TARIFA_INICIAL;
cout << "El precio del billete es: " << precio << " euros";

}
else if(distancia > 200 && distancia <= 600){

cout << "El precio del billete es: " << precio_superior << " euros";

}   //En estos dos casos se suman las rebajas
	else if(distancia > 600 && anterioridad && distancia <= 1100){
	
	   precio = precio_superior - ( 8.0 * precio_superior)/100.0;
	   cout << "El precio con ambos descuentos es: " << precio << " euros";
	   
	}
		else if(distancia > 600 && distancia <=1100){
	
	      precio = precio_superior - ( 3.0 * precio_superior)/100.0;
	      cout << "El precio con el descuento de la distancia de 600 kilometros es: " << precio << " euros";
	}
			else if(distancia > 1100 && anterioridad){
	
	               precio = precio_superior - ( 9.0 * precio_superior)/100.0;
	               cout << "El precio con ambos descuentos es: " << precio << " euros";
		}
				else if(distancia > 1100){
		
						precio= precio_superior - ( 4.0 * precio_superior)/100.0;
			         cout << "El precio con el descuento de la distancia de 1100 kilometros es: " << precio << " euros"; 
			}
	
// En estos dos casos no se permite la suma de rebajas
cout << endl;
cout << endl;
cout << endl;

if(distancia > 600 && distancia <= 1100){

//Rebaja por ser cliente previo unicamente
precio = precio_superior - ( 5.0 * precio_superior)/100.0;
cout << "El precio con el descuento unicamente de cliente previo seria: " << precio << " euros";
cout << endl;

//Rebaja por la distancia del destino
precio = precio_superior -  ( 3.0 * precio_superior)/100.0;
cout << "El precio con el descuento unicamente de la distancia del destino es: " << precio << " euros";

}

else if(distancia > 1100){
	
    //Rebaja por ser cliente previo 
    precio = precio_superior -  ( 5.0 * precio_superior)/100.0;
    cout << "El precio con el descuento unicamente de cliente previo seria: " << precio << " euros";
    cout << endl;
    
    //Rebaja por la distancia hasta el destino
    precio = precio_superior - ( 4.0 * precio_superior)/100.0;
    cout << "El precio con el descuento unicamente de la distancia a el destino es: " << precio << " euros";
    
}
	
}

