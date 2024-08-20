#include <iostream>
#include <string>

class ContaPessoa {
private:
    std::string nome;
    int numeroConta;
    double saldo;

public:
    // Construtor
    ContaPessoa(std::string nome, int numeroConta, double saldoInicial)
        : nome(nome), numeroConta(numeroConta), saldo(saldoInicial) {}

    // Função para depositar dinheiro
    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depositado: R$ " << valor << std::endl;
        } else {
            std::cout << "Valor inválido para depósito." << std::endl;
        }
    }

    // Função para sacar dinheiro
    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Sacado: R$ " << valor << std::endl;
        } else {
            std::cout << "Saldo insuficiente ou valor inválido para saque." << std::endl;
        }
    }

    // Função para exibir informações da conta
    void exibirInformacoes() const {
        std::cout << "Nome: " << nome << std::endl;
        std::cout << "Número da Conta: " << numeroConta << std::endl;
        std::cout << "Saldo: R$ " << saldo << std::endl;
    }

    // Função para obter o saldo
    double getSaldo() const {
        return saldo;
    }
};

int main() {
    // Criação de uma conta para uma pessoa
    ContaPessoa conta("João Silva", 12345, 1000.0);

    // Exibindo informações da conta
    conta.exibirInformacoes();

    // Realizando um depósito
    conta.depositar(500.0);

    // Exibindo saldo após depósito
    std::cout << "Saldo após depósito: R$ " << conta.getSaldo() << std::endl;

    // Realizando um saque
    conta.sacar(300.0);

    // Exibindo saldo após saque
    std::cout << "Saldo após saque: R$ " << conta.getSaldo() << std::endl;

    return 0;
}