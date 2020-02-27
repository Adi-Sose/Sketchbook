// Zadatak: Ispisati naziv unesenog interpunkcijskog znaka (., ,, !, ?)
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
    }
    
    cout << endl;
    system("PAUSE");
}