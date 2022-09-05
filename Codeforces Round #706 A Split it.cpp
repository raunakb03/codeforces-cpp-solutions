#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        int k;
        cin >> n >> k;
        string str;
        cin >> str;
        if (k == 0)
            cout << "YES" << endl;

        else if (2 * k >= n)
            cout << "NO" << endl;

        else
        {
            int i = 0;
            int c = 0;
            while (i < k)
            {
                if (str[i] != str[n - i - 1])
                {
                    c = 1;
                }
                i++;
            }
            if (c == 1)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
        t--;
    }
}