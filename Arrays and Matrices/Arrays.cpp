#include <iostream>
#include <locale.h>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");

	float N1, N2, N3, N4, N5;
	float media;
	string NomeAluno;

	cout << "\nDigíte o nome do Aluno: ";
	cin >> NomeAluno;

	cout << "\nDigite a Primeira Nota: ";
	cin >> N1; 
	cout << "\nDigite a Segunda Nota: ";
	cin >> N2;
	cout << "\nDigite a Terceira Nota: ";
	cin >> N3;
	cout << "\nDigite a Quarta Nota: ";
	cin >> N4;
	cout << "\nDigite a Quinta Nota: ";
	cin >> N5;

	media = (N1 + N2 + N3 + N4 + N5) / 5;

	cout << "\nA Média das notas do aluno foi: " << media << "\n";
	system("PAUSE");
	return 0;
}
// Não foi utilizado vetores nessa, apenas para entender o quanto é dificil sem eles...!!