#include <iostream>
using namespace std;

int main()
{

    cout << "1: Ova linja koda ce se izvrsiti prije goto naredbe" << endl;

    goto pozicija;

pozicija2:

    cout << "2: Ova linja koda se vise nece preskociti" << endl;
    cout << "3: Ova takodjer" << endl;

    goto pozicija3;
    
pozicija:

    goto pozicija2;

pozicija3:

    cout << "4: Ova linja koda ce se izvrsiti nakon goto naredbe" << endl;

    cout << endl;
    system("PAUSE");
}