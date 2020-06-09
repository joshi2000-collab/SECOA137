#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n / 2; i++)
        {
            if (i % 2 == 0)
            {
                for (int j = 0; j < n - (i + 1); j++)
                    cout << "%";
                for (int j = 0; j < (i + 1); j++)
                    cout << "#";
                cout << "\n";
            }
            else
            {
                for (int j = 0; j < (i + 1); j++)
                    cout << "#";
                for (int j = 0; j < n - (i + 1); j++)
                    cout << "%";
                cout << "\n";
            }
        }
        for (int i = n / 2; i < n; i++)
        {
            if (i % 2 == 0)
            {
                for (int j = 0; j < i; j++)
                    cout << "%";
                for (int j = 0; j < n - i; j++)
                    cout << "#";
                cout << "\n";
            }
            else
            {
                for (int j = 0; j < n - i; j++)
                    cout << "#";
                for (int j = 0; j < i; j++)
                    cout << "%";
                cout << "\n";
            }
        }
    }
    return 0;
}
