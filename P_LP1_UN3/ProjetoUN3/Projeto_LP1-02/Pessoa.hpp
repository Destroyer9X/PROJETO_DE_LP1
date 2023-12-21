#pragma once
#include <string>
#include "Endereco.hpp"

// Classe Pessoa: representa uma entidade genérica com informações básicas.
class Pessoa {
protected:
    // Atributos protegidos
    std::string nome;               // Nome da pessoa
    std::string cpf;                // CPF da pessoa
    std::string dataNascimento;     // Data de nascimento da pessoa
    std::string genero;             // Gênero da pessoa (ex: masculino, feminino)
    Endereco endereco;              // Endereço da pessoa

public:
    // Construtor da classe Pessoa com parâmetros de inicialização.
    Pessoa(std::string nome, std::string cpf, std::string dataNascimento, std::string genero, Endereco endereco);

    // Construtor padrão da classe Pessoa (sem parâmetros).
    Pessoa();

    // Métodos Gets da Classe Pessoa
    std::string getnome();           // Obtém o nome da pessoa
    std::string getcpf();            // Obtém o CPF da pessoa
    std::string getdataNascimento(); // Obtém a data de nascimento da pessoa
    std::string getgenero();         // Obtém o gênero da pessoa
    Endereco getendereco();           // Obtém o endereço da pessoa

    // Métodos Sets da Classe Pessoa
    void setnome(std::string nome);                  // Define o nome da pessoa
    void setcpf(std::string cpf);                    // Define o CPF da pessoa
    void setdataNascimento(std::string dataNasc);    // Define a data de nascimento da pessoa
    void setgenero(std::string genero);              // Define o gênero da pessoa
    void setendereco(Endereco endereco);             // Define o endereço da pessoa
};
