// Zadatak: Ispisati zbir svih dvocifrenih parnih brojeva
// 2530
#include <iostream>
using namespace std;

int main()
{

    int Suma = 0;

    for (int i = 10; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
            Suma += i;
        }
    }

    cout << Suma;

    cout << endl;
    system("PAUSE");
}
