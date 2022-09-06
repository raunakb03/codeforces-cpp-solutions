#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while (t > 0)
    {
        ll n, k;
        cin >> n >> k;
        ll l = n * k;
        ll arr[l];
        arr[0] = 0;
        for (ll i = 1; i <= l; i++)
        {
            cin >> arr[i];
        }
        ll middle;
        if (n % 2 == 0)
            middle = n / 2;
        else
            middle = n / 2 + 1;

        ll sum = arr[(middle - 1) * k + 1];
        ll index = (middle - 1) * k + 1;
        ll inc = n - middle + 1;
        for (ll i = index + inc; i <= l; i += inc)
        {
            sum += arr[i];
        }
        cout << sum << "\n";
        t--;
    }
}