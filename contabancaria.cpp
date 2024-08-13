#include "contabancaria.hpp"
#include <iostream>
#include <iomanip>
#include <string>

int ContaBancaria::PROX_NUM_CONTA = 1;

//
//ContaBancaria::ContaBancaria(string nomeDoProprietario) {
//  this->nomeProprietario = nomeDoProprietario;
//  this->numero = ContaBancaria::PROX_NUM_CONTA;
//  this->saldo = 0;
  
//};

//ou 

ContaBancaria::ContaBancaria(string nomeDoProprietario):
nomeProprietario(nomeDoProprietario), 
numero(ContaBancaria::PROX_NUM_CONTA++),
saldo(0.0) {
  //inicializar o saldo com 0
};

void ContaBancaria::sacar(float valor){
  if(valor > this->saldo){
    cout << "Saldo insuficiente" << endl;
    
  } else{
    this->saldo -= valor;
    
  }
}

void ContaBancaria::depositar(float) {
  this->saldo += valor;
  
}

string ContaBancaria::visualizar(){
  cout << "============================================================== " << endl;
  cout << "Nome do Titular: " << this->nomeProprietario << endl;
  cout << "Numero da Conta: " << this->numero << endl;
  cout << "Saldo: R$ " << fixed << setprecision(2) << this->saldo << endl; 
  cout << "==============================================================" << endl;
  
};

string ContaBancaria::getNomeProprietario(){
  return this->nomeProprietario;
};

int ContaBancaria::getNumero(){
  return this->numero;
};
 
float ContaBancaria::getSaldo(){
  return this->saldo;

};
 
