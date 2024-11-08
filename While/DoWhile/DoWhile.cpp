#include <iostream>
#include <locale.h>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	int escolha = 0;
	do
	{
		cout << "****Tickets Cinema****" << endl;
		cout << "\n1 - Para Meia Entrada\n";
		cout << "\n2 - Para inteira\n";
		cout << "\n3 - Sair\n";
		cout << "\nEscolha sua opção :\n ";
		cin >> escolha; 

		switch (escolha)
		{
		case 1: cout << "\nMeia Entrada Comprada\n"; 
				break;
		case 2: cout << "\nTicket Inteeira Comprado\n";
				break;
		case 3: cout << "\nSaindo Menu Tickets....\n";
				break;
		default: cout << "\nOpção Inválida!!!!\n";
		}
	} while (escolha != 3);

	system("PAUSE");
	return 0;
}