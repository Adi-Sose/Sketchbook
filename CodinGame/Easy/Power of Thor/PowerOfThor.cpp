#include <iostream>
using namespace std;

int main()
{
    int lightX;    // the X position of the light of power
    int lightY;    // the Y position of the light of power
    int initialTX; // Thor's starting X position
    int initialTY; // Thor's starting Y position
    cin >> lightX >> lightY >> initialTX >> initialTY;
    cin.ignore();

    // game loop
    while (1)
    {
        int remainingTurns; // The remaining amount of turns Thor can move. Do not remove this line.
        cin >> remainingTurns;
        cin.ignore();

        if (initialTY < lightY)
        {
            cout << "S";
            initialTY++;
        }
        else if (initialTY > lightY)
        {
            cout << "N";
            initialTY--;
        }

        if (initialTX < lightX)
        {
            cout << "E";
            initialTX++;
        }
        else if (initialTX > lightX)
        {
            cout << "W";
            initialTX--;
        }

        // A single line providing the move to be made: N NE E SE S SW W or NW
        cout << endl;
    }
}