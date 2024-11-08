#include <iostream>
#include <iomanip>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int expoente;
    float base, resultado = 1;

    std::cout << "Digite a base: ";
    std::cin >> base;
    std::cout << "\nDigite o expoente: ";
    std::cin >> expoente;

    std::cout << base << "^" << expoente << " = ";

    while (expoente != 0)
    {
        resultado *= base;
        expoente--;
    }

    std::cout << resultado;
    std::cout << "\n";
    system("PAUSE");
    return 0;
}