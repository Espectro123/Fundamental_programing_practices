#include <iostream>
#include <cstring>

using namespace std;

class Login{
	
	private:
		int num_caracteres_a_coger;
		
	public:
		
		Login(int n){
			
			num_caracteres_a_coger = n;
			
		}
		
	  string Codifica(string usuario){
	  	
	  	string Nombre = usuario;
 		int contador = 0;
 		int longuitud = Nombre.size();
 		string intermedia = "";
 		string sugerencia = "";
 
 			//Reutilizo la varaible contador ---Importante---
 			contador = 0;
 			
 			for(int i = 0; i < longuitud; i++){
 				
 				intermedia = Nombre.substr(i,1);
 				
 				if(intermedia != " "){
 					
 					if(contador < num_caracteres_a_coger){
 						
 						sugerencia += intermedia; 
 						contador++;
 						
 					}	
 										
 					
 				}else{
 					
 					contador = 0;
 					
 				}
 				
 				
 				
 				
 			}
 			
 			
	  	 return sugerencia;
	  }
};
	
int main(){
	
	
	Login cuenta(3);
	cout << cuenta.Codifica("Olivia Marin    Delgado");
	
	
	
	
	
	
}
		
		
