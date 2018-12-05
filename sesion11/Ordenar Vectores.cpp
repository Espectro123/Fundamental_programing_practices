#include<iostream>

using namespace std;


int main(){
	
	
	int vector[5] = {9,3,7,1,8};
	int aux;
	


    //Algoritmo de ordenacion
    
    for(int i = 0; i < 5; i++){
    	for(int j = 0; j < 5; j++){
    		
    		if(vector[i] > vector[j]){
    		
			  aux = vector[j];
			  vector[j] = vector[i];
			  vector[i] = aux;
			 	
    		}
    		 		
    	}
   }
   
   for(int i = 0; i < 5; i++){
   	
   	
   	cout << "Vector posicion " << i << ":" << vector[i] << endl;
   	
   	
   	
   }
}
