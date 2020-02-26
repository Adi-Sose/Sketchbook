#include <iostream>
#include <string>
#include <bitset>
#include <algorithm>

using namespace std;

int main()
{
    string MESSAGE;
    getline(cin, MESSAGE);
    int a = MESSAGE.length();

    bitset<700> Message;

    int Counter = 0;
    for (char &letter : MESSAGE)
    {
        bitset<7> Letter(letter);

        for (int i = 0; i < 7; i++)
            Message[Counter++] = Letter[6 - (Counter % 7)];
    }

    bool Current = !Message[0];
    bool Initial = true;

    for (int i = 0; i < Counter; i++)
    {
        if (Message[i] != Current)
        {
            if (!Initial)
                cout << " ";
            else
                Initial = false;

            if (Message[i])
                cout << "0";
            else
                cout << "00";

            cout << " ";
            Current = Message[i];
        }

        cout << "0";
    }
}