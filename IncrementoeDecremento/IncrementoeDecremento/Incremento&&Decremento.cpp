#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "portuguese");
	int Num1{10 }, Num2{20 }, Resultado;
	Num1 = Num2++;
	//Num2 ++ � o mesmo que Num2 = Num2 + 1;
	/*No entanto se ++ vier depois da variavel devemos ler da seguinte forme Num2++ pegue logo o valor da variavel Num2 e somente depois da instru��o incremente em 1 o valor de Num2 
      Logo Num1 = Num2++ � equivalente as seguintes instru��es;
	  Num1 = Num2;
	  Num2 = Num 2 + 1;
	  Chamamos isso de �p�s-fixado 
	  assim se o ++ ou -- estiver apos a variavel 
	  ela somente ser� incremnetada apos a execu��o da instru��o*/
	Num2 = ++Num1;
	// Agora temos outra situa��o. O operador ++ est� PR�-FIXADO 
	/*assim a instru��o seria equivalente a;
	Num1 = Num1 + 1;
	Num2 = Num1;
	Ou seja se o operador estiver pr�-fixado primeiro a vari�vel ser� incrementada de 1 para depois ser atribuida a outra vari�vel*/ 
	cout << "Valor atual de Num1: " << Num1 << " e " << "Num2: " << Num2 << "\n"; 
	Num1 = Num2++;
	cout << "Valor atual de Num1: " << Num1 << " e " << "Num2: " << Num2 << "\n";
	Num2 = ++Num1;
	cout << "Valor atual de Num1: " << Num1 << " e " << "Num2: " << Num2 << "\n";
	system("PAUSE");

}