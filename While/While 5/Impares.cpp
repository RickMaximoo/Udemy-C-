#include <iostream>
#include <locale.h>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Numero;
	Numero = 0;
	//Loop infinito!
	/*neste caso Numero nunca deixar� de ser 0 e a condi��o Numero <= 50 ser� sempre verdadeira!
	logo ficar� sempre no while!!!*/
	while (Numero <= 50)
	{
		if (Numero % 2 != 0)
		{
			cout << Numero << " ";
		}
		//De alguma forma voc� precisa incrementar a vari�vel numero para que ela chegue at� 50
		//Qual a condi��o de parada do loop?
		Numero++;
	}
	system("PAUSE");
	return 0;
}