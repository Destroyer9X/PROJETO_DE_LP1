#include "Professor.hpp"
#include "TecnicoADM.hpp"
#include <string>
#include <iostream>
#include <vector>
#include "BancoDAO.hpp"
#include <fstream>
#include "Endereco.hpp"
#include <vector>

// template para instanciar endereços
template <typename P, typename E>
void cadastrarEndereco(P &pessoa, E &endereco) { pessoa.setendereco(endereco); }

// Método da Classe DAO para salvar informações dos professores em um arquivo
void BancoDAO::salvarProfessor()
{
    try
    {
        // Abre o arquivo "professores.txt" para escrita
        std::fstream arquivo;
        arquivo.open("professores.txt", std::ios::out);

        // Percorre a lista de professores e escreve suas informações no arquivo
        for (Professor auxProfessor : professores)
        {
            arquivo << auxProfessor.getnivelProfessor() << std::endl;
            arquivo << auxProfessor.getformacaoProfessor() << std::endl;
            arquivo << auxProfessor.getdisciplina() << std::endl;
            arquivo << auxProfessor.getmatricula() << std::endl;
            arquivo << auxProfessor.getsalario() << std::endl;
            arquivo << auxProfessor.getdepartamento() << std::endl;
            arquivo << auxProfessor.getcargahoraria() << std::endl;
            arquivo << auxProfessor.getdataIngresso() << std::endl;
            arquivo << auxProfessor.getnome() << std::endl;
            arquivo << auxProfessor.getcpf() << std::endl;
            arquivo << auxProfessor.getdataNascimento() << std::endl;
            arquivo << auxProfessor.getgenero() << std::endl;
            arquivo << auxProfessor.getendereco().getrua() << std::endl;
            arquivo << auxProfessor.getendereco().getnumero() << std::endl;
            arquivo << auxProfessor.getendereco().getbairro() << std::endl;
            arquivo << auxProfessor.getendereco().getcidade() << std::endl;
            arquivo << auxProfessor.getendereco().getcep() << std::endl;
        }

        // Fecha o arquivo após a escrita
        arquivo.close();
    }
    catch (std::exception &e)
    {
        // Exibe uma mensagem de erro em caso de exceção
        std::cout << "Erro ao escrever dados no arquivo professores.txt: " << e.what() << std::endl;
    }
}

// Método da Classe DAO para cadastrar um novo professor
void BancoDAO::cadastrarProfessor()
{
    try
    {
        // Exibe mensagem de início do cadastro
        std::cout << "CADASTRO DE PROFESSORES!" << std::endl;

        // Solicita e obtém informações do novo professor
        std::cout << "Nivel do professor(I-VIII): ";
        std::string nivelProfessor;
        std::cin >> nivelProfessor;

        std::cout << "Formação do Professor(ESPECIALIZACAO - MESTRADO - DOUTORADO): ";
        std::string formacaoProfessor;
        std::cin >> formacaoProfessor;

        std::cout << "Disciplina: ";
        std::string disciplina;
        std::cin >> disciplina;

        std::cout << "Matricula: ";
        std::string matricula;
        std::cin >> matricula;

        std::cout << "Salario: ";
        float salario;
        std::cin >> salario;

        std::cout << "Departamento: ";
        std::string departamento;
        std::cin >> departamento;

        std::cout << "Carga Horária: ";
        int cargaHoraria;
        std::cin >> cargaHoraria;

        std::cout << "Data Ingresso: ";
        std::string dataIngresso;
        std::cin >> dataIngresso;

        std::cout << "Nome: ";
        std::string nome;
        std::cin.ignore();
        getline(std::cin, nome);

        std::cout << "CPF: ";
        std::string cpf;
        std::cin >> cpf;

        std::cout << "Data de nascimento: ";
        std::string dataNascimento;
        std::cin >> dataNascimento;

        std::cout << "Genero: ";
        std::string genero;
        std::cin >> genero;

        std::cout << "-Endereco- " << std::endl;
        std::cout << " Rua: ";
        std::string rua;
        std::cin.ignore();
        getline(std::cin, rua);

        std::cout << "  Numero: ";
        int numero;
        std::cin >> numero;

        std::cout << "  Bairro: ";
        std::string bairro;
        std::cin.ignore();
        getline(std::cin, bairro);

        std::cout << "  Cidade: ";
        std::string cidade;
        getline(std::cin, cidade);

        std::cout << "  CEP: ";
        std::string cep;
        std::cin >> cep;

        // Cria um objeto Professor com as informações fornecidas
        Professor professor(nivelProfessor, formacaoProfessor, disciplina, matricula, salario, departamento,
                            cargaHoraria, dataIngresso, nome, cpf, dataNascimento, genero, Endereco(rua, numero, bairro, cidade, cep));

        // Adiciona o professor à lista de professores
        professores.push_back(professor);

        // Exibe mensagem de sucesso no cadastro
        std::cout << "CADASTRO REALIZADO COM SUCESSO!" << std::endl;
    }
    catch (std::exception &e)
    {
        // Exibe mensagem de erro em caso de exceção
        std::cout << "Erro ao cadastrar professor: " << e.what() << std::endl;
    }
}

// Método da Classe DAO para salvar os dados dos técnicos ADM em um arquivo
void BancoDAO::salvarTecnicoADM()
{
    try
    {
        // Abre o arquivo "tecnicosADM.txt" para escrita
        std::fstream arquivo;
        arquivo.open("tecnicosADM.txt", std::ios::out);

        // Percorre a lista de técnicos ADM e escreve suas informações no arquivo
        for (TecnicoADM auxTecnico : tecnicosADM)
        {
            arquivo << auxTecnico.getfuncaoDesempenhada() << std::endl;
            arquivo << auxTecnico.getmatricula() << std::endl;
            arquivo << auxTecnico.calcularsalario() << std::endl;
            arquivo << auxTecnico.getdepartamento() << std::endl;
            arquivo << auxTecnico.getcargahoraria() << std::endl;
            arquivo << auxTecnico.getdataIngresso() << std::endl;
            arquivo << auxTecnico.getnome() << std::endl;
            arquivo << auxTecnico.getcpf() << std::endl;
            arquivo << auxTecnico.getdataNascimento() << std::endl;
            arquivo << auxTecnico.getgenero() << std::endl;
            arquivo << auxTecnico.getendereco().getrua() << std::endl;
            arquivo << auxTecnico.getendereco().getnumero() << std::endl;
            arquivo << auxTecnico.getendereco().getbairro() << std::endl;
            arquivo << auxTecnico.getendereco().getcidade() << std::endl;
            arquivo << auxTecnico.getendereco().getcep() << std::endl;
        }

        // Fecha o arquivo após escrever as informações
        arquivo.close();
    }
    catch (std::exception &e)
    {
        // Exibe mensagem de erro em caso de exceção
        std::cout << "Erro ao escrever dados no arquivo tecnicosADM.txt: " << e.what() << std::endl;
    }
}

// Método da Classe DAO para cadastrar um novo técnico ADM
void BancoDAO::cadastrarTecnicoADM()
{
    try
    {
        // Solicita informações ao usuário para o cadastro do técnico ADM
        std::cout << "CADASTRO DE TÉCNICOS" << std::endl;

        std::cout << "Função Desempenhada: ";
        std::string funcaoDesempenhada;
        std::cin >> funcaoDesempenhada;

        std::cout << "Matrícula: ";
        std::string matricula;
        std::cin >> matricula;

        std::cout << "Salário: ";
        float salario;
        std::cin >> salario;

        std::cout << "Departamento: ";
        std::string departamento;
        std::cin >> departamento;

        std::cout << "Carga Horária: ";
        int cargaHoraria;
        std::cin >> cargaHoraria;

        std::cout << "Data de Ingresso: ";
        std::string dataIngresso;
        std::cin >> dataIngresso;

        std::cout << "Nome: ";
        std::string nome;
        std::cin.ignore();
        getline(std::cin, nome);

        std::cout << "CPF: ";
        std::string cpf;
        std::cin >> cpf;

        std::cout << "Data de Nascimento: ";
        std::string dataNascimento;
        std::cin >> dataNascimento;

        std::cout << "Gênero: ";
        std::string genero;
        std::cin >> genero;

        // Solicita informações do endereço do técnico ADM
        std::cout << "-Endereço-" << std::endl;
        std::cout << "Rua: ";
        std::string rua;
        std::cin.ignore();
        getline(std::cin, rua);

        std::cout << "Número: ";
        int numero;
        std::cin >> numero;

        std::cout << "Bairro: ";
        std::string bairro;
        std::cin.ignore();
        getline(std::cin, bairro);

        std::cout << "Cidade: ";
        std::string cidade;
        getline(std::cin, cidade);

        std::cout << "CEP: ";
        std::string cep;
        std::cin >> cep;

        // Cria um objeto TecnicoADM com as informações fornecidas e o adiciona ao vetor de técnicos ADM
        TecnicoADM tecnicoADM(funcaoDesempenhada, matricula, salario, departamento, cargaHoraria, dataIngresso,
                              nome, cpf, dataNascimento, genero, Endereco(rua, numero, bairro, cidade, cep));

        tecnicosADM.push_back(tecnicoADM);

        std::cout << "CADASTRO REALIZADO COM SUCESSO!" << std::endl;
    }
    catch (std::exception &e)
    {
        // Exibe mensagem de erro em caso de exceção
        std::cout << "Erro ao cadastrar técnico: " << e.what() << std::endl;
    }
}

// Método da Classe DAO para ler informações de professores a partir de um arquivo
void BancoDAO::lerArquivoProfessor()
{
    try
    {
        std::vector<std::string> linhas;
        std::fstream arquivo;
        arquivo.open("professores.txt", std::ios::in);

        // Lê cada linha do arquivo e armazena no vetor de strings "linhas"
        std::string temp;
        while (getline(arquivo, temp))
        {
            linhas.push_back(temp);
        }
        arquivo.close();

        // Verifica se o arquivo está vazio
        if (linhas.empty())
        {
            std::cout << "Arquivo Vazio!" << std::endl;
        }
        else
        {
            // Itera sobre as linhas do arquivo, pulando de 17 em 17 para obter as informações de cada professor
            for (int i = 0; i < linhas.size(); i += 17)
            {
                // Cria um objeto Professor e atribui os valores a partir das linhas do arquivo
                Professor auxProfessor;
                auxProfessor.setnivelProfessor(linhas[i]);
                auxProfessor.setformacaoProfessor(linhas[i + 1]);
                auxProfessor.setdisciplina(linhas[i + 2]);
                auxProfessor.setmatricula(linhas[i + 3]);
                auxProfessor.setsalario(stof(linhas[i + 4]));
                auxProfessor.setdepartamento(linhas[i + 5]);
                auxProfessor.setcargahoraria(stoi(linhas[i + 6]));
                auxProfessor.setdataIngresso(linhas[i + 7]);
                auxProfessor.setnome(linhas[i + 8]);
                auxProfessor.setcpf(linhas[i + 9]);
                auxProfessor.setdataNascimento(linhas[i + 10]);
                auxProfessor.setgenero(linhas[i + 11]);

                // Cria um objeto Endereco e atribui os valores a partir das linhas do arquivo
                Endereco auxEndereco;
                auxEndereco.setrua(linhas[i + 12]);
                auxEndereco.setnumero(stoi(linhas[i + 13]));
                auxEndereco.setbairro(linhas[i + 14]);
                auxEndereco.setcidade(linhas[i + 15]);
                auxEndereco.setcep(linhas[i + 16]);

                // Atribui o endereço ao professor usando o método auxiliar cadastrarEndereco
                cadastrarEndereco(auxProfessor, auxEndereco); // template

                // Adiciona o professor ao vetor de professores
                professores.push_back(auxProfessor);
            }
        }
    }
    catch (std::exception &e)
    {
        // Exibe mensagem de erro em caso de exceção
        std::cout << "Erro ao ler arquivo professores.txt: " << e.what() << std::endl;
    }
}

// Método da Classe DAO para ler informações de técnicos ADM a partir de um arquivo
void BancoDAO::lerArquivoTecnicoADM()
{
    try
    {
        std::vector<std::string> linhas;
        std::fstream arquivo;
        arquivo.open("tecnicosADM.txt", std::ios::in);

        // Lê cada linha do arquivo e armazena no vetor de strings "linhas"
        std::string temp;
        while (getline(arquivo, temp))
        {
            linhas.push_back(temp);
        }
        arquivo.close();

        // Verifica se o arquivo está vazio
        if (linhas.empty())
        {
            std::cout << "Arquivo Vazio!" << std::endl;
        }
        else
        {
            // Itera sobre as linhas do arquivo, pulando de 15 em 15 para obter as informações de cada técnico ADM
            for (int i = 0; i < linhas.size(); i += 15)
            {
                // Cria um objeto TecnicoADM e atribui os valores a partir das linhas do arquivo
                TecnicoADM auxTecnico;
                auxTecnico.setfuncaoDesempenhada(linhas[i]);
                auxTecnico.setmatricula(linhas[i + 1]);
                auxTecnico.setsalario(stof(linhas[i + 2]));
                auxTecnico.setdepartamento(linhas[i + 3]);
                auxTecnico.setcargahoraria(stoi(linhas[i + 4]));
                auxTecnico.setdataIngresso(linhas[i + 5]);
                auxTecnico.setnome(linhas[i + 6]);
                auxTecnico.setcpf(linhas[i + 7]);
                auxTecnico.setdataNascimento(linhas[i + 8]);
                auxTecnico.setgenero(linhas[i + 9]);

                // Cria um objeto Endereco e atribui os valores a partir das linhas do arquivo
                Endereco auxEndereco;
                auxEndereco.setrua(linhas[i + 10]);
                auxEndereco.setnumero(stoi(linhas[i + 11]));
                auxEndereco.setbairro(linhas[i + 12]);
                auxEndereco.setcidade(linhas[i + 13]);
                auxEndereco.setcep(linhas[i + 14]);

                // Atribui o endereço ao técnico usando o método auxiliar cadastrarEndereco
                cadastrarEndereco(auxTecnico, auxEndereco); // template

                // Adiciona o técnico ao vetor de técnicos ADM
                tecnicosADM.push_back(auxTecnico);
            }
        }
    }
    catch (std::exception &e)
    {
        // Exibe mensagem de erro em caso de exceção
        std::cout << "Erro ao ler arquivo tecnicosADM.txt: " << e.what() << std::endl;
    }
}

// Método da Classe DAO para deletar informações de professores com base na matrícula
void BancoDAO::deletarProfessor(std::string matricula)
{
    try
    {
        std::cout << "DELETAR PROFESSORES" << std::endl;
        std::cout << std::endl;
        int cont = 0;

        // Itera sobre os professores
        for (auto it = professores.begin(); it != professores.end(); ++it)
        {
            cont++;

            // Verifica se a matrícula do professor atual coincide com a matrícula fornecida
            if (it->getmatricula() == matricula)
            {
                // Remove o professor do vetor
                professores.erase(it);
                std::cout << "DELETADO COM SUCESSO" << std::endl;
                std::cout << std::endl;
                return; // Encerra a função após deletar o professor
            }
        }

        // Se chegou aqui, a matrícula não foi encontrada
        std::cout << "Professor com matrícula " << matricula << " nao encontrado" << std::endl;
    }
    catch (std::exception &e)
    {
        // Exibe mensagem de erro em caso de exceção
        std::cout << "Erro ao deletar professor: " << e.what() << std::endl;
    }
}


// Método da Classe DAO para deletar informações de técnicos com base na matrícula
void BancoDAO::deletarTecnico(std::string matricula)
{
    try
    {
        std::cout << "DELETAR TÉCNICOS" << std::endl;
        std::cout << std::endl;
        int cont = 0;

        // Itera sobre os técnicos
        for (auto it = tecnicosADM.begin(); it != tecnicosADM.end(); ++it)
        {
            cont++;

            // Verifica se a matrícula do técnico atual coincide com a matrícula fornecida
            if (it->getmatricula() == matricula)
            {
                // Remove o técnico do vetor
                tecnicosADM.erase(it);
                std::cout << "DELETADO COM SUCESSO" << std::endl;
                std::cout << std::endl;
                return; // Encerra a função após deletar o técnico
            }
        }

        // Se chegou aqui, a matrícula não foi encontrada
        std::cout << "Técnico com matrícula " << matricula << " nao encontrado" << std::endl;
    }
    catch (std::exception &e)
    {
        // Exibe mensagem de erro em caso de exceção
        std::cout << "Erro ao deletar técnico: " << e.what() << std::endl;
    }
}

// Método da Classe DAO para listar informações de professores
void BancoDAO::listarProfessores()
{
    try
    {
        std::cout << "LISTA DE PROFESSORES" << std::endl;
        std::cout << std::endl;

        // Itera sobre os professores e exibe suas informações
        for (Professor &auxProfessor : professores)
        {
            std::cout << "Nome: " << auxProfessor.getnome() << " -> Disciplina: " << auxProfessor.getdisciplina() << std::endl;
        }
    }
    catch (std::exception &e)
    {
        // Exibe mensagem de erro em caso de exceção
        std::cout << "Erro ao listar professores: " << e.what() << std::endl;
    }
}


// Método da Classe DAO para listar informações de técnicos administrativos
void BancoDAO::listarTecnicosADM()
{
    try
    {
        // Título informativo
        std::cout << "LISTA DE TÉCNICOS ADMINISTRATIVOS" << std::endl;
        std::cout << std::endl;

        // Itera sobre os técnicos administrativos e exibe suas informações
        for (TecnicoADM &auxTecnico : tecnicosADM)
        {
            // Exibe o nome e a função desempenhada do técnico administrativo
            std::cout << "Nome: " << auxTecnico.getnome() << " -> Função: " << auxTecnico.getfuncaoDesempenhada() << std::endl;
        }
    }
    catch (std::exception &e)
    {
        // Em caso de exceção, exibe mensagem de erro
        std::cout << "Erro ao listar técnicos administrativos: " << e.what() << std::endl;
    }
}

// Método da Classe DAO para buscar e exibir informações de um professor por matrícula
void BancoDAO::buscarProfessor(std::string matricula)
{
    try
    {
        // Itera sobre os professores no vetor
        for (Professor &auxProfessor : professores)
        {
            // Verifica se a matrícula do professor coincide com a matrícula fornecida
            if (auxProfessor.getmatricula() == matricula)
            {
                // Exibe os dados pessoais do professor
                std::cout << "-DADOS PESSOAIS-" << std::endl;
                std::cout << "Nome: " << auxProfessor.getnome() << std::endl;
                std::cout << "CPF: " << auxProfessor.getcpf() << std::endl;
                std::cout << "Data de Nascimento: " << auxProfessor.getdataNascimento() << std::endl;
                std::cout << "Gênero: " << auxProfessor.getgenero() << std::endl;

                // Exibe o endereço do professor
                std::cout << "-Endereço-" << std::endl;
                std::cout << "Rua: " << auxProfessor.getendereco().getrua() << std::endl;
                std::cout << "Número da casa: " << auxProfessor.getendereco().getnumero() << std::endl;
                std::cout << "Bairro: " << auxProfessor.getendereco().getbairro() << std::endl;
                std::cout << "Cidade: " << auxProfessor.getendereco().getcidade() << std::endl;
                std::cout << "CEP: " << auxProfessor.getendereco().getcep() << std::endl;
                std::cout << std::endl;

                // Exibe os dados de cargo do professor
                std::cout << "-DADOS DE CARGO-" << std::endl;
                std::cout << "Nível do Professor: " << auxProfessor.getnivelProfessor() << std::endl;
                std::cout << "Formação do Professor: " << auxProfessor.getformacaoProfessor() << std::endl;
                std::cout << "Disciplina: " << auxProfessor.getdisciplina() << std::endl;
                std::cout << "Matrícula: " << auxProfessor.getmatricula() << std::endl;
                std::cout << "Salário: " << auxProfessor.getsalario() << std::endl;
                std::cout << "Departamento: " << auxProfessor.getdepartamento() << std::endl;
                std::cout << "Carga horária: " << auxProfessor.getcargahoraria() << "H" << std::endl;
                std::cout << "Data de Ingresso: " << auxProfessor.getdataIngresso() << std::endl;
            }
        }
    }
    catch (std::exception &e)
    {
        // Em caso de exceção, exibe mensagem de erro
        std::cout << "Erro ao buscar professores: " << e.what() << std::endl;
    }
}

// Método da Classe DAO para buscar e exibir informações de um técnico administrativo por matrícula
void BancoDAO::buscarTecnicoADM(std::string matricula)
{
    try
    {
        // Itera sobre os técnicos administrativos no vetor
        for (TecnicoADM &auxTecnico : tecnicosADM)
        {
            // Verifica se a matrícula do técnico coincide com a matrícula fornecida
            if (auxTecnico.getmatricula() == matricula)
            {
                // Exibe os dados pessoais do técnico administrativo
                std::cout << "-DADOS PESSOAIS-" << std::endl;
                std::cout << "Nome: " << auxTecnico.getnome() << std::endl;
                std::cout << "CPF: " << auxTecnico.getcpf() << std::endl;
                std::cout << "Data de Nascimento: " << auxTecnico.getdataNascimento() << std::endl;
                std::cout << "Gênero: " << auxTecnico.getgenero() << std::endl;

                // Exibe o endereço do técnico administrativo
                std::cout << "-Endereço-" << std::endl;
                std::cout << "Rua: " << auxTecnico.getendereco().getrua() << std::endl;
                std::cout << "Número da casa: " << auxTecnico.getendereco().getnumero() << std::endl;
                std::cout << "Bairro: " << auxTecnico.getendereco().getbairro() << std::endl;
                std::cout << "Cidade: " << auxTecnico.getendereco().getcidade() << std::endl;
                std::cout << "CEP: " << auxTecnico.getendereco().getcep() << std::endl;
                std::cout << std::endl;

                // Exibe os dados de cargo do técnico administrativo
                std::cout << "-DADOS DE CARGO-" << std::endl;
                std::cout << "Função Desempenhada: " << auxTecnico.getfuncaoDesempenhada() << std::endl;
                std::cout << "Matrícula: " << auxTecnico.getmatricula() << std::endl;
                std::cout << "Salário: " << auxTecnico.getsalario() << std::endl;
                std::cout << "Salário com adicional: " << auxTecnico.calcularsalario() << std::endl;
                std::cout << "Departamento: " << auxTecnico.getdepartamento() << std::endl;
                std::cout << "Carga horária: " << auxTecnico.getcargahoraria() << "H" << std::endl;
                std::cout << "Data de Ingresso: " << auxTecnico.getdataIngresso() << std::endl;
            }
        }
    }
    catch (std::exception &e)
    {
        // Em caso de exceção, exibe mensagem de erro
        std::cout << "Erro ao buscar técnicos: " << e.what() << std::endl;
    }
}
