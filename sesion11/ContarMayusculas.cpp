#include <iostream>


using namespace std;


int main(){
	
	
	char vector[10]={'a','A','b','A','c','C','d','D','e','E'};
	char vectorAuxiliar[10] = {'a','a','a','a','a','a','a','a','a','a'};
	int  vectorNumerico[10] = {0,0,0,0,0,0,0,0,0,0};
	bool Realizado = false;
	int  auxiliar = 0;
	
	for(int i = 0; i < 10; i++){
		
		if(vector[i] >= 'A' && vector[i] <= 'Z'){
		
		 
		 for(int j = 0; j < 10 && Realizado == false; j++){
		 
		 	if(vector[i] != vectorAuxiliar[j] && (vectorAuxiliar[j] >= 'a' && vectorAuxiliar[j] <= 'z')){
		 		
		 		vectorAuxiliar[j] = vector[i];
		 		vectorNumerico[j] = vectorNumerico[j] + 1;
		 		Realizado = true;
		 		
		 	}else if(vector[i] == vectorAuxiliar[j]){
		 	
		 		vectorNumerico[j] = vectorNumerico[j] + 1;
		 		Realizado = true;
		 	}
		 	
		 }
		 Realizado = false;
		 
		}
		
	}
	
	for(int k = 0; k < 10; k++){
		
		if(vectorAuxiliar[k] >= 'A' && vectorAuxiliar[k] <= 'Z'){
			
			cout << "Hay "<< vectorNumerico[k] << " " << vectorAuxiliar[k] << " en este vector" << endl;
			
		}
		
		
		
		
		
	}
	
	
}
