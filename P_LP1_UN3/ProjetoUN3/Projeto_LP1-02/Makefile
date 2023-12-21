# Arquivos fonte
SRCS = main.cpp Endereco.cpp Pessoa.cpp Professor.cpp Funcionario.cpp TecnicoADM.cpp BancoDAO.cpp Coordenador.cpp

# Nome do executável
TARGET = prog

# Comando do compilador
CXX = g++

# Comando para compilar
$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

# Comando para executar o programa
run: $(TARGET)
	./$(TARGET)

# Comando para limpar arquivos compilados
clean:
	rm -f $(TARGET)
