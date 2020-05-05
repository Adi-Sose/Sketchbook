#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Datum
{
public:
    int Dan;
    int Mjesec;
    int Godina;

    Datum(int dan = 1, int mjesec = 1, int godina = 1900)
    {
        Dan = dan;
        Mjesec = mjesec;
        Godina = godina;
    }

    string Podaci()
    {
        return to_string(Dan) + "." + to_string(Mjesec) + "." + to_string(Godina);
    }
};

class Osoba
{
public:
    string Ime;
    string Prezime;
    Datum DatumRodjenja;

    Osoba(string ime, string prezime, Datum datumRodjenja)
    {
        Ime = ime;
        Prezime = prezime;
        DatumRodjenja = datumRodjenja;
    }

    string Podaci()
    {
        return "Ime: \t\t" + Ime + "\n" + "Prezime: \t" + Prezime + "\n" + "Datum rodjenja: " + DatumRodjenja.Podaci() + "\n";
    }
};

int main()
{
    Osoba osoba("Adi", "Sose", Datum(11, 12, 1997));
    Osoba osoba2("Jasmina", "Sose", Datum(10, 4, 1995));

    cout << osoba.Podaci() << endl;
    cout << osoba2.Podaci();
}