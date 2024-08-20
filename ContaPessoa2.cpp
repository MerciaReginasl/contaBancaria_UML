#include <iostream>
#include <string>

class ContaPessoa {
private:
    std::string nome;
    std::string cpf;
    double saldo;

public:
    // Construtor
    ContaPessoa(std::string nome, std::string cpf, double saldo_inicial)
        : nome(nome), cpf(cpf), saldo(saldo_inicial) {}

    // Getter para o nome
    std::string getNome() const {
        return nome;
    }

    // Getter para o CPF
    std::string getCpf() const {
        return cpf;
    }

    // Getter para o saldo
    double getSaldo() const {
        return saldo;
    }

    // Método para depositar dinheiro
    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de " << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Valor de depósito inválido.\n";
        }
    }

    // Método para sacar dinheiro
    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de " << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "Valor de saque inválido ou saldo insuficiente.\n";
        }
    }

    // Método para exibir o saldo
    void exibirSaldo() const {
        std::cout << "Saldo atual: " << saldo << "\n";
    }
};

int main() {
    // Criando uma conta para um usuário
    ContaPessoa conta("João Silva", "123.456.789-00", 1000.0);

    // Exibindo informações da conta
    std::cout << "Nome: " << conta.getNome() << "\n";
    std::cout << "CPF: " << conta.getCpf() << "\n";
    conta.exibirSaldo();

    // Realizando um depósito
    conta.depositar(500.0);

    // Realizando um saque
    conta.sacar(200.0);

    // Exibindo saldo final
    conta.exibirSaldo();

    return 0;
}