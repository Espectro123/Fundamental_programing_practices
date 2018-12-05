  #include <iostream>
  #include <cmath>
	
	/*
	------------Datos-----------
	Nombre: Enrique Casale Linde 
	DNI: 75575156P
	Grupo: D 
	Grupo de practicas: D2
	Sesion: 3
	----------------------------
	*/
		
	
	/*
	Este programa calcula la media aritmetica y
	la desviacion tipica siguiendo la formulas de la relacion 1
	ejercicio 7 y esta ampliado segun el ejercicio 1 de la relacion 2
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
	
	
	//Compruebo que alturas estan por encima y por debajo de la media.
	
	
	// Compruebo para n1
	if(n1 < media){
		
	cout << "La altura del sujeto 1 esta por debajo de la media."
	cout << "La altura de dicho sujeto es: " << n1;
	
	}else{
	
	cout << "La altura del sujeto 1 esta por encima de la media o es igual."
	cout << "La altura de dicho sujeto es: " << n1;
	}
	
	// Compruebo para n2
	
	if(n2 < media){
		
	cout << "La altura del sujeto 2 esta por debajo de la media."
	cout << "La altura de dicho sujeto es: " << n2;
	
	}else{
	
	cout << "La altura del sujeto 2 esta por encima de la media o es igual."
	cout << "La altura de dicho sujeto es: " << n2;
	}
	
	// Compruebo para n3
	
	if(n3 < media){
		
	cout << "La altura del sujeto 3 esta por debajo de la media."
	cout << "La altura de dicho sujeto es: " << n3;
	
	}else{
	
	cout << "La altura del sujeto 3 esta por encima de la media o es igual."
	cout << "La altura de dicho sujeto es: " << n3;
	}
	
	
	
	
	
	}
	
	

