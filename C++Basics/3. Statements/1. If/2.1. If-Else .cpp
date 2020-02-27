// Zadatak: Od korisnika traziti unos i ispisati poruku da li je broj pozitivan ili ne.
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
    else
    {
        cout << "Broj nije pozitivan";
    }

    cout << endl;
    system("PAUSE");
}