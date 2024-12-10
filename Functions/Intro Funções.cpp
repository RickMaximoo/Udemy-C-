#include <iostream>
#include <locale>

using namespace std;

int SomaAUmNumero(int Numero, int NumeroaSerSomado)
{

	return Numero + NumeroaSerSomado;

}

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Numero, NumeroaSerSomado;
	cout << "Dígte um número: " << "\n"; 
	cin >> Numero; 
	cout << "Dígite o Número a ser somado: " << "\n";
	cin >> NumeroaSerSomado;
	cout << " A soma deste número: " << Numero << " Com o Número: " << NumeroaSerSomado << " Será: " << SomaAUmNumero(Numero, NumeroaSerSomado); 
	cout << "\n";
	system("PAUSE");


	return 0; 
}