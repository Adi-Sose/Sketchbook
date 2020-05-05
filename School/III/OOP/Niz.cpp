#include <iostream>
#include <cmath>
using namespace std;

class Niz
{
public:
    int Elementi[100];
    int BrojElemenata = 0;

    void DodajNaPocetak(int noviClan)
    {
        for (int i = BrojElemenata - 1; i >= 0; i--)
            Elementi[i + 1] = Elementi[i];
        Elementi[0] = noviClan;
        BrojElemenata++;
    }

    int UkloniZadnjiClan()
    {
        return Elementi[--BrojElemenata];
    }
};

int main()
{
    Niz mojNiz;
    mojNiz.DodajNaPocetak(5);
    mojNiz.DodajNaPocetak(15);
    mojNiz.DodajNaPocetak(25);
    for (int i = 0; i < mojNiz.BrojElemenata; i++)
    {
        cout << mojNiz.Elementi[i] << endl;
    }
    // Nakon ovoga ce se na ekranu ispisati 25, 15, 5 i BrojElemenata je 3
    int A = mojNiz.UkloniZadnjiClan(); // Broj 5 se uklanja iz niza i pohranjuje u varijablu A
    cout << A << endl;                 // Ispisat ce se broj 5
    for (int i = 0; i < mojNiz.BrojElemenata; i++)
    {
        cout << mojNiz.Elementi[i] << endl;
    }
    // Nakon ovoga ce se na ekranu ispisati 25, 15 i BrojElemenata je 2
}