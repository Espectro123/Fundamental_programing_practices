#include <iostream>

using namespace std;

int main(){
	
	
	long int n,m,resta,factorial_N,factorial_M,factorial_Resta,combinatorio;
	int i,j,k;
	
	factorial_N = 1;
	factorial_M = 1;
	factorial_Resta = 1;
	combinatorio = 0;
	resta = 0;
	
	cout << "Introduzca el primer numero de la combinatoria: ";
	cin >> n;
	cout << endl;
	
	cout << "Introduzca el segundo numero de la combinatoria: ";
	cin >> m; 
	cout << endl;
	
	resta = n-m;
	
	for(i = 1; i <= n;){
		
		factorial_N =  n * factorial_N;
		n--;
		
		
	}
	
	for(j = 1; j <= m;){
		
		factorial_M = factorial_M * m;
		m--;
		
	}
	
	
	
	for(k = 1; k <= resta;){
		
		factorial_Resta = factorial_Resta * resta;
		resta--;
		
		
	}
	
	
	combinatorio = ((factorial_N) / (factorial_M * factorial_Resta));
	
	cout << endl;
	cout << "El resultado del factorial es: " << combinatorio;
	
}
