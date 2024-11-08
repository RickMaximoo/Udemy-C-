#include <iostream>
#include <limits>
#include <locale.h>
const auto MaxIgnorado = std::numeric_limits<std::streamsize>::max();

int main()
{
    setlocale(LC_ALL, "portuguese");
    int num = 0;
    bool feito = false;

    std::cout << "\n\n";
    std::cout << "\tInsira somentes dígitos inteiros C++";
    std::cout << "\n\n";

    while (!feito)
    {
        std::cout << "\n";
        std::cout << "\tEntre com um inteiro: ";

        if (std::cin >> num)
        {
            std::cout << "\n";
            std::cout << "\tExcelente vc entrou com: " << num;
            feito = true;
        }
        else
        {
            std::cout << "\n";
            std::cout << "\tEntrada Inválida!\n";
            std::cin.clear();
            std::cin.ignore(MaxIgnorado, '\n');
        }
    }
    std::cout << "\n\n";
    std::cout << "\tFim do Programa";
    std::cout << "\n\n";
}