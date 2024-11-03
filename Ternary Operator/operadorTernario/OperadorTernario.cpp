#include <iostream>
#include <iomanip>
using namespace std;
int main()
	{
	setlocale(LC_ALL, "portuguese");
	double MaiorNumero, Numero01, Numero02;

	cout << "Digite Primeiro Numero: ";
	cin >> Numero01;
	cout << "Digite Segundo Numero: ";
	cin >> Numero02;

	//Neste caso o operador ternario ? está sendo utilizado para 
	//Atribuir um valor a uma variavel 
	//Se Numero01 for maior que Numero02 Maior numero recebe valor de numero01. Caso contrario(Senão) MaiorNumero recebe Numero02

	MaiorNumero = (Numero01 > Numero02) ? Numero01 : Numero02; 
	cout << "Maior Numero Digitado: " << MaiorNumero << "\n";

	//Aqui o operador ? esta sendo utilizado para decidir que comando será executado. Se for true o primeiro cout vai para tela 
	//Se for falso o segundo cout vai para a tela

	if (Numero01 > Numero02)
		{
			cout << "\nNumero01 Maior que Numero02\n"
		}
	else
		{
		cout << "\nNumero02 Maior que Numero01\n";
		}
	system("PAUSE");
	return 0;
	}