#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // game loop
    while (1)
    {

        vector<int> mountains;

        for (int i = 0; i < 8; i++)
        {
            int mountainH; // represents the height of one mountain.
            cin >> mountainH;
            cin.ignore();
            mountains.push_back(mountainH);
        }

        cout << distance(begin(mountains), max_element(begin(mountains), end(mountains))) << endl;  // The index of the mountain to fire on.
    }
}