#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "portuguese");
	int Num1, Num2;
	char Operacao;
	cout << "\nD�gite um N�mero: ";
	cin >> Num1;
	cout << "\nD�gite outro N�mero: ";
	cin >> Num2;
	cout << "Qual opera��o Deseja efetuar? \n+ Adi��o \n- Subtra��o \n * Multiplica��o ou \n/ Divis�o? ";
	cout << "\nD�gite sua op��o: ";
	cin >> Operacao;

	//O usuario vai digitar um caracter. como um caracter � mapeado como inteiro da tabela ASCII o switch este tipo de express�o. 
	//Logo Opera��o pode ser + - * /
	switch (Operacao)
	{
		//Caso seja + essa linha ser� executada
	case '+':
		cout << "\nSoma de Num1 + Num2 = " << Num1 + Num2;
		break;
	case '-':
		cout << "\nSubtra��o de Num1 - Num2 = " << Num1 - Num2;
		break;
	case '*':
		cout << "\nMultiplica��o de Num1 * Num2 = " << Num1 * Num2;
		break;
	case '/':
		cout << "\nDivis�o de Num1/Num2 = " << Num1 / Num2;		
		break;
	default:
		//Caso operador n]ao tenha um valor de nenhum destas casos + - * ou /
		//Voc� pode colocar de forma opcional um valor que padr�o (Default)
		//que ser� executado se nenhum dos casos sejam v�lidos
		cout << "\nVoc� n�o digitou um operador valido!";
		break;
	}
	cout << "\n";
	system("PAUSE");
	return 0;
}