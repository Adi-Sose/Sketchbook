#include <iostream>

using namespace std;

int Max(int niz[], int size)
{
    int max = niz[0];

    for (int i = 1; i < size; i++)
    {
        if (niz[i] > max)
        {
            max = niz[i];
        }
    }

    return max;
}

int main()
{
    int niz[16]{1, 2, 3, 4, 5, 6, 7, 8, 9, 8, 1, 2, 3, 4, 5, 100};

    for (int i = 0; i < 17; i++)
        cout << niz[i] << " \t" << niz + i << endl;
}