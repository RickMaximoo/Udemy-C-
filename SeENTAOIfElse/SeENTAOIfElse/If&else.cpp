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
	/*Se a senha digitada pelo usuario e armazenada na variavel SenhaDigitada for igual a senha de acesso as instru��es apos o If ser�o executadas pois a condi��o foi verdadeira true 1 */

	if (SenhaDigitada == SenhaDeAcesso)
	{
		cout << "\nAcesso Permitido!" << "\n";
		//aqui aproveitamos para indicar que o acesso foi concedido 
		//atraves de outra variavel booleana bAcesso
		bAcesso = true;
	}
	/*Se a condi��o for falsa ent�o as instru��es do else ser�o executadas*/
	else
	{
		cout << "\n Acesso Negado!" << "\n";
		exit(0); // sai do programa, for�� o fechamento da aplica��o 
		//system("PAUSE");
	}
	bFezSol = false;
	bCarroPronto = false;
	bSalarioDepositado = false;
	//Aqui podemos deixar apenas a vari�vel 
	//N� � necess�rio == pois ser� buscado o valor de bAcesso e ficar� assim:
	//if (true) ou if (false)
	if (bAcesso == true)
	{
		if (bFezSol || bCarroPronto || bSalarioDepositado)
		{
			cout << "Vai dar Praia!!!" << endl;
		}
		//Aqui ser� executado se a condi��o do if falhar e se 
		//bSalarioDepositado for false 
		//Como bSalarioDepositadado � falso !(n�o) Falso dar� True e ai entra no else if

		else if (bSalarioDepositado == false)
		{
			cout << "N�o vai d� Praia, o Sal�rio tamb�m n�o foi depositado"  << "\n";
		}
	}
	system("PAUSE");
}