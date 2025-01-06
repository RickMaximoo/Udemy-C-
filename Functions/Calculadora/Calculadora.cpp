#include <iostream>
#include <locale.h>

using namespace std;

float Soma(float num1, float num2);
float Subtracao(float num1, float num2);
float Multiplicacao(float num1, float num2);
float Divisao(float num1, float num2);


int main()
{
	setlocale(LC_ALL, "portuguese");
	float Num1, Num2;

	cout << "\nDigite Primeiro Numero: ";
	cin >> Num1;

	cout << "\nDigite Segundo Numero: ";
	cin >> Num2;

	cout << "\n*** Resultado das operacoes***\n";
	cout << Num1 << " e " << Num2 << "\n";
	cout << "Soma: " << Soma(Num1, Num2) << "\n";
	cout << "Substracao: " << Subtracao(Num1, Num2) << "\n";
	cout << "Multiplicacao: " << Multiplicacao(Num1, Num2) << "\n";
	cout << "Divisao: " << Divisao(Num1, Num2) << "\n";

	system("PAUSE");
	return 0;
}

float Soma(float num1, float num2)
{
	return num1 + num2;
}

float Subtracao(float num1, float num2)
{
	return num1 - num2;
}

float Multiplicacao(float num1, float num2)
{
	return num1 * num2;
}

float Divisao(float num1, float num2)
{
	return num1 / num2;
}