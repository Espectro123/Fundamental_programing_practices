#include<iostream>
#include<cmath>
using namespace std;
class NumeroComplejo{
private:
	double real,imaginaria;
public:
	NumeroComplejo(){
		real = 1;
		imaginaria = 1;
	}
	NumeroComplejo(double a, double b){
		real = a;
		imaginaria = b;
	}
	
	void MostrarComplejo(){
		cout << "El numero complejo es: " << real << "+" << imaginaria << "i" << endl;
	}
	
	double GetReal(){
		return real;
	}
	
	double GetImaginaria(){
		return imaginaria;
	}
	
	NumeroComplejo Suma(NumeroComplejo a, double &A, double &B){
		double aux1, aux2;
		aux1 = real + a.GetReal();
		aux2 = imaginaria + a.GetImaginaria();
		A = aux1;
		B = aux2;
	}
	
	NumeroComplejo Producto(NumeroComplejo a, double &A, double &B){
		double aux1, aux2;
		aux1 = ((a.GetReal()*real) - (a.GetImaginaria()*imaginaria));
		aux2 = ((a.GetReal()*imaginaria) + (a.GetImaginaria() * real));
		A = aux1;
		B = aux2;
	}
	
	double Modulo(){
		double aux;
		aux = sqrt(pow(real,2) + pow(imaginaria,2));
		return aux;
	}
};	


int main()
{
	double guardar1,guardar2;
	NumeroComplejo n1(2,3);
	NumeroComplejo n2(3,4);
	
	n1.MostrarComplejo();
	n2.MostrarComplejo();
	
	cout << endl;
	
	n1.Suma(n2,guardar1,guardar2);
	cout << "La parte real es " << guardar1 << " y la parte imaginaria es " << guardar2 << "i" << endl;
	
	cout << n1.Modulo();
	n1.Producto(n2,guardar1,guardar2);
	cout << "La parte real es " << guardar1 << " y la parte imaginaria es " << guardar2 << "i" << endl;
}
	
