#include <iostream>

using namespace std;

struct tTriangulo{
  float lado1=0.0;
  float lado2=0.0;
  float lado3=0.0;

  void mostraArea(float x, float y){
    cout << "Area da função eh: "<<(x*y)/2<< endl;

  }

  void mostraPerimetro(float a, float b, float c){
    cout << "O valor do perimetro eh: " << a+b+c << endl;
  }

};