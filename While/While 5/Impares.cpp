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
	/*neste caso Numero nunca deixará de ser 0 e a condição Numero <= 50 será sempre verdadeira!
	logo ficará sempre no while!!!*/
	while (Numero <= 50)
	{
		if (Numero % 2 != 0)
		{
			cout << Numero << " ";
		}
		//De alguma forma você precisa incrementar a variável numero para que ela chegue até 50
		//Qual a condição de parada do loop?
		Numero++;
	}
	system("PAUSE");
	return 0;
}