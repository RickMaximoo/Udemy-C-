#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	float Notas[5]{ 1.0, 2.0, 3.0, 4.0, 5.0 };
	float Media;
	std::string NomeAluno;

	std::cout << "\nDigite o nome do Aluno: ";
	std::cin >> NomeAluno;

	std::cout << "\nDigite A primeira nota: ";
	std::cin >> Notas[0];
	std::cout << "\nDigite A segunda nota: ";
	std::cin >> Notas[1];
	std::cout << "\nDigite A terceira nota: ";
	std::cin >> Notas[2];
	std::cout << "\nDigite A quarta nota: ";
	std::cin >> Notas[3];
	std::cout << "\nDigite A quinta nota: ";
	std::cin >> Notas[4];

	Media = (Notas[0] + Notas[1] + Notas[2] + Notas[3] + Notas[4]) / 5;

	std::cout << "\nA Media das notas do aluno foi: " << Media << "\n";

	system("PAUSE");
	return 0;
}