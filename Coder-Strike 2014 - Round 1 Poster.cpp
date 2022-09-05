#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    if (b > a / 2)
    {
        int c = a - b;
        while (c > 0 and b != a)
        {
            cout << "RIGHT\n";
            c--;
        }
        for (int i = a - 1; i > 0; i--)
        {
            cout << "PRINT " << s[i] << "\nLEFT\n";
        }
        cout << "PRINT " << s[0] << "\n";
    }
    else
    {
        int c = b - 1;
        while (c > 0 and b != 1)
        {
            cout << "LEFT\n";
            c--;
        }
        for (int i = 0; i < a - 1; i++)
        {
            cout << "PRINT " << s[i] << "\nRIGHT\n";
        }
        cout << "PRINT " << s[a - 1] << "\n";
    }
}
