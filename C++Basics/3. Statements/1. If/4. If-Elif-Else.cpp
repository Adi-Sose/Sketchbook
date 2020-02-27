// Zadatak: Od korisnika traziti unos i ispisati poruku da li je broj pozitivan , negativan ili nula.
#include <iostream>
using namespace std;

int main()
{
    int Unos;
    cout << "Unesite broj: ";
    cin >> Unos;

    if (Unos > 0)
    {
        cout << "Broj je pozitivan";
    }
    else if (Unos < 0)
    {
        cout << "Broj je negativan";
    }
    else
    {
        cout << "Broj je nula";
    }

    cout << endl;
    system("PAUSE");
}