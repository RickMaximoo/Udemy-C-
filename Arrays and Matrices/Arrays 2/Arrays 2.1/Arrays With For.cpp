#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	float N[5]{ 0.0 };
	float Media{ 0.0 };
	std::string NomeAluno;


	cout << "\nDigite o nome do Aluno: ";
	cin >> NomeAluno;

	for (int i = 0; i < 5; i++)
	{
		cout << "\nDigite a nota(Entre 0/10) " << i + 1 << ": ";
		cin >> N[i];
		 while (N[i] < 0 || N[i] >10) 
		{
			 cout << "\nNota Inválida. Digite um valor entre 0 e 10: ";
			 cin >> N[i];
		}
		 Media += N[i]; // Media = Media + N[i] 
		 /* Comment Rickelme David*/
	}


	Media /= 5;

	std::cout << "\nA Media das notas do aluno foi: " << Media << "\n";

	system("PAUSE");
	return 0;
}