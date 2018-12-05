#include <iostream>
#include <cmath>

using namespace std;
      
		const float PI = 3.14159265358979323846;
      const float E  = 2.71828182845904523536;
   
double Gaus2(){
	
	double o,u,x;
	
      cout << "Introduzca el valor de la esperanza: ";
      cin >> u;
      cout << endl;
      
      cout << "Introduzca el valor de la desviacion tipica: ";
      cin >> o;
      cout << endl;
      
		cout << "Introduzca el valor de la x: ";
		cin >> x;
		cout << endl;
		
		  parte3 = (-1.0/2.0) * pow((x-u/o),2.0);
		  parte1 = pow(E,parte3);
        parte2 = sqrt(2*PI);
                
        total = (1/(o*parte2)) * parte1;        
return total;
	
}
	   
void Gaus(double o, double u, int contador){

double parte1,parte2,parte3,total,x;	
    
      
   for(int i = 0; i< contador; i++){
   
   	  cout << "Introduzca absiza: ";
		  cin >> x;
		  cout << endl;
		  
		  
		  parte3 = (-1.0/2.0) * pow((x-u/o),2.0);
		  parte1 = pow(E,parte3);
        parte2 = sqrt(2*PI);
                
        total = (1/(o*parte2)) * parte1;        

   	cout << "Resulado: "  << total << endl;
   }

}

double AreaGausiana(double x){
	
	double tiempo,formula;
	double b1,b2,b3,b4,b5,b6;
	b1 = 0.2316419;
	b2 = 0.319381530;
	b3 = -0.356563782;
	b4 = 1.781477937;
	b5 = -1.821255978;
	b6 = 1.330274429;
	tiempo = 1/1 + (b1 * x);
	
	formula = 1 - Gaus2() * (b2*t +(b3*pow(t,2)),+ (b4*pow(t,3)) + (b5 *pow(t,4)) + b6*pow(t,5));
	
	
}

int main(){
	
 double esperanza,desviacion;
 int repeticiones;
 
 cout << "Introduzca la esperanza: ";
 cin >> esperanza;
 cout << endl;
 
 cout << "Introduzca la desviacion: ";
 cin >> desviacion;
 cout << endl;
 
 cout << "Introduzca el numero de repeticiones: ";
 cin >> repeticiones;
 cout <<endl;
	
	Gaus(desviacion,esperanza,repeticiones);
	
}
