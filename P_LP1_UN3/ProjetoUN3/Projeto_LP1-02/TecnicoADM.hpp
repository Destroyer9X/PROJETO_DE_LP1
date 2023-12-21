#pragma once
#include "Funcionario.hpp"
#include <string>
#include "Pessoa.hpp"
#include "Endereco.hpp"

// Classe TécnicoADM estende a classe Funcionario
class TecnicoADM : public Funcionario {
private:
    // Atributos protegidos
    float adicionalProdutividade;
    std::string funcaoDesempenhada;

public:
    // Métodos
    TecnicoADM(std::string funcaoDesempenhada, std::string matricula, float salario, std::string departamento,
               int cargaHoraria, std::string dataIngresso, std::string nome, std::string cpf, std::string dataNascimento,
               std::string genero, Endereco endereco);

    // Construtor padrão da classe TécnicoADM
    TecnicoADM();

    // Método Gets da Classe TécnicoADM
    std::string getfuncaoDesempenhada();

    // Método Sets da Classe TécnicoADM
    void setfuncaoDesempenhada(std::string funcaoDesepenhada);

    // Método para calcular o salário (método da classe base Funcionario, que é sobrescrito)
    float calcularsalario() override;
};
