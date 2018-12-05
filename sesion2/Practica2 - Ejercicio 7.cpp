  #include <iostream>
  #include <cmath>
	
	/*
	------------Datos-----------
	Nombre: Enrique Casale Linde 
	DNI: 75575156P
	Grupo: D 
	Grupo de practicas: D2
	----------------------------
	*/
		
	
	/*
	Este programa calcula la media aritmetica y
	la desviacion tipica siguiendo la formulas de la relacion 1
	ejercicio 7
	*/
	
	using namespace std;
	
	
	int main(){
	
	//Declaro las variables
	double n1,n2,n3,media,desviacion;
	
	// Pido la altura de 3 personas
	cout << "Introduce la altura de  la persona numero 1: ";
	cin >> n1;
	cout << "\n";
	
	cout << "Introduce la altura de  la persona numero 2: ";
	cin >> n2;
	cout << "\n";
	
	cout << "Introduce la altura de  la persona numero 3: ";
	cin >> n3;
	cout << "\n";
	
	// Calculo la media aritmetica y la desviacion tipica
	media = 1.0/3.0 * (n1+n2+n3);
	
	desviacion = sqrt(1.0/3.0 * ( pow(n1-media,2) +  pow(n2-media,2) +  pow(n3-media,2)  ));
	
	// Imprimo los valores obtenidos en la pantalla
	cout << "La media aritmetica es: " << media ;
	
	cout << "\n\nLa desviacion tipica es: " << desviacion;
	
	}
	
	

