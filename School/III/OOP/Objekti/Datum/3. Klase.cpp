#include <iostream>

using namespace std;

class Datum
{
public:
    int Dan;
    int Mjesec;
    int Godina;
};

int main()
{
    Datum prvi, drugi;
    prvi.Dan = 11; prvi.Mjesec = 12; prvi.Godina = 1997;   //11.12.1997
    drugi.Dan = 10; drugi.Mjesec = 4; drugi.Godina = 1995; //10.4.1995
}