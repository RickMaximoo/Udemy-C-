#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "portuguese");
	//Voc� pode usar () para iniciar vari�veis com valores literais 
	// { } � inicializa��o uniforme, permite tanto iniciar tanto valores literais(Int, float , caractere, quanto valores escalares, vetores, enums etc. 
	int NumeroInteiro(12);
	float NumeroReal(34.36);
	char Caractere('c');
	// String [� um cadeira de caracteres, � um texto e deve estar entre aspas duplas "Texto da string"
	// para declarar uma string usamos std;; string
	string texto{ "Texto da String" };
	//%d indica que voc� quer que seja colocado na string;
	// valor N�mero inteiro = %d "o valor da vari�vel NumeroInteiro
	printf("Valor N�mero inteiro = %d ", NumeroInteiro);
	printf("Valor N�mero Real = %f ", NumeroReal);

	system("PAUSE");
		return 0;
}