#include <iostream>
using namespace std;

int main()
{

    cout << "1: Ova linja koda ce se izvrsiti prije goto naredbe" << endl;

    goto pozicija;

    cout << "2: Ova linja koda ce se preskociti" << endl;
    cout << "3: Ova takodjer" << endl;

pozicija:

    cout << "3: Ova linja koda ce se izvrsiti nakon goto naredbe" << endl;

    cout << endl;
    system("PAUSE");
}