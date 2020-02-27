// Zadatak: Ispisati zbir brojeva od 5 do 15
#include <iostream>
using namespace std;

int main()
{
    int Suma = 0;

    for (int i = 5; i <= 15; i++)
    {
        Suma += i;
    }

    cout << Suma << endl;

    cout << endl;
    system("PAUSE");
}