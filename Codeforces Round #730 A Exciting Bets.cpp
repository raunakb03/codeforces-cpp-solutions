#include <bits/stdc++.h>
using namespace std;

int main()
{
    typedef long long ll;
    int t;
    cin >> t;
    while (t > 0)
    {
        ll a, b;
        cin >> a >> b;
        if (a > b)
            swap(a, b);

        ll ans = b - a;
        if (ans == 0)
            cout << 0 << " " << 0 << endl;
        else
        {
            ll c1 = ans - a % ans;
            ll c2 = a % ans;
            ll c = min(c1, c2);
            cout << ans << " " << c << endl;
        }
        t--;
    }
}