#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	int NumElementos;
	int Min,Max;
	int Array[20];

	cout << "D�gite o n�mero de elementos desejados: ";
	cin >> NumElementos;

	for (int i = 0; i < NumElementos; i++)
	{
		cout << "D�gite o Elemento " << i + 1 << ": ";
		cin >> Array[i];
		system("CLS");
	}
	Min = Array[0];
	Max = Array[0];

	for (int i = 0; i < NumElementos; i++)
	{
		if (Array[i] > Max)
		{
			Max = Array[i];
		}
		else if (Array[i] < Min)
		{
			Min = Array[i];
		}
	}
	cout << "\n O Menor valor d�gitado foi: " << Min << "\n";
	cout << "\n O Maior valor d�gitado foi: " << Max << "\n";
	system("PAUSE");
	return 0;
}