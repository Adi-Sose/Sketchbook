// Zadatak: Od korisnika traziti da unese trocifreni broj
// Ukoliko broj nije nije trocifren traziti ponovni unos od korisnika
// Na kraju ispisati da li je zbir cifara unesenog trocifrenog broja paran ili neparan

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int Unos;

    do
    {
        cout << "Unesite trocifreni broj:";
        cin >> Unos;
    } while (100 > Unos || Unos > 999);

    if ((((Unos / 1) % 10) + ((Unos / 10) % 10) + ((Unos / 100) % 10)) % 2 == 0)
        cout << "Zbir cifara je paran ";
    else
        cout << "Zbir cifara je neparan";


    cout <<endl;
    system("PAUSE");
}