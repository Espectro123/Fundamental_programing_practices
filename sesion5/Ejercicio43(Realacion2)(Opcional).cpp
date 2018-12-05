#include <iostream>

using namespace std;

int main(){

int dorsal,puntuacion;
int equipo1=0,equipo2=0;
dorsal = 1;


do{
	
		cout << "Introduzca el dorsal: ";
		cin >> dorsal;
	
	if(dorsal != -1 && (dorsal >= 1 && dorsal <= 6)){
	
		
		cout << endl;
		
		cout << "Introduzca la puntuacion: ";
		cin >> puntuacion;
		
			if(dorsal >= 1 && dorsal <= 3){
	
			equipo1 = equipo1 + puntuacion;
	
			}
	
				else{
	
					equipo2 = equipo2 + puntuacion;
	
				}
		
		
	}
	
cout << endl;
	
}while(dorsal != -1);

cout << endl;

if(equipo1 > equipo2){

cout << " Ha Ganado el equipo numero 1 con:" << equipo1 << " puntos";

}else{

cout << "Ha ganado el equipo numero 2 con: " << equipo2 << " puntos";

}

}
