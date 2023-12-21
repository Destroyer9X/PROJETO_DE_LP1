#pragma once
#include "Professor.hpp"
#include "TecnicoADM.hpp"
#include <string>
#include <iostream>
#include <vector>

// Classe BancoDAO estende as Classes Professor e Técnico ADM
class BancoDAO : public Professor, TecnicoADM
{
private:
    std::vector<Professor> professores;     // Vetor para armazenar professores
    std::vector<TecnicoADM> tecnicosADM;    // Vetor para armazenar técnicos ADM

public:
    // Métodos

    // Cadastra um novo professor
    void cadastrarProfessor();

    // Cadastra um novo técnico ADM
    void cadastrarTecnicoADM();

    // Lista todos os professores cadastrados
    void listarProfessores();

    // Lista todos os técnicos ADM cadastrados
    void listarTecnicosADM();

    // Deleta um professor com base na matrícula
    void deletarProfessor(std::string matricula);

    // Deleta um técnico ADM com base na matrícula
    void deletarTecnico(std::string matricula);

    // Salva a lista de professores em um arquivo
    void salvarProfessor();

    // Salva a lista de técnicos ADM em um arquivo
    void salvarTecnicoADM();

    // Busca e exibe as informações de um professor por matrícula
    void buscarProfessor(std::string matricula);

    // Busca e exibe as informações de um técnico ADM por matrícula
    void buscarTecnicoADM(std::string matricula);

    // Lê as informações de professores de um arquivo
    void lerArquivoProfessor();

    // Lê as informações de técnicos ADM de um arquivo
    void lerArquivoTecnicoADM();
};