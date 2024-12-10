#include <iostream>
#include <locale.h>

using namespace std;

int SomaAUmNumero(int Numero, int NumeroASerSomado)
{
	return Numero + NumeroASerSomado;
}

void Mensagem()
{
	cout << "\nMensagem de Marte... Chegamos bem...\n";
	return;
}

int main()
{
	int Numero, NumeroASerSomado, RetornoDaFuncao;
	Mensagem();
	cout << "Digite um numero: ";
	cin >> Numero;
	cout << "Digite o numero a ser somado: ";
	cin >> NumeroASerSomado;
	cout << "A soma deste numero: " << Numero << " Com o Numero: " << NumeroASerSomado << "Sera: " << SomaAUmNumero(Numero, NumeroASerSomado);
	cout << endl;
	RetornoDaFuncao = SomaAUmNumero(200, -500);
	cout << endl;
	cout << SomaAUmNumero(Numero, SomaAUmNumero(150, 1400));
	cout << endl;
	cout << "\nSoma de 200 com -500: " << RetornoDaFuncao;
	cout << endl;
	system("PAUSE");
	return 0;
}