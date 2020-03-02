#include <iostream>

using namespace std;

int main()
{
    int input;
    int steps = 0;
    
    cin >> input;
    
    while (input >= 10)
    {
        int temp = input;
        int product = 1;

        while (temp != 0)
        {
            product *= temp % 10;
            temp /= 10;
        }

        input = product;
        steps++;
    }

    cout << steps << endl;
}