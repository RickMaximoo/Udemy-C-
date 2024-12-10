#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");
    int Matriz[5][5];

    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 5; j++)
        {
            if (i < j)
            {
                Matriz[i][j] = 1;
            }
            else if (i == j) 
            {
                Matriz[i][j] = 0;
            }
            else
            {
                Matriz[i][j] = -1;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << " ";
        for (int j = 0; j < 5; j++)
        {
            if (j > 0)
            {  
                cout << "  ";
            }
            cout << Matriz[i][j];
        }
        cout << "\n";
    }

    system("PAUSE");
    return 0;
}