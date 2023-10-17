#include "cliente.hpp"
#include <iostream>
#include "gerente.hpp"

Cliente::Cliente() {
    // Classe Cliente.
}

void Cliente::listarSanduiches(const std::vector<Produto>& sanduiches) { // Função que lista os sanduíches disponíveis para o cliente.
    std::cout << "Sanduíches disponíveis:" << std::endl;
    for (const Produto& sanduiche : sanduiches) {
        std::cout << sanduiche.nome << " - R$" << sanduiche.preco << std::endl;
    }
}

void Cliente::listarSucos(const std::vector<Produto>& sucos) { // Função que lista os sucos disponíveis para o cliente.
    std::cout << "Sucos disponíveis:" << std::endl;
    for (const Produto& suco : sucos) {
        std::cout << suco.nome << " - R$" << suco.preco << std::endl;
    }
}

void Cliente::adicionarAoCarrinho(const Produto& produto) { // Função que adiciona um produto ao carrinho do cliente.
    carrinho.push_back(produto);
    std::cout << produto.nome << " foi adicionado ao carrinho." << std::endl;
}

double Cliente::calcularValorCarrinho() const { // Função que calcula o valor total dos produtos no carrinho.
    double total = 0.0;
    for (const Produto& produto : carrinho) {
        total += produto.preco;
    }
    return total;
}

void Cliente::mostrarCarrinho() const { // Função que exibe os itens no carrinho, incluindo seus nomes e preços, e o valor total do carrinho.
    std::cout << "Itens no carrinho:" << std::endl;
    for (const Produto& produto : carrinho) {
        std::cout << produto.nome << " - R$" << produto.preco << std::endl;
    }
    std::cout << "Total: R$" << calcularValorCarrinho() << std::endl;
}

void Cliente::excluirDoCarrinho(const std::string& nomeProduto) { // Função que permite ao cliente excluir um produto do carrinho com base em seu nome.
    for (auto it = carrinho.begin(); it != carrinho.end(); ++it) {
        if (it->nome == nomeProduto) {
            carrinho.erase(it);
            std::cout << nomeProduto << " foi removido do carrinho." << std::endl;
            return;
        }
    }
    std::cout << nomeProduto << " não foi encontrado no carrinho." << std::endl;
}
