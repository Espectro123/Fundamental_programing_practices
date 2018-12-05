#include <iostream>

using namespace std;

class Nomina{
	
	private:
		float salario;
		
	public:
	    
	    //Constructor por defecto de la clase
	    Nomina(){
	    	
	    	salario = 1000.0;
	    	
	    }
	    
	    //Constructor para inicializar le salario
	    Nomina(float dinero){
	    	
	    	salario = dinero;
	    	
	    }
	    
	    //Funcion set de la clase
	    void SetSalario(float cambio){
	    	salario = cambio;
	    }
	
	    //Metodo para calcular el salario del diseñador. La ultima letra hacer referencia a la D de diseñador
	    float SalarioD(float disenador){
		 
		  float el_Disenador = disenador;
		
		  
		  el_Disenador = (disenador/4)*2;
		  
		  
		  return el_Disenador;
		 }
	    
	    //Metodo para calcular el salario de los fabricantes. La ultima letra del metodo hace referencia a la F de fabrincante
	    float SalarioF(float salario){
	    	
	    	float fabricante;
	    	
	    	fabricante = (salario/3);
	    	
	    	return fabricante;
	    }
	    
	
	
	
};

int main(){
	
	float ingresos;

	//Filtro para un salario valido
	do{
		
	cout << "Introduzca los ingresos de la empresa: ";
	cin >> ingresos;	
		
	}while(ingresos == 0);
	//Creo el objeto pago
	Nomina pago(ingresos);
	
	//Imprimo lo que cobra el diseñador
	cout << "El disenador cobra: " << pago.SalarioD(ingresos) << endl;
	
	//Imprimo lo que cobran los trabajadores
	cout << "El fabricante cobre: " << pago.SalarioF(pago.SalarioD(ingresos));
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
