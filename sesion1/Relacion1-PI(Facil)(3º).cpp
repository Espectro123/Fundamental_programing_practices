      #include <iostream>
      
      
      /* 
      Este programa recogo el radio y muestra la longuitud de la circuneferencia
      y el area del circulo
      */
      
      
      
      // Deaclaro la constante PI
      const float PI = 3.1415927;
      
      using namespace std;
      
      // Comienzo el programa en la funcion main
      int main(){
         
         // Declaro las variables a usar
         float radio;
         float circunferencia;
         float area;
         
         // Pido el radio del circulo
         cout << "Introduzca el radio del circulo: ";
         cin >> radio;
         
         // Hallo la circunferencia circulo
         circunferencia = 2*PI*radio;
         
         // Hallo el area del circulo
         area = PI*(radio*radio);
         
         // Muestro el  los resultados obtenido en pantalla a traves de la consola
 
         cout << "\n\nLa longuitud de la circunferencia es: " << circunferencia << "\n\n";
 
         cout << "La longuitud del area es: " << area << "\n\n";
         
         // Mantengo el programa cerrado
                   
         system("PAUSE");
         
         }
