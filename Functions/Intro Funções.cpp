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
	cout << "D�gte um n�mero: " << "\n"; 
	cin >> Numero; 
	cout << "D�gite o N�mero a ser somado: " << "\n";
	cin >> NumeroaSerSomado;
	cout << " A soma deste n�mero: " << Numero << " Com o N�mero: " << NumeroaSerSomado << " Ser�: " << SomaAUmNumero(Numero, NumeroaSerSomado); 
	cout << "\n";
	system("PAUSE");


	return 0; 
}