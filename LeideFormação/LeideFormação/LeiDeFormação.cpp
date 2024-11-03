#include <iostream>
#include <iomanip>
using namespace std;

bool eh_triangulo(float a, float b, float c) {
    return a + b > c && b + c > a && a + c > b;
}

string classificar_triangulo(float a, float b, float c) 
    {
    if (a == b && b == c) {
        return "equilátero";
    }
    else if (a == b || b == c || a == c)
    {
        return "isósceles";
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

    // Verificando a lei de formação dos triângulos
    if (eh_triangulo(L1, L2, L3))
    {
        cout << "É um triângulo " << classificar_triangulo(L1, L2, L3) << ".";
    }
    else
    {
        cout << "Os valores informados não formam um triângulo válido." << endl;
        cout << "Lembre-se: cada lado deve ser menor que a soma dos outros dois.";
    }

    return 0;
}