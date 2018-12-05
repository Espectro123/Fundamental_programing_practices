#include <iostream>

using namespace std;

const int RANGO = ('A'-'a');

int main(){


char letra;



do{

cout << "Introduzca una letra mayuscula POR FAVOR: ";
cin >> letra;

cout << endl;

}while(letra < 'A' || letra > 'Z');

letra = letra - RANGO;

cout << "La minuscula correspondiente es: " << letra << endl;;

}


