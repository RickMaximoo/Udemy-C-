#include <iostream>
#include <iomanip> 
using namespace std;
#include <iostream>
#include <iomanip> // necess�rio para uso do set precision

int main()
{
	setlocale(LC_ALL, "portuguese");
	float Num1, Num2, Num3;
	float Media = 0.0;
	char Resposta;
	do // Cria loop at� que Resposta seja S e ai sai do loop
	{
		cout << "Digite o Primeiro N�mero: ";
		cin >> Num1;
		cout << "Digite o Primeiro N�mero: ";
		cin >> Num2;
		cout << "Digite o Primeiro N�mero: ";
		cin >> Num3;

		Media = (Num1 + Num2 + Num3) / 3;

		cout << "N�meros Digitados: " << Num1 << " " << Num2 << " " << Num3 << "\n";
		cout << "M�dia dos N�meros: " << std::fixed << std::setprecision(2) << Media << "\n";
		cout << "\nDeseja calcular outra M�dia Artm�tica? (Responda S para Sim e N para n�o:) ";
		cin >> Resposta;
	} while (Resposta == 'S' || Resposta == 's'); // Sai do loop apenas de o OU for falso ou seja se
	//Se resposta for diferente de S e diferente de s. Lembre que o OU || s� ser� falso de todas as senten�as forem //falsas. Assim se o usu�rio digitar N ou qualquer outra coisa o programa sair� mas se digitar S ou s o programa volta e pede novamente os n�meros.

	cout << "\nSaindo do programa...";
	system("Pause");
	return 0;
}