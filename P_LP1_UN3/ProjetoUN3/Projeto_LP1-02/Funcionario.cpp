#include <iostream>
#include <string>
#include "Funcionario.hpp"

// Construtor padrão da classe Funcionário.
Funcionario::Funcionario() {
    // O construtor padrão pode ser utilizado para inicializações específicas, se necessário.
}

// Construtor da classe Funcionário com parâmetros de inicialização.
Funcionario::Funcionario(std::string matricula, float salario, std::string departamento,
                         int cargaHoraria, std::string dataIngresso, std::string nome,
                         std::string cpf, std::string dataNascimento, std::string genero, Endereco endereco)
    : matricula(matricula),
      salario(salario),
      departamento(departamento),
      cargaHoraria(cargaHoraria),
      dataIngresso(dataIngresso),
      Pessoa(nome, cpf, dataNascimento, genero, endereco) {
    // O construtor com parâmetros inicia os atributos da classe Funcionário e chama o construtor da classe base (Pessoa).
}

// Métodos Gets da classe Funcionário.
std::string Funcionario::getmatricula() {
    return matricula;
}

float Funcionario::getsalario() {
    return salario;
}

std::string Funcionario::getdepartamento() {
    return departamento;
}

int Funcionario::getcargahoraria() {
    return cargaHoraria;
}

std::string Funcionario::getdataIngresso() {
    return dataIngresso;
}

// Métodos Sets da classe Funcionário.
void Funcionario::setmatricula(std::string matricula) {
    this->matricula = matricula;
}

void Funcionario::setsalario(float salario) {
    this->salario = salario;
}

void Funcionario::setdepartamento(std::string departamento) {
    this->departamento = departamento;
}

void Funcionario::setcargahoraria(int cargaHoraria) {
    this->cargaHoraria = cargaHoraria;
}

void Funcionario::setdataIngresso(std::string dataIngresso) {
    this->dataIngresso = dataIngresso;
}
