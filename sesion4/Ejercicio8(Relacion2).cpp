#include <iostream>


using namespace std;

int main(){

//Declaro la variable a�o en ingles por el tema de la �

int year;
   
//Pido la entrada del a�o

cout << "Enter a year please: ";
cin >> year;
cout << endl;

  //Miro si el a�o introducido es bisisesto 
  
  if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
  
  cout << "The entered year is  a leap year.";
   
  }
  
  else{
  
  cout << "The entered year is not a leap year";
  
  }
	
}
