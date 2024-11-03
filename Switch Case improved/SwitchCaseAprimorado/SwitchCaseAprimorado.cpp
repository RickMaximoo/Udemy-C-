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
            cout << "Erro: Divisão por zero!" << endl;
            return 0;
        }
        else
        {
            return num1 / num2;
        }
    default:
        cout << "Operador inválido. Por favor, digite +, -, * ou /." << endl;
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

        cout << "\nDígite um Número: ";
        while (!(cin >> num1))
        {
            cin.clear();  // Limpa o estado de falha do cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignora o resto da linha
            cout << "Entrada inválida. Digite um número: ";
        }

        cout << "\nDígite outro Número: ";
        while (!(cin >> num2))
        {
            cin.clear();  // Limpa o estado de falha do cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignora o resto da linha
            cout << "Entrada inválida. Digite um número: ";
        }

        cout << "Qual operação Deseja efetuar? \n+ Adição \n- Subtração \n * Multiplicação ou \n/ Divisão? ";
        cin >> operacao;
         
        // Aqui temos uma variavel resultado que é dada a função calcular (Num1, Num 2 e escolher o tipo de operação
        double resultado = calcular(num1, num2, operacao);
        if (resultado != 0)
        {
            cout << fixed << setprecision(2); // precisão do resultado
            cout << "\nResultado: " << resultado << endl;
        }

        cout << "Deseja continuar? (s/n): ";
        cin >> continuar;
    }

    return 0;
}
