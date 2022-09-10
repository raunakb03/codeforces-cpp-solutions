#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        cin >> n;
        vector<int> ans(n);
        if (n % 2 == 0 && n > 4)
        {
            ans[n - 1] = n;
            ans[n - 2] = n - 1;
            ans[n - 3] = 3;
            ans[n - 4] = 4;
            ans[n - 5] = 2;
            ans[n - 6] = 1;
            if (n > 6)
            {
                for (int i = 0; i < n - 6; i += 2)
                {
                    ans[i] = i + 6;
                    ans[i + 1] = i + 5;
                }
            }
            for (auto c : ans)
                cout << c << " ";
            cout << endl;
        }
        else if (n % 2 != 0 && n > 4)
        {
            ans[n - 1] = n;
            ans[n - 2] = n - 1;
            ans[n - 3] = 3;
            ans[n - 4] = 2;
            ans[n - 5] = 1;
            for (int i = 0; i <= n - 6; i += 2)
            {
                ans[i] = i + 5;
                ans[i + 1] = i + 4;
            }
            for (auto c : ans)
                cout << c << " ";
            cout << endl;
        }
        else if (n == 1)
        {
            cout << 1 << endl;
        }
        else if (n == 2)
        {
            cout << "1 2" << endl;
        }
        else if (n == 3)
        {
            cout << "2 1 3" << endl;
        }
        else if (n == 4)
            cout << "2 1 3 4" << endl;

        t--;
    }
}