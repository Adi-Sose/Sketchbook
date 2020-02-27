// Zadatak: Ispisati sve cetverocifrene brojeve ciji je zbir cifara jednak 17.
// Prvi broj treba biti 1079 a zadnji 9800
#include <iostream>
using namespace std;

int main()
{

    for (int i = 1000; i <= 9999; i++)
    {
        if (((i / 1) % 10) + ((i / 10) % 10) + ((i / 100) % 10) + ((i / 1000) % 10) == 17)
        {
            cout << i << endl;
        }
    }

    cout << endl;
    system("PAUSE");
}