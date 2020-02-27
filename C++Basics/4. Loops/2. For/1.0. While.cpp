// Zadatak: Ispisati brojeve od 1 do 10.
#include <iostream>
using namespace std;

int main()
{
    int i; // Deklaracija brojaca

    i = 1; // Inicijalizacija vrijednosti brojaca

    while (i <= 10) // Uslov
    {
        cout << i << endl; // Naredba koja se izvrsava
        i = i + 1;         // Promjena vrijednosti brojaca
    }

    cout << endl;
    system("PAUSE");
}