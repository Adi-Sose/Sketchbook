// Zadatak: Ispisati naziv unesenog interpunkcijskog znaka (., ,, !, ?)
#include <iostream>
using namespace std;

int main()
{

    char Znak;
    cin >> Znak;

    if (Znak == '.')
    {
        cout << "Tacka";
    }

    if (Znak == ',')
    {
        cout << "Zarez";
    }

    if (Znak == '?')
    {
        cout << "Upitnik";
    }

    if (Znak == '!')
    {
        cout << "Uzvicnik";
    }
    
    cout << endl;
    system("PAUSE");
}