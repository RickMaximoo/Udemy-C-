#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	double Numero;
	bool MaiorQue100;
	cout << "Digite um n�mero: ";
	cin >> Numero;
	cout << "True = 1 e False = 0" << "\n";
	MaiorQue100 = (Numero > 100);
	cout << "0 Resultado L�gico que verifica se o N�mero Digitado � maior que 100 �: " << MaiorQue100 << endl;
	system("PAUSE");
		return 0;
}