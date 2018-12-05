#include <iostream>

using namespace std;

int main(){
	
	double capital,interes,years,total,aux;
	
	
cout << "Introduzca el capital: ";
cin >> capital;

cout << "Introduzca el interes: ";
cin >> interes;

cout << "Introduzca el numeros de years: ";
cin >> years;

aux = capital;


	cout << "-------------------------------------" << endl;
	
for(int i = 1; i < interes+1; i++){
	 	cout << "Calculos realizados al interes de: " << i;
	   cout << endl;
		cout << endl; 
	 	
	 	for(int j = 1; j <= years; j++){
	 	
	 	  total = capital + capital * (i/100.0);
	 	  capital = total;
	 	   
	 	  	cout << "Dinero obtenido en el año numero " << j << ":" << capital << endl;
	 	  	
	 	  	
	     }
	     total = 0;
	     capital = aux;
	     
	     
	    cout << "-------------------------------------" << endl;
	    
	 	
	 	
	 }
	
	
}
