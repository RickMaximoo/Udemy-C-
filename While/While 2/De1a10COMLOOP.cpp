#include <iostream>
#include <locale.h>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	 
	int Numero = 0; 
	while (Numero <= 10)
	{
		cout << Numero << "\n";
		Numero++;
	}
	system("PAUSE");
	return 0;
}