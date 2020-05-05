#include <iostream>

using namespace std;

int getDatumAsBrojDana(int dan, int mjesec, int godina)
{
    return dan + mjesec * 31 + godina * 366;
}

string getDatumAsString(int dan, int mjesec, int godina)
{
    return to_string(dan) + "." + to_string(mjesec) + "." + to_string(godina) + ".";
}

int main()
{
    int prviDan = 11, prviMjesec = 12, prviGodina = 1997;   //11.12.1997
    int drugiDan = 10, drugiMjesec = 4, drugiGodina = 1995; //10.4.1995

    int prviUkupnoDana = getDatumAsBrojDana(prviDan, prviMjesec, prviGodina);
    int drugiUkupnoDana = getDatumAsBrojDana(drugiDan, drugiMjesec, drugiGodina);

    if (prviUkupnoDana < drugiUkupnoDana)
        cout << getDatumAsString(prviDan, prviMjesec, prviGodina);
    else
        cout << getDatumAsString(drugiDan, drugiMjesec, drugiGodina);
}