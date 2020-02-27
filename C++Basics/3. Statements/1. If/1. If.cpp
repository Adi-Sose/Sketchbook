// Zadatak: Od korisnika traziti unos i ispisati poruku ukoliko je broj pozitivan.
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

    cout << endl;
    system("PAUSE");
}