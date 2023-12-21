#include "Endereco.hpp"
#include <iostream>

// Construtor da classe Endereco com parâmetros de inicialização.
Endereco::Endereco(std::string rua, int numero, std::string bairro, std::string cidade, std::string cep)
    : rua(rua), numero(numero), bairro(bairro), cidade(cidade), cep(cep)
{
}

// Construtor padrão da classe Endereco.
Endereco::Endereco()
{
}

// Método Get para obter o nome da rua.
std::string Endereco::getrua()
{
    return rua;
}

// Método Get para obter o número do endereço.
int Endereco::getnumero()
{
    return numero;
}

// Método Get para obter o nome do bairro.
std::string Endereco::getbairro()
{
    return bairro;
}

// Método Get para obter o nome da cidade.
std::string Endereco::getcidade()
{
    return cidade;
}

// Método Get para obter o CEP.
std::string Endereco::getcep()
{
    return cep;
}

// Métodos Set para modificar os atributos da classe.
void Endereco::setrua(std::string rua)
{
    this->rua = rua;
}

void Endereco::setnumero(int numero)
{
    this->numero = numero;
}

void Endereco::setbairro(std::string bairro)
{
    this->bairro = bairro;
}

void Endereco::setcidade(std::string cidade)
{
    this->cidade = cidade;
}

void Endereco::setcep(std::string cep)
{
    this->cep = cep;
}
