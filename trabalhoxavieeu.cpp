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
            std::cout << "Instruções: Escolha uma opção do menu.\n";
            std::cout << "Instruções: Escolha uma opção do menu.\n";
            std::cout << "Instruções: Escolha uma opção do menu.\n";
            std::cout << "Instruções: Escolha uma opção do menu.\n";
            std::cout << "Marcoooooooo1.\n";
            std::cout << "Marcoooooooo2.\n";
            std::cout << "Marcoooooooo3.\n";
            std::cout << "Marcoooooooo4.\n";
            std::cout << "Marcoooooooo5.\n";
            std::cout << "Marcoooooooo6.\n";
            std::cout << "Marcoooooooo7.\n";
            std::cout << "Marcoooooooo8.\n";
            std::cout << "Marcoooooooo9.\n";
            std::cout << "Marcoooooooo10.\n";

            break;
        case 3:
            std::cout << "Saindo do programa...\n";
            break;
        default:
            std::cout << "Opção inválida!\n";
    }

    return 0;
}

