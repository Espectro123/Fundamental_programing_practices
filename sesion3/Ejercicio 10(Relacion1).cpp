#include <iostream>

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
Este ejercicio corresponde al ejercicio 10 de la relacion 1 (Es el ejercicio opcional)
El programa en si no funciona. Simplemente comento en el archivo cpp el porque los 
fragmentos de codigo dan errores o si los dan y en algunos casos propongo una solucion
*/

using namespace std;


int main(){

// Caso a)

/*
En este caso se produce un desvordamiento en la variable chico, ya que 
la operacion chico1 * chico2 se sale del rango del int.
El rango del int es: -2147483648 al 2147483647. En el momento que el int
llege al 2147483647 y se aumente en 1 su valor, pasara a -2147483648.
*/

int chico, chico1, chico2;

chico1 = 123456789;
chico2 = 123456780;

chico = chico1 * chico2;


// Caso b)

/*
En este caso tambien se produce desvordamiento en la variable long
ya que para almacenar el producto de las dos variables "chico" se precisa
mas capacidad de almacenamiento. Aun siendo el rango del long mas grande
que el del int, dicha operacion no se puede almacenar en una sola variable
*/

long grande;
int chico1, chico2;
chico1 = 123456789;
chico2 = 123456780;
grande = chico1 * chico2;


// Caso c) 

/*
En este caso se da un problema de precision que se arregla facilmente con 
la funcion cout.precision(numero_digitos); . La funcion cout solo muestra
la parte entera de la operacion, pero al añadirle esta funcion y poniendole
7 en "numero_digitos" el problema queda arreglado y muestra la parte decimal
de la operacion sin problemas.
*/

//Problema sin resolver
double resultado, real1, real2;
real1 = 123.1;
real2 = 124.2;

resultado = real1 * real2;

//Problema resuelto
double resultado, real1, real2;
real1 = 123.1;
real2 = 124.2;
resultado = real1 * real2;

cout.precision(7);
cout << "Resultado: " << resultado;

// Caso d)

/*
En este caso no hay ningun problema. La operacion se muestra
perfectamente solo que simplificada  siendo multiplicado
por 10^16. En el caso de querer mas digitos en la parte
anteriror del 10^16 solo hay que cambiar el numero 
en la funcion cout.precision(Numero_digitos); , pero esencialmente
funciona a la perfeccion
*/

double resultado, real1, real2;
real1 = 123456789.1;
real2 = 123456789.2;
resultado = real1 * real2;

// Caso e)

/*
En este caso el valor de las variables se almacena bien en otro_real
y la resta de dicha variable con la variable real, las cuales tienen
el mismo valor da 0.

Comentario aparte. Me parece raro que ya se me hayan funcionado bien
dos programas segudios, cuando la finalidad del ejercicio es la de 
especular sobre porque dan errores. Creo que el valor que toma cada
rango de una variable varia segun el ordenador y su arquitectura.

Yo tengo un ordenador de 64 bits que utiliza de S.O windows 7 professional

*/

double real, otro_real;
real = 2e34;
otro_real = real + 1;
otro_real = otro_real - real;


// Caso f)

/*
La ejecucion de este framento de codigo me da como resultado en la consala:
"inf" lo cual me lleva apensar que el resultado de la operacion que se almacena
en otro_real es demasiado grande para ser guardad en dicha varaible. De ahi que
la consola escriba inf.

*/

double real, otro_real;
real = 1e+300;
otro_real = 1e+200;
otro_real = otro_real * real;

// Caso g)

/*
En este caso, al pasar el valor de la variable double "grande" (2e+150) a la variable float
"chico" se produce un error por desvordamiento de la variable float, al almacenar
el valor de la variable double. Al mostrar en pantalla la variable float aparece simplemente
inf, debido a este error.

Esto se debe a que el rango de la variable double es mucho mayor que el de la variable float
lo que supone que, no se puede almacenar a un float un double, cuyo contenido supero el rango
del float
*/

float chico;
double grande;
grande = 2e+150;
chico = grande;
















}
