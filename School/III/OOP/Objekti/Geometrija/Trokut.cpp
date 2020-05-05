#include <iostream>
#include <cmath>
using namespace std;

class Trougao
{
private:
    double a;
    double b;
    double c;

public:
    Trougao(double prvaStr, double drugaStr, double trecaStr)
    {
        a = prvaStr;
        b = drugaStr;
        c = trecaStr;
    }

    double Povrsina()
    {
        double s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }

    double Obim()
    {
        return a + b + c;
    }

    string GetStranice()
    {
        return "a:" + to_string(a) + "\n" + "b:" + to_string(b) + "\n" + "c:" + to_string(c) + "\n";
    }
};

main()
{
    Trougao prvi(24, 30, 18);

    cout << prvi.Povrsina() << endl;
    cout << prvi.Obim() << endl;
    cout << prvi.GetStranice();
}