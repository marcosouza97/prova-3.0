#include <iostream>
#include "funcao.cpp"


using namespace std;


int main() {
  
  // declaração das variaveis
  tTriangulo base, altura, hip,aux;

  // Solicitando os valores ao usuario 
  cout << "Digite o lado 1: " <<endl;
  cin >> base.lado1;

  cout << "Digite o lado 2: " << endl;
  cin >> altura.lado2;

  cout << "Digite o lado 3: " << endl;
  cin >> hip.lado3;

  //Chamando os caluclos da funcao.cpp
  //calculo da area
  aux.mostraArea(base.lado1, altura.lado2);
  
  //calculo do perimetro
  aux.mostraPerimetro(base.lado1, altura.lado2, hip.lado3);

  aux.mostraHipotenusa(base.lado1, altura.lado2);

  // ***************************************************


  //caso apenas os catetos fosse informados

  aux.mostraCatetos(base.lado1, altura.lado2);
  

}