// Zadatak: Od korisnika traziti unos pozitivnog broja.
// Ukoliko uneseni broj nije pozitivan potrebno je korisnika vratiti nazad na unos.
#include <iostream>
using namespace std;

int main()
{
    int Broj;

unos: // Lablela koja predstavlja poziciju u koda koju zelimo ponovno izvrsiti

    cout << "Unesite pozitivan broj: ";
    cin >> Broj;

    if (Broj <= 0) // Uslov na osnovu kojeg se vracamo na poziciju labele
    {
        goto unos; // Povratak na unos
    }

    cout << "Broj je pozitivan!";

    cout << endl;
    system("PAUSE");
}