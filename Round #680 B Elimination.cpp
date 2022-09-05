#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int ans = max(a + b, c + d);
        cout << ans << "\n";
        t--;
    }
}