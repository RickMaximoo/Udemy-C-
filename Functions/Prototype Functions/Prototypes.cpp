#include <iostream>
#include <locale.h>

using namespace std;

float soma(float num1, float num2);

int main()
{
	setlocale(LC_ALL, "portuguese");
	cout << soma(100, 500) << "\n";
	system("PAUSE");

	return 0;
}

float soma(float num1, float num2)
{
	return (num1 + num2);
}
