#pragma once
#include <string>

class Endereco
{
protected:
    // Atributos protegidos
    std::string rua;     // Nome da rua
    int numero;           // Número do endereço
    std::string bairro;   // Nome do bairro
    std::string cidade;   // Nome da cidade
    std::string cep;      // CEP (Código de Endereçamento Postal)

public:
    // Métodos públicos

    // Construtor padrão da classe Endereco.
    Endereco();

    // Construtor da classe Endereco com parâmetros de inicialização.
    Endereco(std::string rua, int numero, std::string bairro, std::string cidade, std::string cep);

    // Método Get para obter o nome da rua.
    std::string getrua();

    // Método Get para obter o número do endereço.
    int getnumero();

    // Método Get para obter o nome do bairro.
    std::string getbairro();

    // Método Get para obter o nome da cidade.
    std::string getcidade();

    // Método Get para obter o CEP.
    std::string getcep();

    // Métodos Set para modificar os atributos da classe.
    void setrua(std::string rua);
    void setnumero(int numero);
    void setbairro(std::string bairro);
    void setcidade(std::string cidade);
    void setcep(std::string cep);
};