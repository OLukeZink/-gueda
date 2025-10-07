#include <iostream>

int main()
{
    int opcao;

    std::cout << "=== MENU ===\n";
    std::cout << "1. Jogar Quente ou Frio\n";
    std::cout << "2. Ver instrucoes\n";
    std::cout << "3. Sair\n";
    std::cout << "Escolhe uma opcao: ";
    std::cin >> opcao;

    switch(opcao) {
        case 1:
            std::cout << "Jogo nao implementado ainda.\n";
            break;
        case 2:
            std::cout << "Instrucoes:\n";
            std::cout << "1. Escolhe 'Jogar Quente ou Frio' para tentares adivinhar o numero secreto entre 1 e 100.\n";
            std::cout << "2. O jogo vai dizer-te se estas quente, morno ou frio em relacao ao numero.\n";
            std::cout << "3. Tenta acertar com o menor numero de tentativas!\n";
            break;
        case 3:
            std::cout << "A sair do programa...\n";
            break;
        default:
            std::cout << "Opcao invalida!\n";
    }

    return 0;
}

