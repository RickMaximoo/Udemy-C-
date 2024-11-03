#include <iostream>
#include <iomanip>

using namespace std;

double calcular(double num1, double num2, char operacao) 
{
    switch (operacao) 
    {
    case '+':
        return num1 + num2;
    case '-':
        return num1 - num2;
    case '*':
        return num1 * num2;
    case '/':
        if (num2 == 0) 
        {
            cout << "Erro: Divis�o por zero!" << endl;
            return 0;
        }
        else
        {
            return num1 / num2;
        }
    default:
        cout << "Operador inv�lido. Por favor, digite +, -, * ou /." << endl;
        return 0;
    }
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    char continuar = 's';
    while (continuar == 's' || continuar == 'S')
    {
        double num1, num2;
        char operacao;

        cout << "\nD�gite um N�mero: ";
        while (!(cin >> num1)) 
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrada inv�lida. Digite um n�mero: ";
        }

        cout << "\nD�gite outro N�mero: ";
        while (!(cin >> num2))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrada inv�lida. Digite um n�mero: ";
        }

        cout << "Qual opera��o Deseja efetuar? \n+ Adi��o \n- Subtra��o \n * Multiplica��o ou \n/ Divis�o? ";
        cin >> operacao;

        double resultado = calcular(num1, num2, operacao);
        if (resultado != 0) 
        {
            cout << fixed << setprecision(2);
            cout << "\nResultado: " << resultado << endl;
        }

        cout << "Deseja continuar? (s/n): ";
        cin >> continuar;
    }

    return 0;
}