#include <iostream>
// DEVE SER ESCRITO ABAIXO DO INCLUDE
//#define NUM_VIDAS 10 
// OBSERVE QUE N�O TEM ; NO FINAL!!!
using namespace std;
int main()
{
		const int NUM_VIDAS = 10;
		int TotalDeVidas;
		TotalDeVidas = NUM_VIDAS - 1;
		cout << "Total de Vidas: " << TotalDeVidas << "\n";
		cout << "Valor Constante NUM_VIDAS: " << NUM_VIDAS << "\n";
		cout << "Endere�o de memoria de NUM_VIDAS: " << &NUM_VIDAS << "\n";
		system("PAUSE");



}