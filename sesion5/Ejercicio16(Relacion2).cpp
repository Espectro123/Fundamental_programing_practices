#include<iostream>

using namespace std;

int main(){
	
	double capital,interes,total,contador,aux;
	contador = 0;
	
	cout << "Introduzca el capital: ";
	cin >> capital;
	
	cout << endl;
	
	cout << "Introduzca el interes: ";
	cin >> interes;
	
	aux = capital;
	
	
	while((aux*2) > capital ){
		
		total = capital + capital * (interes/100.0);
		capital = total;
		contador++;
	}
	
	cout << "Han de pasar " << contador << " 'years' para doblar el capital";
	
	
	
}
