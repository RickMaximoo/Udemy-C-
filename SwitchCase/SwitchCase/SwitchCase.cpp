#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "portuguese");
	int Num1, Num2;
	char Operacao;
	cout << "\nDígite um Número: ";
	cin >> Num1;
	cout << "\nDígite outro Número: ";
	cin >> Num2;
	cout << "Qual operação Deseja efetuar? \n+ Adição \n- Subtração \n * Multiplicação ou \n/ Divisão? ";
	cout << "\nDígite sua opção: ";
	cin >> Operacao;

	//O usuario vai digitar um caracter. como um caracter é mapeado como inteiro da tabela ASCII o switch este tipo de expressão. 
	//Logo Operação pode ser + - * /
	switch (Operacao)
	{
		//Caso seja + essa linha será executada
	case '+':
		cout << "\nSoma de Num1 + Num2 = " << Num1 + Num2;
		break;
	case '-':
		cout << "\nSubtração de Num1 - Num2 = " << Num1 - Num2;
		break;
	case '*':
		cout << "\nMultiplicação de Num1 * Num2 = " << Num1 * Num2;
		break;
	case '/':
		cout << "\nDivisão de Num1/Num2 = " << Num1 / Num2;		
		break;
	default:
		//Caso operador n]ao tenha um valor de nenhum destas casos + - * ou /
		//Você pode colocar de forma opcional um valor que padrão (Default)
		//que será executado se nenhum dos casos sejam válidos
		cout << "\nVocê não digitou um operador valido!";
		break;
	}
	cout << "\n";
	system("PAUSE");
	return 0;
}