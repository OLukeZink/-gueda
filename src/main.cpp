#include <iostream>
#include <cstdlib>
#include <ctime>

// Jogo Quente ou Frio
void jogoQuenteFrio() {
    std::srand(std::time(0));
    int numero_secreto = std::rand() % 100 + 1;
    int tentativa;
    int tentativas = 0;
    int ultima_diferenca = 100;

    std::cout << "\nAdivinha o numero entre 1 e 100!\n";
    do {
        std::cout << "Introduz a tua tentativa: ";
        std::cin >> tentativa;
        tentativas++;

        int diferenca = std::abs(numero_secreto - tentativa);

        if (tentativa == numero_secreto) {
            std::cout << "Parabens! Acertaste em " << tentativas << " tentativas.\n";
            break;
        }

        if (diferenca <= 5) {
            std::cout << "Quente!\n";
        } else if (diferenca <= 15) {
            std::cout << "Morno!\n";
        } else {
            std::cout << "Frio!\n";
        }

        if (tentativas > 1) {
            if (diferenca < ultima_diferenca)
                std::cout << "Esta a aquecer!\n";
            else if (diferenca > ultima_diferenca)
                std::cout << "Esta a arrefecer!\n";
        }

        ultima_diferenca = diferenca;

    } while (tentativa != numero_secreto);
}

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
            jogoQuenteFrio();
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

