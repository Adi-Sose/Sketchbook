#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int L;
    cin >> L; cin.ignore();
    int H;
    cin >> H; cin.ignore();
    string T;
    getline(cin, T);

    transform(begin(T), end(T), begin(T), ::toupper);

    for (int i = 0; i < H; i++) {
        string ROW;
        getline(cin, ROW);

        for (auto letter : T)
            if (!isalpha(letter))
                cout << ROW.substr(ROW.length() - L);
            else
                cout << ROW.substr((letter - 'A') * L, L);

        cout << endl;
    }

}