#include <string>
#include "Endereco.hpp"
#include <iostream>
#include "Pessoa.hpp"
#include <fstream>

// Construtor da classe Pessoa com os parâmetros de inicialização.
Pessoa::Pessoa(std::string nome, std::string cpf, std::string dataNascimento, std::string genero, Endereco endereco)
    : nome(nome), cpf(cpf), dataNascimento(dataNascimento), genero(genero), endereco(endereco) {
}

// Construtor padrão da classe Pessoa (sem parâmetros).
Pessoa::Pessoa() {
}

// Método Gets da classe Pessoa para obter o nome.
std::string Pessoa::getnome() {
    return nome;
}

// Método Gets da classe Pessoa para obter o CPF.
std::string Pessoa::getcpf() {
    return cpf;
}

// Método Gets da classe Pessoa para obter a data de nascimento.
std::string Pessoa::getdataNascimento() {
    return dataNascimento;
}

// Método Gets da classe Pessoa para obter o gênero.
std::string Pessoa::getgenero() {
    return genero;
}

// Método Gets da classe Pessoa para obter o endereço.
Endereco Pessoa::getendereco() {
    return endereco;
}

// Métodos Sets da classe Pessoa para definir o nome.
void Pessoa::setnome(std::string nome) {
    this->nome = nome;
}

// Métodos Sets da classe Pessoa para definir o CPF.
void Pessoa::setcpf(std::string cpf) {
    this->cpf = cpf;
}

// Métodos Sets da classe Pessoa para definir a data de nascimento.
void Pessoa::setdataNascimento(std::string dataNascimento) {
    this->dataNascimento = dataNascimento;
}

// Métodos Sets da classe Pessoa para definir o gênero.
void Pessoa::setgenero(std::string genero) {
    this->genero = genero;
}

// Métodos Sets da classe Pessoa para definir o endereço.
void Pessoa::setendereco(Endereco endereco) {
    this->endereco = endereco;
}
