#include <iostream>


using namespace std;


int main(){

//Declaro las variables para usar en el programa
int numero1,numero2,numero3;

cout << "Introduzca el primer numero: ";
cin >> numero1;

cout << endl;

cout << "Introduzca el segundo numero: ";
cin >> numero2;

cout << endl;

cout << "Introduzca el tercer numero: ";
cin >> numero3;

cout << endl;



if(numero1 > numero2 && numero2 > numero3){

cout << "Los numeros estan ordenados de mayor a menor";

}

else if( numero1 < numero2 && numero2 < numero3 ){

   cout << "Los numeros estan ordenados de menor a mayor";

}
	else {

       cout << "Los numeros no tienen ningun orden";

}


























}
