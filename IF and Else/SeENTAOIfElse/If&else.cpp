#include <iostream>
#include <string>
#include <iomanip> 

using namespace std;
int main()
{
	setlocale(LC_ALL, "portuguese");
	bool bFezSol, bCarroPronto, bSalarioDepositado;
	bool bAcesso;
	string SenhaDeAcesso = "cmaismais";
	string SenhaDigitada;

	cout << "Digite a senha de acesso: ";
	cin >> SenhaDigitada;
	/*Se a senha digitada pelo usuario e armazenada na variavel SenhaDigitada for igual a senha de acesso as instruções apos o If serão executadas pois a condição foi verdadeira true 1 */

	if (SenhaDigitada == SenhaDeAcesso)
	{
		cout << "\nAcesso Permitido!" << "\n";
		//aqui aproveitamos para indicar que o acesso foi concedido 
		//atraves de outra variavel booleana bAcesso
		bAcesso = true;
	}
	/*Se a condição for falsa então as instruções do else serão executadas*/
	else
	{
		cout << "\n Acesso Negado!" << "\n";
		exit(0); // sai do programa, forçã o fechamento da aplicação 
		//system("PAUSE");
	}
	bFezSol = false;
	bCarroPronto = false;
	bSalarioDepositado = false;
	//Aqui podemos deixar apenas a variável 
	//Nã é necessário == pois será buscado o valor de bAcesso e ficará assim:
	//if (true) ou if (false)
	if (bAcesso == true)
	{
		if (bFezSol || bCarroPronto || bSalarioDepositado)
		{
			cout << "Vai dar Praia!!!" << endl;
		}
		//Aqui será executado se a condição do if falhar e se 
		//bSalarioDepositado for false 
		//Como bSalarioDepositadado é falso !(não) Falso dará True e ai entra no else if

		else if (bSalarioDepositado == false)
		{
			cout << "Não vai dá Praia, o Salário também não foi depositado"  << "\n";
		}
	}
	system("PAUSE");
}