#include <iostream>
#include <cmath>
/*

  Este programa recoge tres valores de una funcion gausiana y da como resultado 
  
  el valor de dicha funcion.

     */
     
      // Mando le programa por una via comun? 
      using namespace std;
      
      // Declaro las constantes basicas  
      
      const float PI = 3.14159265358979323846;
      const float E  = 2.71828182845904523536;
      
      
      int main(){
         
         // Daclaro las variables que voy a usar para laresolucion de la funcion
         float o;
         float u; 
         float x;
         float Funcion;
         float A;
         float B;
         
         // Pido la entrada de la desviacion tipica. No he encontrado el codigo ASCII
         // para este caracter
         
        cout << "Introduce La desviacion tipica: ";
        
        cin >> o;
        
        cout<< "\n";
        
        // Pido la entrada de la Esperanza. El codigo /346 representa el caracter
        // de  u 
        
        cout << "Introduce \346: ";
        
        cin >> u;

        cout << "\n";
        
        // Pido la entrada del dato de abcisa
                
        cout << "Introduzca el valor de abcisa: ";
        
        cin >> x;
        
        // Elevo e a su valor tras introducir los datos y lo guardo en la variable
        // A 
                
        A = pow(E,-1/2 * pow (x-u/o,2));
                
        // Hago la raiz de 2 por el número pi y la guardo en la variable B
                
        B = sqrt(2*PI);
                
        // Sustituyo A y B por sus respectivas operaciones en la funcion y la resuelvo
        // guardando el valor en la variable Funcion
                
        Funcion = (1/(o*B)) * A;        
        
        // Imprimo el valor de la funcion gausiana
        
        cout << " La g(x) vale: " << Funcion << endl;
      
        // Mantengo abierta la consola
        
         system("PAUSE");
         }
