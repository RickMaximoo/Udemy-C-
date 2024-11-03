#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int numero;
	float Numero2;
	double Numero3;
	char Caractere = '3';
	char Caractere2 = 'k';
	bool bAchou;

	bAchou = 1;
	cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = 0;
	cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = true;
	cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = false;
	cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = 'd';
	cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = "1023460A";
	cout << "Valor de bAchou: " << bAchou << "\n";



	numero = 45;
	Numero2 = 55.56f;
	Numero3 = 45345.904555;
	cout << "Valor Numero: " << numero << endl;
	cout << "Tamanho da variavel numero" << sizeof(numero) << "Bytes" << "\n"; 
	cout << "Endereco carregado na memoria: " << &numero << "\n";

	cout << "Valor Numero: " << Numero2 << endl;
	cout << "Tamanho da variavel numero" << sizeof(Numero2) << "Bytes" << "\n";
	cout << "Endereco carregado na memoria: " << &Numero2 << "\n";

	cout << "Valor Numero: " << setprecision(12) << Numero3 << endl;
	cout << "Tamanho da variavel numero" << sizeof(Numero3) << "Bytes" << "\n";
	cout << "Endereco carregado na memoria: " << &Numero3 << "\n";

	cout << "Valor Caractere: " << Caractere << endl;
	cout << "Tamanho da variavel numero" << sizeof(Caractere) << "Bytes" << "\n";
	cout << "Endereco carregado na memoria: " << (void *) & Caractere << "\n";

	cout << "Valor Caractere2: " << Caractere2 << endl;
	cout << "Tamanho da variavel numero" << sizeof(Caractere2) << "Bytes" << "\n";
	cout << "Endereco carregado na memoria: " << (void *) & Caractere2 << "\n";
	system("PAUSE");
		return 0;
}