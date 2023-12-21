#pragma once
#include <string>
#include <vector>

class Coordenador {
private:
    std::string nome;                 // Nome do coordenador
    std::string cpf;                  // CPF do coordenador
    std::string dataNascimento;       // Data de nascimento do coordenador
    std::string nivelEscolaridade;    // Nível de escolaridade do coordenador
    std::string genero;               // Gênero do coordenador
    int numeroMatricula;              // Número de matrícula do coordenador
    std::string disciplina;           // Disciplina do coordenador
    double salario;                   // Salário do coordenador
    std::string departamento;         // Departamento ao qual o coordenador pertence
    static int totalCoordenadores;    // Variável estática para contar o total de coordenadores

public:
    // Construtor que inicializa os membros da classe
    Coordenador(const std::string& nome, const std::string& cpf, const std::string& dataNascimento,
                const std::string& nivelEscolaridade, const std::string& genero, int numeroMatricula,
                const std::string& disciplina, double salario, const std::string& departamento);

    // Destrutor da classe Coordenador
    ~Coordenador();

    // Construtor padrão
    Coordenador();

    // Métodos Get para obter informações dos membros privados
    std::string getNome() const;
    std::string getCPF() const;
    std::string getDataNascimento() const;
    std::string getNivelEscolaridade() const;
    std::string getGenero() const;
    int getNumeroMatricula() const;
    std::string getDisciplina() const;
    double getSalario() const;
    std::string getDepartamento() const;

    // Métodos Set para modificar os membros privados
    void setNome(const std::string& nome);
    void setCPF(const std::string& cpf);
    void setDataNascimento(const std::string& dataNascimento);
    void setNivelEscolaridade(const std::string& nivelEscolaridade);
    void setGenero(const std::string& genero);
    void setNumeroMatricula(int numeroMatricula);
    void setDisciplina(const std::string& disciplina);
    void setSalario(double salario);
    void setDepartamento(const std::string& departamento);

    // Método para listar todos os coordenadores
    static void listarTodosCoordenadores(const std::vector<Coordenador>& coordenadores);

    // Método para deletar um coordenador
    static void deletarPorMatricula(std::vector<Coordenador>& coordenadores, int matricula);

    // Método para cadastrar um novo coordenador
    void cadastrar();

    // Método para exibir informações do coordenador
    void mostrarInformacoes() const;

    // Método estático para contar o total de coordenadores
    static int contarCoordenadores();

    // Método estático para buscar um coordenador por matrícula
    static void buscarPorMatricula(const std::vector<Coordenador>& coordenadores, int matricula);
};
