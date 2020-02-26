#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> powers;
    vector<int> differences;

    int N;
    cin >> N;
    cin.ignore();
    for (int i = 0; i < N; i++)
    {
        int Pi;
        cin >> Pi;
        cin.ignore();
        powers.push_back(Pi);
    }

    sort(begin(powers), end(powers), [](int element1, int element2) { return element1 > element2; });
    transform(begin(powers), end(powers) - 1, begin(powers) + 1, back_inserter(differences), [](int current, int next) { return current - next; });

    cout << *min_element(begin(differences), end(differences));
}