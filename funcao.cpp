#include <iostream>
#include <math.h>

using namespace std;

// declaração da estrutura
struct tTriangulo{
  float lado1=0.0;
  float lado2=0.0;
  float lado3=0.0;
  float aux;

// função que vai receber as informações para o calculo da are
  void mostraArea(float altura, float base){
    cout << "Area da figura  eh: "<<(altura*base)/2<<" m²"<< endl;
    cout << endl;

  }
// função que vai receber as informações para o perimetro
  void mostraPerimetro(float co, float ca, float hp){
    cout << "O valor do perimetro eh: " << co + ca + hp <<"m"<< endl;
    cout <<endl;
  }


// função que vai receber as informações para achar hipotenusa
  void mostraHipotenusa(float catetoOposto, float catetoAdjacente){
    float hipotenusa;

    hipotenusa = sqrt(catetoOposto*catetoOposto + catetoAdjacente*catetoAdjacente);

    cout << "valor da hipotenusa eh: " << hipotenusa<<endl;
    cout << endl;
  }

//*******************************************************

// Essa situação eh para caso seja informado apenas os valores dos catetos, ou seja sem a informação da hipotenusa


void mostraCatetos(float cOposto,float cAdjacente){
  
  float hip = sqrt(cOposto*cOposto + cAdjacente*cAdjacente);

  float perimetro = cAdjacente + cOposto + hip;

  cout << "O valor da hipotenusa eh: " << hip << endl;
  cout <<endl;
 
  cout << "O valor do perimetro eh: " << perimetro <<"m" << endl;


}

};