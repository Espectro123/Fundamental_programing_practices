#include <iostream>

using namespace std;

int main(){
	
  long suma,contador,triangular,anterior;
  bool bandera = true;
  suma = 0;

  cout << "Introduzca el numero: ";
  cin >> triangular;

   for(int i = 0; i < triangular && bandera; i++){
   	
   	for(int j = 0; j < i && bandera; j++){
   		
   		
   		if(suma < triangular){
   			
				anterior = suma;
   			suma = suma + j;
   			
   		}else{
   			
   			anterior = suma;
   			bandera = false;
   			 
   		}
     }
      
      if(suma != anterior && suma < triangular){
      
		cout << "Numeros triangulares hasta K: " << suma << endl;
      suma = 0;

      }
   }
}
