#include <iostream>

using namespace std;

class SecuenciaCaracteres{
	
	private:
		static const int TAMANIO = 50;
		char vector_privado[TAMANIO];
		int total_utilizados;
	
	
		
	public:
		
		//Constructor de la clase
		SecuenciaCaracteres(){
			
			total_utilizados = 0;
			
		}
	
	int TotalUtilizados(){
		
		return total_utilizados;
		
	}
	
	int Capacidad(){
		
		return TAMANIO;
		
	}

	void Aniade(char nuevo){
		
		if (total_utilizados < TAMANIO){
			
			vector_privado[total_utilizados] = nuevo;
			
			total_utilizados++;
			
		}
	}

	char Elemento(int indice){
		
		return vector_privado[indice];
		
	}
	
	
	bool EsPalindromo(){
		
		bool respuesta = true;
		
		
		for(int i = 0; i < TotalUtilizados(); i++){
			
			if(Elemento(i) != Elemento(TotalUtilizados() - 1 -i)){
				
				respuesta = false;
				
			
			}
			
			
			
		}
		
	
		return respuesta;
	}
	
	
	void Modifica(int indice, char nuevo){
		
		if(indice < TotalUtilizados()){
			
			vector_privado[indice] = nuevo;
			
			
		}
			
		
	}
	
	
	void IntercambiarComponentes(int indice, int indice2){
		
		char aux;
		
		if(indice < TotalUtilizados() && indice2 < TotalUtilizados()){
		
		aux = Elemento(indice);
		vector_privado[indice] = Elemento(indice2);
		vector_privado[indice2] = aux;
		
		}
	
	}
	
	void Invierte(){
	
			for(int i = 0; i < TotalUtilizados(); i+=2){
			
	     			IntercambiarComponentes(i,TotalUtilizados()-i-1);
				
			}
		
	}
	
	void Elimina(int indice){
		
		int diferencia = TotalUtilizados() - indice;
		
	 	if(indice < TotalUtilizados()){	
	 	
			for(int i = 0; i < diferencia; i++){
			
				IntercambiarComponentes(indice+i,indice+i+1);
			
			}
		
			total_utilizados--;
	 	}
	 	
	}
	/*
	Este no funciona con el primer elemento del vector
	*/
	
	void EliminaMayusculas(){
		
		int maximo = TotalUtilizados() - 1;
	  
	  
	  
	  
	  
			
		
	}
	
	void EliminarRepetidos(){
		
		int direccion = -1;
		char caracter;
		int contador = 0;
		bool Intercambio = false;
		
		for(int i = 0; i < TotalUtilizados(); i++){
			
			for(int j = 0; j < TotalUtilizados(); j++){
				
				
				if(vector_privado[i] == vector_privado[j] && i != j){
					
						
					direccion = j;
					caracter = vector_privado[j];
					Intercambio = true;
					contador++;
					
					
				}
				
			  if(Intercambio && vector_privado[i] != vector_privado[j]){
					
					vector_privado[direccion] = vector_privado[j];
					vector_privado[j] = caracter;
					
				}
				
				
			}
			
		}
		
		total_utilizados -= contador;
		cout << "El contador es: " << contador;
		
	}
	
	int SecuenciaEnteros(){
		
		
		int minimo = vector_privado[0];
		int numeroDeSecuencias = 1;
		
		for(int i = 1; i < TotalUtilizados(); i++){
			
			if(minimo > vector_privado[i]){
				
				minimo = vector_privado[i];
				numeroDeSecuencias++;
				
			}else{
				
				minimo = vector_privado[i];
				
			}
			
			
		}
				
		return numeroDeSecuencias;
	}	
	
	
};
	
	
	
int main(){
	
	SecuenciaCaracteres vector,vector2;
	vector.Aniade('A');vector2.Aniade('a');
	vector.Aniade('B');vector2.Aniade('b');
	vector.Aniade('C');vector2.Aniade('C');
	vector.Aniade('A');vector2.Aniade('D');
	vector.Aniade('B');vector2.Aniade('F');
   
	//Pruebas para vector palindromo
	
	cout << "El vector es palindromo?: " << vector.EsPalindromo() << endl;
	
	vector.Aniade('A');
	
	cout << "Y ahora el vector es palindromo?: " << vector.EsPalindromo() << endl;
   
   
   //Pruebas para Modificar posicion del vector
   
   vector.Modifica(0,'B');
   
   cout << "El elemento modificado esta en la posicion 0. Antes era A ahora deberia ser B: " << vector.Elemento(0);
   
   //Modifico el vector
   vector.Modifica(0,'C');
   vector.Modifica(1,'A');
   vector.Modifica(2,'S');
   vector.Modifica(3,'A');
   vector.Modifica(4,'L');
   vector.Modifica(5,'E');
   
   //Prueba de intercambiar vector
   
   vector.IntercambiarComponentes(0,5);
   cout << "Antes la posicion 0 contenia 'C' ahora: " << vector.Elemento(0) << endl;
   cout << "Antes la posicion 5 contenia 'E' ahora: " << vector.Elemento(5) << endl;	
	vector.IntercambiarComponentes(5,0);
	cout << "Ahora deberian de volver a ser correctos" << endl;
	cout << "Antes la posicion 0 contenia 'C' ahora: " << vector.Elemento(0) << endl;
   cout << "Antes la posicion 5 contenia 'E' ahora: " << vector.Elemento(5) << endl;
   
   //Prueba de invertir vector. Lo invierto dos veces
   vector.Invierte();
   
   for(int k = 0; k < vector.TotalUtilizados(); k++){
   	
   	cout << "Posicion " << k << ": " << vector.Elemento(k)<< endl;
   }
   
   vector.Invierte();
   cout << endl;
	
	 for(int k = 0; k < vector.TotalUtilizados(); k++){
   	
   	cout << "Posicion " << k << ": " << vector.Elemento(k)<< endl;
   }
   
   //Pruebas de eliminar un componente. Voy a eliminar la 'A' de la posicion 3
   
   vector.Elimina(3);
   cout << endl;
   cout << endl;
    for(int k = 0; k < vector.TotalUtilizados(); k++){
   	
   	cout << "Posicion " << k << ": " << vector.Elemento(k)<< endl;
   }
   
   //Le vuelvo a añadir el elemento
   vector.Elimina(4);
   vector.Elimina(3);
   vector.Aniade('A');
   vector.Aniade('L');
   vector.Aniade('E');
   cout << endl;
   cout << endl;
   
    for(int k = 0; k < vector.TotalUtilizados(); k++){
   	
   	cout << "Posicion " << k << ": " << vector.Elemento(k)<< endl;
   }
   
   cout << endl;
   
   cout << "Aqui elimino las mayusculas de un vector" <<endl;
   
   for(int k = 0; k < vector2.TotalUtilizados(); k++){
   	
   	cout << "Posicion " << k << ": " << vector2.Elemento(k)<< endl;
   }
   cout << endl;
   vector2.EliminaMayusculas();
   
   
    for(int k = 0; k < vector2.TotalUtilizados(); k++){
   	
   	cout << "Posicion " << k << ": " << vector2.Elemento(k)<< endl;
   }
   
   cout << endl;
   
   
   
   
    for(int k = 0; k < vector.TotalUtilizados(); k++){
   	
   	cout << "Posicion " << k << ": " << vector.Elemento(k)<< endl;
   }
   
   vector.Modifica(0,'A');
   vector.Modifica(1,'B');
   vector.Modifica(2,'A');
   vector.Modifica(3,'B');
   vector.Modifica(4,'A');
   vector.Modifica(5,'C');
   
    cout << "Hay "<< vector.SecuenciaEnteros() << " secuencias ascendentes." << endl;
    
    
   vector.Modifica(0,'C');
   vector.Modifica(1,'A');
   vector.Modifica(2,'S');
   vector.Modifica(3,'A');
   vector.Modifica(4,'L');
   vector.Modifica(5,'E');
   
   vector.EliminarRepetidos();
   
   
   for(int k = 0; k < vector.TotalUtilizados(); k++){
   	
   	cout << "Posicion " << k << ": " << vector.Elemento(k)<< endl;
   }
   
   
}
