#pragma once
#include <string>
#include "Pessoa.hpp"
#include "Endereco.hpp"
#include "Funcionario.hpp"

// Classe Professor estende a classe Funcionario
class Professor : public Funcionario {

protected:
    // Atributos protegidos
    std::string nivelProfessor;      // Nível de professor (por exemplo, "Doutorado", "Mestrado", etc.)
    std::string formacaoProfessor;   // Formação do professor (por exemplo, "Engenharia", "Ciência da Computação", etc.)
    std::string disciplina;          // Disciplina que o professor leciona

public:
    // Construtores
    Professor();  // Construtor padrão
    Professor(std::string nivelProfessor, std::string formacaoProfessor, std::string disciplina, std::string matricula,
              float salario, std::string departamento, int cargaHoraria, std::string dataIngresso, std::string nome,
              std::string cpf, std::string dataNascimento, std::string genero, Endereco endereco);

    // Métodos de acesso

    // Obtém o nível de professor
    std::string getnivelProfessor();

    // Obtém a formação do professor
    std::string getformacaoProfessor();

    // Obtém a disciplina que o professor leciona
    std::string getdisciplina();
    
    // Define o nível de professor
    void setnivelProfessor(std::string nivelProfessor);

    // Define a formação do professor
    void setformacaoProfessor(std::string formacaoProfessor);

    // Define a disciplina que o professor leciona
    void setdisciplina(std::string disciplina);

    // Sobrescrita do método calcularSalario da classe Funcionario
    float calcularsalario() override;
};
