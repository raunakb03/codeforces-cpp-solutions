#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n, a, b;
        cin >> n >> a >> b;
        if (b < n / 2 || a > n / 2 + 1 || (b <= n / 2 && a < n / 2) || (b > n / 2 && a > n / 2))
            cout << -1 << endl;
        else
        {
            vector<int> v(n);
            v[0] = a;
            v[n - 1] = b;
            int j = 1;
            for (int i = n; i >= 1; i--)
            {
                if (i != a && i != b)
                {
                    v[j++] = i;
                }
            }
            for (auto c : v)
                cout << c << " ";
            cout << "\n";
        }

        t--;
    }
}