#ifndef CONTABANCARIA_HPP // nome da artigo
#define CONTABANCARIA_HPP

#include <string> 
using namespace std;

class ContaBancaria {
  private:
    string nomeProprietario;
    int numero;
    float saldo;
  public:
    static int PROX_NUM_CONTA;
    ContaBancaria(string nomeDoProprietario);
    void sacar(float valor);
    void depositar(float valor);
    string visualizar();
    string getNomeProprietario();
    int getNumero();
    float getSaldo();
  
}

#endif