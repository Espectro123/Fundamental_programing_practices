#include <iostream>


using namespace std;

int main(){
   
   double intensidad;
   double resistencia;
   double voltaje;
   
   cout << "Introduzca la intensidad: ";  
   cin >> intensidad; 
   cout << "\nIntroduzca la resistencia: ";
   cin >> resistencia;
   
   voltaje = intensidad*resistencia;
   
   cout <<"\n El voltaje es: " << voltaje << "\n\n";
   system("PAUSE");
   }
