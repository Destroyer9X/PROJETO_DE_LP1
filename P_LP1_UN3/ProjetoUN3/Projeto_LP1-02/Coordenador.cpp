#include "Coordenador.hpp"
#include <iostream>
#include <algorithm>

// Inicialização da variável estática totalCoordenadores
int Coordenador::totalCoordenadores = 0;

// Construtor parametrizado da classe Coordenador
Coordenador::Coordenador(const std::string& nome, const std::string& cpf, const std::string& dataNascimento,
                         const std::string& nivelEscolaridade, const std::string& genero, int numeroMatricula,
                         const std::string& disciplina, double salario, const std::string& departamento)
    : nome(nome), cpf(cpf), dataNascimento(dataNascimento), nivelEscolaridade(nivelEscolaridade),
      genero(genero), numeroMatricula(numeroMatricula), disciplina(disciplina), salario(salario),
      departamento(departamento) {
    totalCoordenadores++;  // Incremento do total de coordenadores ao criar um novo objeto Coordenador
}

// Destrutor da classe Coordenador
Coordenador::~Coordenador() {
    totalCoordenadores--;  // Decremento do total de coordenadores ao destruir um objeto Coordenador
}

// Construtor padrão da classe Coordenador
Coordenador::Coordenador() {
    // Inicialize seus membros, se necessário
}

// Métodos Get para obter informações dos membros privados
std::string Coordenador::getNome() const {
    return nome;
}

std::string Coordenador::getCPF() const {
    return cpf;
}

std::string Coordenador::getDataNascimento() const {
    return dataNascimento;
}

std::string Coordenador::getNivelEscolaridade() const {
    return nivelEscolaridade;
}

std::string Coordenador::getGenero() const {
    return genero;
}

int Coordenador::getNumeroMatricula() const {
    return numeroMatricula;
}

std::string Coordenador::getDisciplina() const {
    return disciplina;
}

double Coordenador::getSalario() const {
    return salario;
}

std::string Coordenador::getDepartamento() const {
    return departamento;
}

// Métodos Set para modificar os membros privados
void Coordenador::setNome(const std::string& nome) {
    this->nome = nome;
}

void Coordenador::setCPF(const std::string& cpf) {
    this->cpf = cpf;
}

void Coordenador::setDataNascimento(const std::string& dataNascimento) {
    this->dataNascimento = dataNascimento;
}

void Coordenador::setNivelEscolaridade(const std::string& nivelEscolaridade) {
    this->nivelEscolaridade = nivelEscolaridade;
}

void Coordenador::setGenero(const std::string& genero) {
    this->genero = genero;
}

void Coordenador::setNumeroMatricula(int numeroMatricula) {
    this->numeroMatricula = numeroMatricula;
}

void Coordenador::setDisciplina(const std::string& disciplina) {
    this->disciplina = disciplina;
}

void Coordenador::setSalario(double salario) {
    this->salario = salario;
}

void Coordenador::setDepartamento(const std::string& departamento) {
    this->departamento = departamento;
}

// Método para cadastrar um novo coordenador
void Coordenador::cadastrar() {
    std::cout << "Cadastro do coordenador:\n";

    // Entrada dos dados do coordenador
    std::cout << "Digite o nome: ";
    std::cin.ignore();
    std::getline(std::cin, nome);

    std::cout << "Digite o CPF: ";
    std::getline(std::cin, cpf);

    std::cout << "Digite a Data de Nascimento: ";
    std::getline(std::cin, dataNascimento);

    std::cout << "Digite o Nivel de Escolaridade: ";
    std::getline(std::cin, nivelEscolaridade);

    std::cout << "Digite o Genero: ";
    std::getline(std::cin, genero);

    std::cout << "Digite o Numero de Matricula: ";
    std::cin >> numeroMatricula;
    std::cin.ignore();

    std::cout << "Digite a Disciplina: ";
    std::getline(std::cin, disciplina);

    std::cout << "Digite o Salario: ";
    std::cin >> salario;
    std::cin.ignore();

    std::cout << "Digite o Departamento: ";
    std::getline(std::cin, departamento);

    std::cout << "\nCadastro realizado com sucesso!\n\n";
}

// Método estático para deletar um coordenador por matrícula
void Coordenador::deletarPorMatricula(std::vector<Coordenador>& coordenadores, int matricula) {
    auto it = std::remove_if(coordenadores.begin(), coordenadores.end(),
                             [matricula](const Coordenador& coordenador) {
                                 return coordenador.getNumeroMatricula() == matricula;
                             });

    if (it != coordenadores.end()) {
        coordenadores.erase(it, coordenadores.end());
        std::cout << "Coordenador deletado com sucesso!\n";
    } else {
        std::cout << "Coordenador com a matrícula especificada não encontrado.\n";
    }
}

// Implementação do método estático listarTodosCoordenadores
void Coordenador::listarTodosCoordenadores(const std::vector<Coordenador>& coordenadores) {
    // Verifica se o vetor de coordenadores está vazio
    if (coordenadores.empty()) {
        // Se estiver vazio, imprime uma mensagem informando que nenhum coordenador está cadastrado
        std::cout << "Nenhum coordenador cadastrado.\n";
    } else {
        // Se o vetor não estiver vazio, imprime uma mensagem indicando que a lista de coordenadores será exibida
        std::cout << "Lista de Coordenadores:\n";

        // Itera sobre cada coordenador no vetor
        for (const auto& coordenador : coordenadores) {
            // Chama o método mostrarInformacoes() para exibir os detalhes do coordenador atual
            coordenador.mostrarInformacoes();
        }
    }
}

// Método estático para buscar um coordenador por matrícula
void Coordenador::buscarPorMatricula(const std::vector<Coordenador>& coordenadores, int matricula) {
    for (const auto& coordenador : coordenadores) {
        if (coordenador.getNumeroMatricula() == matricula) {
            coordenador.mostrarInformacoes();
            return;  // Sai da função após imprimir as informações
        }
    }

    // Se chegou aqui, o coordenador não foi encontrado
    std::cout << "Coordenador nao encontrado\n";
}

// Método para exibir informações do coordenador
void Coordenador::mostrarInformacoes() const {
    std::cout << "Informacoes do coordenador:\n";
    std::cout << "Nome: " << nome << "\nCPF: " << cpf << "\nData de Nascimento: " << dataNascimento
              << "\nNivel de Escolaridade: " << nivelEscolaridade << "\nGenero: " << genero
              << "\nNumero de Matricula: " << numeroMatricula << "\nDisciplina: " << disciplina
              << "\nSalario: " << salario << "\nDepartamento: " << departamento << "\n\n";
}

// Método estático para contar o total de coordenadores
int Coordenador::contarCoordenadores() {
    return totalCoordenadores;
}
