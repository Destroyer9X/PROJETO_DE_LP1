#include "Professor.hpp"
#include <string>
#include "Funcionario.hpp"

// Construtor padrão da classe Professor
Professor::Professor() {
    // O construtor padrão não recebe parâmetros, mas pode ser utilizado para inicializar membros, se necessário.
}

// Construtor da classe Professor com parâmetros de inicialização
Professor::Professor(std::string nivelProfessor, std::string formacaoProfessor, std::string disciplina,
                     std::string matricula, float salario, std::string departamento, int cargaHoraria,
                     std::string dataIngresso, std::string nome, std::string cpf, std::string dataNascimento,
                     std::string genero, Endereco endereco)
    : nivelProfessor(nivelProfessor),
      formacaoProfessor(formacaoProfessor),
      disciplina(disciplina),
      // Chama o construtor da classe base (Funcionario) com a lista de inicialização
      Funcionario(matricula, salario, departamento, cargaHoraria, dataIngresso, nome, cpf, dataNascimento, genero, endereco) {
    // A lista de inicialização é usada para inicializar membros da classe antes do corpo do construtor.
}

// Métodos Gets da classe Professor
std::string Professor::getnivelProfessor() {
    return nivelProfessor;
}

std::string Professor::getformacaoProfessor() {
    return formacaoProfessor;
}

std::string Professor::getdisciplina() {
    return disciplina;
}

// Métodos Sets da classe Professor
void Professor::setnivelProfessor(std::string nivelProfessor) {
    this->nivelProfessor = nivelProfessor;
}

void Professor::setformacaoProfessor(std::string formacaoProfessor) {
    this->formacaoProfessor = formacaoProfessor;
}

void Professor::setdisciplina(std::string disciplina) {
    this->disciplina = disciplina;
}

// Método para calcular o salário (método da classe base Funcionario, que é sobrescrito)
float Professor::calcularsalario() {
    return salario;  // Retorna o salário do professor
}