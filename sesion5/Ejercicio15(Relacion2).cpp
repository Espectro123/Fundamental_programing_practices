#include <iostream>

using namespace std;




int main(){
		
	double capital,interes,total,acumulador;
	int years;
	
	cout << "Introduzca el capital:";
	cin >> capital;
	
	cout << "Introduzca el interes:";
   cin >> interes;
   
   cout << "Introduzca el numero de 'years' a invertir:";
   cin >> years;
   
   acumulador = 0;
   
   while(years > 0){
   	
   	total = capital + capital * (interes/100.0);
   	capital = total;
   	acumulador++;
		cout << "Total en el 'years' numero " << acumulador << "= " << capital << endl; 	
      years--;
      
      
	}
   
			
	
}
