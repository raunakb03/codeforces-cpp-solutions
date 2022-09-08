#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        ll n;
        cin >> n;
        int k = 0;
        int c = 0;
        ll num = n;

        {
            while (num != 1)
            {
                if (num % 6 == 0)
                {
                    num /= 6;
                    c++;
                }
                else
                {
                    if (num % 3 == 0)
                    {
                        num *= 2;
                        c++;
                    }
                    else
                    {
                        k = 1;
                        break;
                    }
                }
            }
            if (k == 1)
                cout << -1 << "\n";
            else
                cout << c << endl;
            t--;
        }
    }
}
