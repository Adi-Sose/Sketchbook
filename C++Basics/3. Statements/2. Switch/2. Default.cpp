// Zadatak: Ispisati naziv unesenog interpunkcijskog znaka (., ,, !, ?). 
// Ukoliko znak nije medju ponudjenima ispisati poruku da taj znak ne prepoznajemo.
#include <iostream>
using namespace std;

int main()
{

    char Znak;
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
        cout << "Ne prepoznajemo taj znak!";
        break;
    }

    cout << endl;
    system("PAUSE");
}