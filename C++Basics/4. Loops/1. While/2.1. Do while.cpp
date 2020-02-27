// Zadatak: Od korisnika traziti unos dva broja
// Ukoliko drugi uneseni broj nije manji od prvog korisnika vratiti nazad na unos drugog broja.
#include <iostream>
using namespace std;

int main()
{
    int Prvi, Drugi;
    cout << "Unesite prvi broj: ";
    cin >> Prvi;

    do
    {
        cout << "Unesite drugi broj: ";
        cin >> Drugi;
    } while (Drugi >= Prvi);

    cout << "Drugi broj je manji od prvog!";

    cout << endl;
    system("PAUSE");
}