#include <iostream>
#include <cmath>

using namespace std;

class Progresion{
	
	private:
		
		double valor_Inicial,r;
		int tope;
		
	public:
		
		//Constructor por defecto
		Progresion(){
			
			valor_Inicial = 1;
			r = 2;
			tope = 2;
			
		}
		
		//Constructor para los 3 valores de la progresion
		Progresion(double valor,double R,int Tope){
        
		  valor_Inicial = valor;			
		  r = R;
		  tope = Tope;
			
		}
		//Te da el resultado de la progresion geometrica
		void SumaHasta(){
			
			double total;
			total = 0;
			
			for(int i = 0; i <= tope; i++){
				
				total+=valor_Inicial;
				
				cout << total << endl;
			}
			
		}
	   //Te da el ultimo termino de la progresion geometrica
	   double Termino(){
	   	
	   	int termino;
	   	
	   	termino = valor_Inicial * ((pow(r,tope) - 1)/r-1);
	   	
	   	return termino;
	   }
	   
	   //Suma hasta infinito
	   double SumaHastaInfinito(int Tope){
	
	    double valorAbsoluto;
        	valorAbsoluto = 0;
	
	     while(valorAbsoluto <= 1){
		
			valorAbsoluto = (valor_Inicial/(1 -r));
		
     	  }

	     return valorAbsoluto;
     }
	   
	   
     //Metodo para multiplicar la sumatoria anterior
     double ProductoHasta(){
     	
     	double resultado;
     	double multiplicar,elevar;
     	
     	multiplicar = valor_Inicial*Termino();
     	
     	elevar = pow(multiplicar,tope);
     	
     	resultado = sqrt(elevar);
     
     	
     	return resultado;
     	
     }
     
};


int main(){

int tope,valorInicial,r;



cout << "Introduzca el valor inicial de la progresion: ";
cin >> valorInicial;

cout << "Introduzca el valor de r: ";
cin >> r;

cout << "Introduzca el tope: ";
cin >> tope;


Progresion progresion(valorInicial,tope,r);


 progresion.SumaHasta();

cout << endl;

cout << progresion.Termino();

}
