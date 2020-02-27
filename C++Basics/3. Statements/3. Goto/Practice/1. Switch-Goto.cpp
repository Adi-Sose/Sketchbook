// Zadatak: Ispisati naziv unesenog interpunkcijskog znaka (., ,, !, ?).
// Ukoliko znak nije medju ponudjenima traziti ponovni unos od korisnika.
#include <iostream>
using namespace std;

int main()
{
    char Znak;

unos: // Lablela koja predstavlja poziciju u kodu
    cout << "Unesite znak: ";
    cin >> Znak;

    switch (Znak)
    {
    case '.':
        cout << "Tacka";
        break;

    case ',':
        cout << "Zarez";
        break;

    case '?':
        cout << "Upitnik";
        break;

    case '!':
        cout << "Uzvicnik";
        break;

    default:
        cout << "Ne prepoznajemo taj znak!" << endl;
        goto unos; // Povratak na unos
        break;
    }

    cout << endl;
    system("PAUSE");
}