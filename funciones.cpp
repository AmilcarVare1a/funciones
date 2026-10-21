#include <iostream>
#include <math.h>
using namespace std;


float areaCuadrado(float lado)
{
  float resultado = 0;
  resultado = lado * lado;
 
return resultado;
}

float volumenCilindro(float radio, float altura)
{
  float resultado = 0;

  resultado = radio * radio * altura;
  
  return resultado;
}


float volumenEsfera(float radio)
{
   float resultado = 0; const double PI =3.1416;
   resultado = ((4.0/3.0) * PI * radio * radio * radio);

   return resultado;
}







int main(){
   
    int opcion;
    float lado, radio, altura, resultado;


   cout<< "=============================" << endl;
   cout<< "============Menu=============" << endl;
   cout<< "1.Calcular el area de un cuadrado" << endl;
   cout<< "2.Calcular el volumen de un cilindro"<< endl;
   cout<< "3.Calcular el volumen de una esfera" << endl;
   cout<< "4.Salir del programa" << endl;
   cin >> opcion;


   switch (opcion)
   {
   case 1:
    
     cout << "Ingrese el lado del cuadrado" << endl;
     cin >> lado;
    
     resultado = areaCuadrado(lado);
     cout << "El area del cuadrado es:" << resultado << endl;
     break;
   
   case 2:

     cout << "Ingrese el radio" << endl;
     cin >> radio;

     cout << "Ingrese la altura" << endl;
     cin >> altura;

     resultado = volumenCilindro(radio, altura);
     cout <<"El volumen de un cilindro es:" << resultado << endl;
     break;
  

   case 3:
     
    cout << "Ingrese el radio de la esfera" << endl;
    cin >> radio;

    resultado = volumenEsfera(radio);
    cout << "El radio de la esfera es:" << resultado << endl;
    break;

   case 4:
    
     cout << " Saliendo del programa " << endl;
     break;

     default:
     cout << "Opcion no valida" << endl;
     break; 


   }



    return 0;
}