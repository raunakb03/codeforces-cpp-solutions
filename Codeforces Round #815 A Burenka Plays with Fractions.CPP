#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    typedef long long ll;
    while (t > 0)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        ll x = a * d, y = c * b;
        if (x == y)
            cout << 0 << "\n";
        else if (y != 0 && x % y == 0 || x != 0 && y % x == 0)
            cout << 1 << "\n";
        else
            cout << 2 << "\n";
        t--;
    }
}