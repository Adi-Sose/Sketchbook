#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{

    int N; // Number of elements which make up the association table.
    cin >> N;
    cin.ignore();
    int Q; // Number Q of file names to be analyzed.
    cin >> Q;
    cin.ignore();
    unordered_map<string, string> extenisonTypes;

    for (int i = 0; i < N; i++)
    {
        string EXT; // file extension
        string MT;  // MIME type.
        cin >> EXT >> MT;

        transform(begin(EXT), end(EXT), begin(EXT), ::tolower);

        extenisonTypes.insert(pair<string, string>(EXT, MT));

        cin.ignore();
    }
    for (int i = 0; i < Q; i++)
    {
        string FNAME;
        getline(cin, FNAME); // One file name per line.

        auto dot = find(rbegin(FNAME), rend(FNAME), '.');

        if (dot == rend(FNAME))
        {
            cout << "UNKNOWN" << endl;
            continue;
        }

        string extension;
        extension.resize(distance(rbegin(FNAME), dot));
        transform(rbegin(FNAME), dot, rbegin(extension), ::tolower);

        auto search = extenisonTypes.find(extension);

        if (search == extenisonTypes.end())
        {
            cout << "UNKNOWN" << endl;
            continue;
        }

        cout << search->second << endl;
    }
}