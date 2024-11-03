#include <iostream>
#include <iomanip>
using namespace std;

bool eh_triangulo(float a, float b, float c) {
    return a + b > c && b + c > a && a + c > b;
}

string classificar_triangulo(float a, float b, float c) 
    {
    if (a == b && b == c) {
        return "equil�tero";
    }
    else if (a == b || b == c || a == c)
    {
        return "is�sceles";
    }
    else
    {
        return "escaleno";
    }
}

int main() 
{
    setlocale(LC_ALL, "portuguese");
    float L1, L2, L3;

    cout << "Qual o valor do PRIMEIRO LADO: ";
    cin >> L1;
    cout << "Qual o valor do SEGUNDO LADO: ";
    cin >> L2;
    cout << "Qual o valor do TERCEIRO LADO: ";
    cin >> L3;

    // Verificando a lei de forma��o dos tri�ngulos
    if (eh_triangulo(L1, L2, L3))
    {
        cout << "� um tri�ngulo " << classificar_triangulo(L1, L2, L3) << ".";
    }
    else
    {
        cout << "Os valores informados n�o formam um tri�ngulo v�lido." << endl;
        cout << "Lembre-se: cada lado deve ser menor que a soma dos outros dois.";
    }

    return 0;
}