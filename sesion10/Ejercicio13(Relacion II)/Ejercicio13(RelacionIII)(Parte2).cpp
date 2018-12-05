#include <iostream>

using namespace std;

//Funciones que no tienen que ver nada con el ejercicio
double Cout(string Pregunta){
	double variable;
	
	cout << Pregunta;
	cin >> variable;
	cout << endl;
	
	return variable;
}

double Cout2(string Pregunta, double variable){
	
	cout << Pregunta << variable << endl;
	
}


//Aqui comienza la practica
class Nomina{
	
	private:
		float salario;
		float retencion;
		
	public:
	    
	    //Constructor por defecto de la clase
	    Nomina(){
	    	
	    	salario = 1000.0;
	    	retencion = 1.0;
	    }
	    
	    //Constructor para inicializar el salario y la retencion
	    Nomina(float dinero,float quitar){
	    	
	    	salario = dinero;
	    	retencion = quitar;
	    	
	    }
	    
	    //Funcion set de la clase
	    void SetSalario(float cambio){
	    	salario = cambio;
	    }
	   
	
	    //Metodo para calcular el salario del diseñador. La ultima letra hacer referencia a la D de diseñador
       
       void Salario(float S, float &S_D, float &S_T){
       	
       	
       	S_D = (S/4.0) * 2;
       	S_T = (S_D/3);
       	
       }
       
       
	    
	    float Aplicar_Retencion(float salario){
	    	
	    	float neto;
	    	
	    	neto = salario - (salario * (retencion/100.0));
	    	
	    	return neto;
	    }
	
	
	
};

int main(){
	
	float ingresos,retener;
   float salarioF,salarioD;
	//Filtro para un salario valido
	do{
		
	cout << "Introduzca los ingresos de la empresa: ";
	cin >> ingresos;	
	
	cout << "Introduzca la retencion fiscal: ";
	cin >> retener;
	
	}while(ingresos <= 0 || retener <= 0);
	//Creo el objeto pago
	Nomina pago(ingresos,retener);
	
   pago.Salario(ingresos,salarioD,salarioF);
   
   Cout2("El salario bruto del disenador es: ",salarioD);
   Cout2("El salario neto del disenador es: ", pago.Aplicar_Retencion(salarioD));
   
   
   Cout2("El salario bruto del disenador es: ",salarioF);
   Cout2("El salario neto del disenador es: ", pago.Aplicar_Retencion(salarioF));
   
 
	
	
	
	
}
