#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	double Numeros[10];
	double Soma{ 0.0 };
	for (int i = 0; i < 10; i++)
	{
		cout << "D�gite o N�mero " << i + 1 << ": "; 
		cin >> Numeros[i];
		system("CLS");
	}
	cout << "\nA Soma dos N�meros �: " << Soma << "\n";
	system("PAUSE");
	return 0;
}