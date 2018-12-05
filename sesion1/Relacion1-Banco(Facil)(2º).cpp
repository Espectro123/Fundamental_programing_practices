#include <iostream>

/*
Este programa recoge  de datos un capital y el interes para mostrar
las ganancias a obtener en 1 año
*/

// Utilizo un canal comun ? 

using namespace std;



int main(){
   // Daclaro las variables a usar
   double capital;
   double interes;
   double total;
   
   // Pido la entrada del capital inicial
   cout << "Introduzca el capital: ";
   // Recogo el dato
   cin >> capital;
   
   // Pido el dato del interes
   cout << "Introduzca el interes: ";
   // Recogo el dato
   cin >> interes;
 
    // Calculo el total de la operacion  
   total= capital+capital*interes/100;
   
   // Muerto el resultado en pantalla
   cout << "Total: " << total << " euros\n\n"; 
   
   // Mantengo la consola abierta
   system("PAUSE");
   
   
   }
