#include <iostream>

int main()
{
	std::cout << "Tamanho long int : " << sizeof(long int) << std::endl;
	std::cout << "Tamanho long long int : " << sizeof(long long int) << std::endl;
	std::cout << "Tamanho float : " << sizeof(float) << std::endl;
	std::cout << "Tamanho float : " << sizeof(long float) << std::endl;
	std::cout << "Tamanho double : " << sizeof(double) << std::endl;
	std::cout << "Tamanho long double : " << sizeof(long double) << std::endl;
	std::cout << "Tamanho wchar_t : " << sizeof(wchar_t) << std::endl;
	system("PAUSE");

	return 0;
}