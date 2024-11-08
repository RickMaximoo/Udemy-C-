#include <iostream>
#include <locale.h>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	int soma = 0;
	for (int num = 1; num <= 100; num++)
	{
		soma = soma + num; 
	}
	cout << "\nA soma dos números de  1 a 100: " << soma << "\n";
	system("PAUSE");
	return 0;
}