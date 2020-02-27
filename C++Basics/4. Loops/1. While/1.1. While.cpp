// Zadatak: Od korisnika traziti unos pozitivnog broja.
// Ukoliko uneseni broj nije pozitivan potrebno je korisnika vratiti nazad na unos.
#include <iostream>
using namespace std;

int main()
{
    int Broj = -1;

    while (Broj <= 0)
    {
        cout << "Unesite pozitivan broj: ";
        cin >> Broj;
    }

    cout << "Broj je pozitivan!";

    cout << endl;
    system("PAUSE");
}