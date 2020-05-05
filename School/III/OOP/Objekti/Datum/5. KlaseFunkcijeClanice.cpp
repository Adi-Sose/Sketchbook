#include <iostream>

using namespace std;

class Datum
{
private:
    int Dan;
    int Mjesec;
    int Godina;

public:
    Datum(int dan, int mjesec, int godina)
    {
        Dan = dan;
        Mjesec = mjesec;
        Godina = godina;
    }

    int getBrojDana()
    {
        return Dan + Mjesec * 31 + Godina * 366;
    }

    string getString()
    {
        return to_string(Dan) + "." + to_string(Mjesec) + "." + to_string(Godina) + ".";
    }
};

int main()
{
    Datum prvi(11, 12, 1997);
    Datum drugi(10, 4, 1995);

    if (prvi.getBrojDana() < drugi.getBrojDana())
        cout << prvi.getString();
    else
        cout << drugi.getString();
}