// Za dva datuma ispisati stariji u formatu "dd.mm.yyyy."

#include <iostream>

using namespace std;

int main()
{
    int prviDan = 11, prviMjesec = 12, prviGodina = 1997;   //11.12.1997.
    int drugiDan = 10, drugiMjesec = 4, drugiGodina = 1995; //10.4.1995.

    int prviUkupnoDana = prviDan + prviMjesec * 31 + prviGodina * 366;
    int drugiUkupnoDana = drugiDan + drugiMjesec * 31 + drugiGodina * 366;

    if (prviUkupnoDana < drugiUkupnoDana)
        cout << prviDan << "." << prviMjesec << "." << prviGodina << ".";
    else
        cout << drugiDan << "." << drugiMjesec << "." << drugiGodina << ".";
}