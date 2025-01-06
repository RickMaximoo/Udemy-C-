#include <iostream>

double Sum(char Operation, double Num1, double Num2);

int main()
{
	double Num1, Num2;
	char Operation;
	std::cout << "Enter the first number: ";
	std::cin >> Num1;
	std::cout << "Enter the second number: ";
	std::cin >> Num2;
	std::cout << "\n + Sum \n - Subtraction \n * Multiplication \n / Division: ";
	std::cout << "\n\n Enter the symbol of the desired operation: ";
	std::cin >> Operation;
	std::cout << "\nThe result of the operation: " << Sum(Operation, Num1, Num2);
	return 0;
}

double Sum(char Operation, double Num1, double Num2)
{
	switch (Operation)
	{
	case '+': return Num1 + Num2;
	case '-': return Num1 - Num2;
	case '*': return Num1 * Num2;
	case '/': return Num1 / Num2;
	default: std::cout << "Invalid Operator";
		break;
	}
	return 0;
}