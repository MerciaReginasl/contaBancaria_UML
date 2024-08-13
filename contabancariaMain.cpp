#include "ContaBancaria.hpp"
#include <iostream>
#include <string>

using namespace std;

int main(){
  string nome_temp;
  ContaBancaria *conta1, *conta2;

  cout << "Digite o nome do titular da conta 1: " << endl;
  getline(cin, nome_temp);
  conta1 = new ContaBancaria(nome_tem);

  cout << "Digite o nome do titular da conta 2: " << endl;
  getline(cin, nome_temp);
  conta2 = new ContaBancaria(nome_tem);

  cout << "Depositando R$ 103 na conta 1" << endl;
  conta1->depositar(103);
  cout << "Depositando R$ 245 na conta 2" << endl;
  conta2->depositar(245);

  cout << "Sacando R$ 50 na conta 1" << endl;
  conta1->sacar(103);
  cout << "Sacando R$ 500 na conta 2" << endl;
  conta2->sacar(245);
  
}