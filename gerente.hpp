#ifndef GERENTE_H
#define GERENTE_H
#include "cliente.hpp"
#include "produto.hpp"

#include <vector>
#include <string>

class Gerente {
public:
    
    Gerente();

    // Funções do gerente que são fornecidas no gerente.cpp
    bool fazerLogin(const std::string& senha);
    void listarSanduiches(const std::vector<Produto>& sanduiches);
    void listarSucos(const std::vector<Produto>& sucos);
    void adicionarSanduiche(std::vector<Produto>& sanduiches, const Produto& novoSanduiche);
    void adicionarSuco(std::vector<Produto>& sucos, const Produto& novoSuco);
    void alterarPrecoSanduiche(std::vector<Produto>& sanduiches, const std::string& nome, double novoPreco);
    void alterarPrecoSuco(std::vector<Produto>& sucos, const std::string& nome, double novoPreco);
    void excluirSanduiche(std::vector<Produto>& produtos, const std::string& nome);
    void excluirSuco(std::vector<Produto>& produtos, const std::string& nome);

private:
    std::string senhaGerente;
};

#endif 
