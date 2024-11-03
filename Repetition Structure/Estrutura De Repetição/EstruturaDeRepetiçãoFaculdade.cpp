#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    setlocale(LC_ALL, "portuguese");
        int num, res;

        cout << "Enter the number of the multiplication table:  ";
        cin >> num;

        for (int contador = 1; contador <= 10; contador++)
        {
            res = num * contador;
            cout << num << " x " << contador << " = " << res << endl;
        }

        return 0;
    
	system("PAUSE");
	return 0;

}