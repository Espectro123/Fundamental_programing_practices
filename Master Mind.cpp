/*
Juego: Master mind
Creador: Enrique Casale Linde

Este programa emula el tipico juego de master mind, aunque en vez de adivinar numeros, debes de adivinar una 
combinacion de numeros.
Tiene dos modos.
Jugar contra la maquina
jugar contra otro jugador

Grupo: D2

*/


#include <iostream>
#include<ctime>
#include<cstdlib>

using namespace std;


//Funcion para limpiar la pantalla del juego con el fin de ocultar la combinacion en caso de jugar contra otra persona.
void LimpiarConsola(){

system("cls");

}

//Presentacion del juego
void Presentacion(){
	
	cout << "Bienvenido a la replica del famosos juego MASTER MIND¡¡" << endl;
	cout << "Basicamente este juego tiene dos opciones." << endl;
	cout << "Primero jugar contra la maquina. " << endl;
	cout << "Segundo jugar contra otro jugador. Este introducira un secuencia y tu debes adivinarla" << endl;
	cout << "El juego te ira dando pistas. Te dira si hay algun numero presente en la secuencia que has introducido" << endl;
	cout << " y si esta en la posicion correcta. OJO si el numero esta correcto no te dira que esta presente." << endl;
	cout << "Sencillo verdad?. Pues a jugar :D" << endl;
	cout << "A por cierto, solo tienes 25 oportunidades para adivinar la combinacion. Piensa un poco ;)" << endl;
	
}

//Funcion filtro. La utilizo varias veces en el codigo para filtrar los nuemros introducidos. No esta blindada contra char
int Filtro(int rango_a, int rango_b){
	
	int lectura;
   
   
	do{
		
		
		cout << "Introduce un numero valido: ";
		cin >>  lectura;
		
	}while(lectura < rango_a || lectura > rango_b);
   
	return lectura;
}

int Menu(){
	
	int opcion;
	
	 cout << endl;
	
	 cout << "Bienvenido al menu del juego. Que desea hacer? " << endl;
	 cout << "Pulse '1' para jugar contra otro jugador." << endl;
	 cout << "Pulse '2' para jugar contra la maquina." << endl;
	 cout << "Pulse '3' para salir del programa." << endl;
	 opcion = Filtro(1,3);
	 return opcion;
}

//Funcion que se llama cuando se juega contra la maquina. Crea una secuencia aleatoria con numeros no iguales
int SecuenciaAleatoria(){
	
	int numero1,numero2,numero3,divisor = 10000;
	srand (time(NULL));
   numero1 = rand()%999 + 100;
   numero1 *= 10;
   numero3 = numero1;
   numero3 = numero3%divisor /(divisor/10);
   do{
   	
   numero2 = rand()%9 + 1;	
   
   }while(numero2 == numero3);
   
	numero1 += numero2;		
	
	LimpiarConsola();
	
	return numero1;
}

//Funcion que se llama cuando se va a jugar contra otro usuario
int SecuenciaUsuario(){
	
	int secuencia;

	cout << "Introduzca la secuencia a adivinar: ";
	cin >> secuencia;
	LimpiarConsola();

	return secuencia;
	
}

/*
Devuelve por referencia el numero de numeros presentes y correctos de las secuencias
*/

void EvaluarNumeros(int usuario,int respuesta,int &Presentes, int &Correctos){
	
	int vectorAleatoria[4];
	int vectorUsuario[4];
	int divisor = 10000;
	int contador = 0;
	int auxPresentes=0,auxCorrectos=0;

	
	while(divisor != 1){
		
		if(contador != 4){
		
		 vectorAleatoria[contador] = (respuesta%divisor) / (divisor/10);
		 
		 vectorUsuario[contador]   = (usuario%divisor)   / (divisor/10);
		 
		 contador++;
		 
		
			
		}
		divisor /= 10;	
		
	}	
	
	
    for(int i = 0; i < 4; i++){
    	for(int j = 0; j < 4; j++){
    		
    		if( (vectorUsuario[j] == vectorAleatoria[j])){
    	
    			auxCorrectos++;
    		
    			vectorAleatoria[j] = -1;
    			vectorUsuario[j] = -2;
    			
    		}else if(vectorUsuario[i] == vectorAleatoria[j]){
    			
    				auxPresentes++;
    				vectorAleatoria[j] = -1;
    				
    		}
    	
    	}
    }
    
    	
   
 Presentes = auxPresentes;
 Correctos = auxCorrectos;

	
}


void Tabla(int usuario,int presentes, int correctos){
	
	
		cout << " Combinacion | N_Presentes  |  N_Correctos" << endl;
   cout << "______________________________________________" << endl;
   cout << usuario << "               " << presentes << "               " << correctos;
	cout << endl;
	

}



void jugar(int respuesta,bool bandera, bool banderaSalida){
	
	int secuencia = 0;
	int resultado_Presentes,resultado_Correctos;
	
		for(int i = 0; (i <= 25) && (!bandera); i++){
			
			//Pido una secuencia al usuario
			secuencia = Filtro(1000,10000);
			
			//Si la secuencia coincide sale del ciclo, si no, comprueba el numero de resultados corretos que hay.
			if(respuesta != secuencia){
				
				   //Llamo a la funcion evaluar numeros para comprobar el numero de numeros presentes y correctos. Los saco por referencia
				   // y los guardo en las variables <<resultado_Presentes>> y <<resultado_Correctos>> respectivamente
				   EvaluarNumeros(secuencia,respuesta,resultado_Presentes,resultado_Correctos);
			      
			      //Funcion que muestra la tabla con la combinacion introducida y el numero de resultados correctos y presentes
					Tabla(secuencia,resultado_Presentes,resultado_Correctos);
				
				cout << endl;
				cout << "Te quedan " << 25-i << " oportunidades" << endl; 
				
			}else{
				
				bandera = true;
				
			}
			
			
		}
		   
		   if(bandera && !banderaSalida){
		   	
		   	cout << "Enorabuena has ganado!!!!" << endl;
		   	
		   }else if(banderaSalida){
		   	cout << endl;
		   	cout << "Espero que regreses!!" << endl;
		   	cout << endl;
		   }else{
		   	
		   	cout << "La combinacion correcta era: " << respuesta << endl;
		   	cout << "Has perdido...Perdedor!!!! muhahahaha... Anda vuelve a intentarlo." << endl;
		   }
		
}




int main(){
	
	//Guardo la opcion elegida por el usuario
	int opcion = 0;
	//Dependiento de la opcion elegida, guarda la secuencia aleatoria o una introducida por el usuario.
	int respuesta;
	//Boleano para salir del ciclo for en caso que que el jugador acierte
	bool bandera = false;
	bool banderaSalida = false;
	
	//Funcion que inicicia la presentacion del juego
	Presentacion();
	cout << endl;
	//Recogo la respuesta del jugador
	opcion = Menu();
	
	//En este switch genero la respuesta segun la opcion que haya pedido el usuario
	switch(opcion){
		
		case 1:
			respuesta = SecuenciaUsuario();
		break;
		  
		case 2:
			respuesta = SecuenciaAleatoria();
		break;
		
		case 3:
		   bandera = true;
		   banderaSalida = true;
		break;
				
	}
		
	jugar(respuesta,bandera,banderaSalida);
   
	system("pause");
	
}
