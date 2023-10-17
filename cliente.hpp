#ifndef CLIENTE_H
#define CLIENTE_H
#include "gerente.hpp"
#include "produto.hpp"

#include <vector>
#include <string>


class Cliente {
public:
    
    Cliente();

    // Funções do cliente que são fornecidas no cliente.cpp
    void listarSanduiches(const std::vector<Produto>& sanduiches);
    void listarSucos(const std::vector<Produto>& sucos);
    void adicionarAoCarrinho(const Produto& produto);
    double calcularValorCarrinho() const;
    void mostrarCarrinho() const;
    void excluirDoCarrinho(const std::string& nomeProduto);

private:
    std::vector<Produto> carrinho; // Armazena os produtos adicionados ao carrinho.
};

#endif 
