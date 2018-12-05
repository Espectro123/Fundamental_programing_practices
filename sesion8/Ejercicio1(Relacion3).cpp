#include <iostream>

using namespace std;


/*
La primera funcion <<ValorAbsoluto>> tiene el error en el return, ya que si
entero es < 0 nunca se va a acceder al return de la funcion.
Por esta razon, la funcion int ValorAbsoluto podrá no devolver ningun valor.
*/

/*
La segunda funcion <<Imprime>> tiene un conflicto entre variables.
Al declarar una variable local con el mismo nombre que la que se le pasa a la funcion
e imprimirla, produce un error ya que ambas variables estan declaradas con el mismo nombre.
*/

/*
La tercera funcion <<Cuadrado>> tiene el error en la declaracion del tipo de la funcion.
Si quisieramos devolver un resultado entero deberiamos de declarar dicha funcion como una 
funcion tipo int y no tipo void, ya que las funciones tipo void no devuleven nada.
*/

/*
La cuarta funcion <<EsPositivo>> no devulve un resultado correcto si el valor introducido es negativo
por lo que seria necesario contemplar este caso con un else o creando una variable bool local que sea true
si valor es positivo o false si es negativo y tras este if-else imprimir dicha varaible bool
*/
