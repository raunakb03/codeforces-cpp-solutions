#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        typedef long long ll;
        ll n;
        ll cars = 0;
        cin >> n;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            cars += x;
        }

        ll r = cars % n;
        cout << r * (n - r) << endl;
        t--;
    }
}