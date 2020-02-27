// Zadatak: Ispisati brojeve od 1 do broja koji korisnik unese prethodno.
#include <iostream>
using namespace std;

int main()
{
    int Unos;
    cin >> Unos;

    for (int i = 1; i <= Unos; i++)
    {
        cout << i << endl;
    }

    cout << endl;
    system("PAUSE");
}