#include <iostream>

using namespace std;

class Datum
{
public:
    int Dan;
    int Mjesec;
    int Godina;
};

int getBrojDana(Datum datum)
{
    return datum.Dan + datum.Mjesec * 31 + datum.Godina * 366;
}

string getString(Datum datum)
{
    return to_string(datum.Dan) + "." + to_string(datum.Mjesec) + "." + to_string(datum.Godina) + ".";
}

int main()
{
    Datum prviDatum;
    Datum drugiDatum;

    prviDatum.Dan = 11; prviDatum.Mjesec = 12; prviDatum.Godina = 1997; 
    drugiDatum.Dan = 10; drugiDatum.Mjesec = 4; drugiDatum.Godina = 1995;

    if (getBrojDana(prviDatum) < getBrojDana(drugiDatum))
        cout << getString(prviDatum);
    else
        cout << getString(drugiDatum);
}