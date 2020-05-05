#include <iostream>

using namespace std;

int main()
{

    int i = 0;

pozicija:

    cout << i << endl;

    i = i + 1;

    if (i < 10)
        goto pozicija;
}