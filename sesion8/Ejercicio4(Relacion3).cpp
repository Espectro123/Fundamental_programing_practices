#include <iostream>
#include <cmath>

using namespace std;


//Funcion potencia
int Potencia(int base_F, int exponente_F){
	
	int base;
	base = base_F;
	
		for(int i = 1; i < exponente_F; i++){
	
		base_F = base_F * base;
	
	   }
	
	return base_F;
}


//Funcion de suma geometrica
int SumaHasta(int valor_F,int tope_F,int r_F){
	
	int aux;
	
	cout << "Potencia: " << Potencia(r_F,tope_F);
	
	aux = valor_F * ((Potencia(r_F,tope_F) -1)/(tope_F -1));
	
	return aux;	
}


//Funcion de suma hasta infinito
double SumaHastaInfinito(int valor_F,int r_F){
	
	double valorAbsoluto;
	valorAbsoluto = 0;
	
	while(valorAbsoluto <= 1){
		
		valorAbsoluto = (valor_F/(1 -r_F ));
		
	}
	
	return valorAbsoluto;
}

double ProductoHasta(int valor_F, int tope_F, int r_F){

 int devolver;

 devolver = sqrt(pow((valor_F)*(valor_F*tope_F),tope_F));

return devolver;

}

int main(){
	
	int valor_Inicial,tope,r;
	
   cout << "Introduzca el valor inicial: ";
	cin >> valor_Inicial;
	cout << endl;
	
	cout << "Introduzca el  valor K  o tope hasta el que quieres llegar: ";
	cin >> tope;
	cout <<endl;
	
	cout << "Introduzca el valor r: ";
	cin >> r;
	cout << endl;
	
	

	
	
}
