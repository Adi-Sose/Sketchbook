#include <iostream>
using namespace std;

int main()
{

    cout << "1: Ova linja koda ce se izvrsiti prije goto naredbe" << endl;

    goto pozicija;

pozicija2:

    cout << "2: Ova linja koda se vise nece preskociti" << endl;
    cout << "3: Ova takodjer" << endl;
    
pozicija:

    goto pozicija2;

    cout << "4: Ova linja se nikada nece izvrsiti" << endl;

    cout << endl;
    system("PAUSE");
}