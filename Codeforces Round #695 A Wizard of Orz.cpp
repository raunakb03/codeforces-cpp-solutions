#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        cin >> n;

        string s = "989";
        if (n <= 3)
            cout << s.substr(0, n) << "\n";
        else
        {
            cout << s;
            for (int i = 3; i < n; i++)
                cout << (i - 3) % 10;
            cout << "\n";
        }
        t--;
    }
}
