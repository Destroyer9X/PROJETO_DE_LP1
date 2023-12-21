#include "TecnicoADM.hpp"
#include <string>
#include "Funcionario.hpp"

// Construtor da classe TécnicoADM com parâmetros de inicialização.
TecnicoADM::TecnicoADM(std::string funcaoDesempenhada, std::string matricula, float salario, std::string departamento,
                       int cargaHoraria, std::string dataIngresso, std::string nome, std::string cpf,
                       std::string dataNascimento, std::string genero, Endereco endereco)
    : funcaoDesempenhada(funcaoDesempenhada),
      Funcionario(matricula, salario, departamento, cargaHoraria, dataIngresso, nome, cpf, dataNascimento, genero, endereco),
      adicionalProdutividade(0.25) {
    // A lista de inicialização é usada para inicializar membros da classe antes do corpo do construtor.
}

// Construtor padrão da classe TécnicoADM
TecnicoADM::TecnicoADM() {
    // O construtor padrão não recebe parâmetros, mas pode ser utilizado para inicializar membros, se necessário.
}

// Método Gets da Classe TécnicoADM
std::string TecnicoADM::getfuncaoDesempenhada() {
    return funcaoDesempenhada;
}

// Método Sets da Classe TécnicoADM
void TecnicoADM::setfuncaoDesempenhada(std::string funcaoDesempenhada) {
    this->funcaoDesempenhada = funcaoDesempenhada;
}

// Método para calcular o salário (método da classe base Funcionario, que é sobrescrito)
float TecnicoADM::calcularsalario() {
    return salario + (salario * adicionalProdutividade);
    // Retorna o salário do TécnicoADM com adicional de produtividade
}
