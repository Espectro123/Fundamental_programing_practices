#include <iostream>

using namespace std;

class Banco{
	
	private:
		
		double capital,interes;
		
   public:
   	
   	//Contrusctor por defecto 
   	Banco(){
   		
   		capital = 0;
   		interes = 0;
   		
   	}
   	
   	//Contructor para inicializar el capital y el interes
   	Banco(double Capital, double Interes){
   		
   		capital = Capital;
   		interes = Interes;
   		
   	}
   	
   	//Metodo para calcular el capital dentro de x años
   	double HastaQueAno(int year){
   		double total;
   		total = 0;
   		
   			for(int i = 0; i <= year; i++){
   				
   				total = capital + (capital*(interes/100.0));
   				
   			}
   	
   		return total;
   		
   	}
   	
   	//Metodo para calcular cuantos años necesitas para tener el doble del dinero
   	double HastaElDolble(){
   		
   		int aux,total,number_Of_Years;
   		aux = capital * 2;
   		number_Of_Years = 0;
   		
   		while(aux > capital){
   			
   			total = capital + (capital*(interes/100.0));
   			capital = total;
   			number_Of_Years++;
   		}
	
   		return number_Of_Years;
   	}
     
};




int main(){
	int opcion,years;
	opcion = 0;
	
}
