#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
using namespace std;

double ToRadians(double val)
{
    return (3.14 / 180) * val;
}

double CalculateDistance(double lonA, double latA, double lonB, double latB)
{
    double x = (lonB - lonA) * cos((latA + latB) / 2);
    double y = (latB - latA);
    return sqrt(pow(x, 2) + pow(y, 2)) * 6371;
}

int main()
{

    string LON;
    cin >> LON;
    cin.ignore();
    replace(begin(LON), end(LON), ',', '.');
    double LONGITUDE = ToRadians(stod(LON, nullptr));

    string LAT;
    cin >> LAT;
    cin.ignore();
    replace(begin(LAT), end(LAT), ',', '.');
    double LATITUDE = ToRadians(stod(LAT, nullptr));

    int N;
    cin >> N;
    cin.ignore();

    map<string, double> defibrilatorDistances;

    for (int i = 0; i < N; i++)
    {
        string Temp, Name, LO, LA;

        getline(cin, Temp, ';');
        getline(cin, Name, ';');
        getline(cin, Temp, ';');
        getline(cin, Temp, ';');
        getline(cin, LO, ';');
        getline(cin, LA, '\n');

        replace(begin(LO), end(LO), ',', '.');
        replace(begin(LA), end(LA), ',', '.');

        double Longitude = ToRadians(stod(LO)),
               Latitude = ToRadians(stod(LA));

        defibrilatorDistances.insert(pair(Name, CalculateDistance(Longitude, Latitude, LONGITUDE, LATITUDE)));

        cerr << Name << " " << Latitude << " " << Longitude << endl;
    }

    auto minElement = min_element(begin(defibrilatorDistances), end(defibrilatorDistances), [](pair<string, double> element1, pair<string, double> element2) { return element1.second < element2.second; });

    cout << minElement->first << endl;
}