#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        typedef long long ll;
        ll tyres;
        cin >> tyres;
        ll max = 0, min = 0;
        if (tyres % 2 != 0)
        {
            cout << -1 << endl;
        }
        else if (tyres == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            max = tyres / 4;

            if (tyres % 6 == 0)
            {
                min = tyres / 6;
            }
            else
            {
                min = (tyres / 6) + 1;
            }
            cout << min << " " << max << endl;
        }
        t--;
    }
}