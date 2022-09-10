#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while (t > 0)
    {
        ll n;
        cin >> n;
        vector<ll> v;
        ll c = 0;
        for (ll i = 0; i < n; i++)
        {
            ll input;
            cin >> input;

            if (i != 0 && input == 0 && v[i - 1] != 0 && i != n - 1)
            {
                input++;
                v[i - 1]--;
                c++;
            }
            v.push_back(input);
        }
        for (ll i = 0; i < n - 1; i++)
        {
            c += v[i];
        }
        cout << c << "\n";

        t--;
    }
}e