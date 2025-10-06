#include <iostream>

int main()
{
    int opcao;

    std::cout << "=== MENU ===\n";
    std::cout << "1. Jogar\n";
    std::cout << "2. Ver instruções\n";
    std::cout << "3. Sair\n";
    std::cout << "Escolha uma opção: ";
    std::cin >> opcao;

    switch(opcao) {
        case 1:
            std::cout << "Você escolheu Jogar!\n";
            break;
        case 2:
            std::cout << "Instruções: Escolha uma opção do menu.\n";
            std::cout << "Eu vou fazer esta parte!.\n";
            break;
        case 3:
            std::cout << "Saindo do programa...\n";
            break;
        default:
            std::cout << "Opção inválida!\n";
    }

    return 0;
}

