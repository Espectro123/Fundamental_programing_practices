#include <iostream>

using namespace std;

int main(){
	
	char min1,min2,min3,min4,aux1;
	bool doo = true;
	
	cout << "Introduzca el caracter numero 1: ";
	cin >> min1;
	
	cout << "Introduzca el caracter numero 2: ";
	cin >> min2;
	
	cout << "Introduzca el caracter numero 3: ";
	cin >> min3;
	
	cout << "Introduzca el caracter numero 4: ";
	cin >> min4;
	
	aux1 = min3;
	
	
	for(char i = min1; min1 <= min2; i++){
	
	    for(char j = min3; min3 <= min4; j++){
	    	
	    	cout << i << j << "-";
	    	 
	    	 min3++;
	    	
	    }
	
	  min1++;
	  min3 = aux1;
		
	}
		
}
