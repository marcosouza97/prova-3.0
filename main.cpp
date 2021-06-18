#include <iostream>
#include "funcao.cpp"

using namespace std;


int main() {
  
  tTriangulo base, altura, hip,aux;


  cout << "Digite o lado 1: " <<endl;
  cin >> base.lado1;

  cout << "Digite o lado 2: " << endl;
  cin >> altura.lado2;

  cout << "Digite o lado 3: " << endl;
  cin >> hip.lado3;

  aux.mostraArea(base.lado1, altura.lado2);
  aux.mostraPerimetro(base.lado1, altura.lado2, hip.lado3);

}