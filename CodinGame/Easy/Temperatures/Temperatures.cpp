#include <iostream>
#include <cmath>
#include <limits.h>
using namespace std;

int main()
{
    int n; // the number of temperatures to analyse
    cin >> n; cin.ignore();
    
    if (n == 0){
        cout << 0;
        return 0;
    }
    
    int minTemp = INT_MAX;

    for (int i = 0; i < n; i++) {
        int t; // a temperature expressed as an integer ranging from -273 to 5526
        cin >> t; cin.ignore();

        if (abs(t) < abs(minTemp) || (abs(t) == abs(minTemp) && t > 0))
        {
            minTemp = t;
            continue;
        }
    }

    cout << minTemp << endl; // Temperature that is closest to zero
}