#include <iostream>
#include <string>
#include <vector>
#include "BancoDAO.hpp"
#include "Coordenador.hpp"

using namespace std;

int main(){
    
    // Cabeçalho do programa
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
    cout << "=-=-=-=-==-= HAVARD =-=-=-=-=" << endl;
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
    cout << endl;

    cout << "BEM VINDO AO PROGRAMA LISTAGEM E CADASTRO DE PROFESSORES, TÉCNICOS DE ADMINISTRAÇÃO E COORDENADORES." << endl;
    cout << endl;

    // Instância da classe BancoDAO para lidar com operações de banco de dados
    BancoDAO bancoDAO;
    
    // Vetor para armazenar coordenadores
    vector<Coordenador> coordenadores;

    // Carrega dados de professores e técnicos de ADM de arquivos, se existirem
    bancoDAO.lerArquivoProfessor();
    bancoDAO.lerArquivoTecnicoADM();
    
    int condicao;

    // Impressão do menu do programa
    while(true){
        cout <<"\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
        cout << "O que voce deseja fazer?" << endl;
        cout << "1 - Cadastrar Professor" << endl;
        cout << "2 - Cadastrar Tecnico ADM" << endl;
        cout << "3 - Cadastrar Coordenador" << endl;
        cout << "4 - Listar Professores" << endl;
        cout << "5 - Listar Tecnicos ADM" << endl;
        cout << "6 - Listar Coordenador" << endl;
        cout << "7 - Deletar Professor" << endl;
        cout << "8 - Deletar Tecnico ADM" << endl;
        cout << "9 - Deletar Coordenador" << endl;
        cout << "10 - Buscar Professor" << endl;
        cout << "11 - Buscar Tecnico ADM" << endl;
        cout << "12 - Buscar Coordenador" << endl;
        cout << "13 - Sair" << endl;

        // Leitura da opção escolhida pelo usuário
        cin >> condicao;

        // Teste de condições do Menu
        if (condicao == 1) {
            bancoDAO.cadastrarProfessor();
        }
        else if(condicao == 2) {
            bancoDAO.cadastrarTecnicoADM();
        }
        else if (condicao == 3) {
            // Cria um novo coordenador e o cadastra
            Coordenador novoCoordenador;
            novoCoordenador.cadastrar();
            
            // Adiciona o novo coordenador ao vetor
            coordenadores.push_back(novoCoordenador);
        }
        else if(condicao == 4) {
            bancoDAO.listarProfessores();
        }
        else if(condicao == 5) {
            bancoDAO.listarTecnicosADM();
        }
        else if(condicao == 6) {
            Coordenador::listarTodosCoordenadores(coordenadores);
        }
        else if(condicao == 7) {
            string matricula;
            cout << "Informe a matricula: ";
            cin >> matricula;
            bancoDAO.deletarProfessor(matricula);
        }
        else if(condicao == 8) {
            string matricula;
            cout << "Informe a matricula: ";
            cin >> matricula;
            bancoDAO.deletarTecnico(matricula);
        }
        else if(condicao == 9) {
            int matricula;
            cout << "Informe a matricula: ";
            cin >> matricula;
            Coordenador::deletarPorMatricula(coordenadores, matricula);
        }
        else if(condicao == 10) {
            string matricula;
            cout << "Informe a matricula: ";
            cin >> matricula;
            bancoDAO.buscarProfessor(matricula);
        }
        else if(condicao == 11) {
            string matricula;
            cout << "Informe a matricula: ";
            cin >> matricula;
            bancoDAO.buscarTecnicoADM(matricula);
        }
        else if (condicao == 12) {
            // Busca um coordenador pelo número de matrícula
            int matricula;
            cout << "Informe a matricula: ";
            cin >> matricula;
            Coordenador::buscarPorMatricula(coordenadores, matricula);
        }
        else if(condicao == 13) {
            // Salva os dados e encerra o programa
            bancoDAO.salvarProfessor();
            bancoDAO.salvarTecnicoADM();
            break;
        }
    }

    return 0;
}