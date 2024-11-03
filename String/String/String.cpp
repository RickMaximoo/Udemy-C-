#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "portuguese");
	//Você pode usar () para iniciar variáveis com valores literais 
	// { } é inicialização uniforme, permite tanto iniciar tanto valores literais(Int, float , caractere, quanto valores escalares, vetores, enums etc. 
	int NumeroInteiro(12);
	float NumeroReal(34.36);
	char Caractere('c');
	// String [é um cadeira de caracteres, é um texto e deve estar entre aspas duplas "Texto da string"
	// para declarar uma string usamos std;; string
	string texto{ "Texto da String" };
	//%d indica que você quer que seja colocado na string;
	// valor Número inteiro = %d "o valor da variável NumeroInteiro
	printf("Valor Número inteiro = %d ", NumeroInteiro);
	printf("Valor Número Real = %f ", NumeroReal);

	system("PAUSE");
		return 0;
}