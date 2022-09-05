#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    typedef long long ll;
    while (t > 0)
    {
        ll n, x;
        cin >> n >> x;
        ll arr[n];
        ll div[n];
        ll max = 0;
        ll min = 0;
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % x == 0)
                div[i] = arr[i] / x;
            else
                div[i] = arr[i] / x + 1;
            max += div[i];
        }
        for (auto c : arr)
        {
            sum += c;
        }
        if (sum % x == 0)
            min = sum / x;
        else
            min = sum / x + 1;

        cout << min << " " << max << "\n";

        t--;
    }
}