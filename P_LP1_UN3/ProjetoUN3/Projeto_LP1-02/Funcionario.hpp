#pragma once
#include <string>
#include "Pessoa.hpp"
#include "Endereco.hpp"

// Classe Funcionario estende a classe Pessoa.
class Funcionario : public Pessoa {
protected:
    // Atributos protegidos da classe Funcionario.
    std::string matricula;       // Matrícula do funcionário.
    float salario;               // Salário do funcionário.
    std::string departamento;    // Departamento onde o funcionário trabalha.
    int cargaHoraria;            // Carga horária semanal do funcionário.
    std::string dataIngresso;    // Data de ingresso do funcionário na instituição.

public:
    // Construtor padrão da classe Funcionario.
    Funcionario();

    // Construtor da classe Funcionario com parâmetros de inicialização.
    Funcionario(std::string matricula, float salario, std::string departamento,
                int cargaHoraria, std::string dataIngresso, std::string nome,
                std::string cpf, std::string dataNascimento, std::string genero,
                Endereco endereco);

    // Métodos Gets da classe Funcionario.
    std::string getmatricula();        // Obtém a matrícula do funcionário.
    float getsalario();                // Obtém o salário do funcionário.
    std::string getdepartamento();     // Obtém o departamento do funcionário.
    int getcargahoraria();             // Obtém a carga horária semanal do funcionário.
    std::string getdataIngresso();     // Obtém a data de ingresso do funcionário.

    // Métodos Sets da classe Funcionario.
    void setmatricula(std::string matricula);        // Define a matrícula do funcionário.
    void setsalario(float salario);                  // Define o salário do funcionário.
    void setdepartamento(std::string departamento); // Define o departamento do funcionário.
    void setcargahoraria(int cargaHoraria);          // Define a carga horária semanal do funcionário.
    void setdataIngresso(std::string dataIngresso);  // Define a data de ingresso do funcionário.

    // Método virtual puro para calcular o salário do funcionário.
    virtual float calcularsalario() = 0;
};
