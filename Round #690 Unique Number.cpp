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
        vector<int> ans;
        int sum = 0;
        if (n > 45)
        {
            cout << -1 << endl;
        }
        else
        {

            for (int i = 9; i >= 0; i--)
            {
                if (n - sum >= i)
                {
                    ans.push_back(i);
                    sum += i;
                }
                else
                {
                    ans.push_back(n - sum);
                    break;
                }
            }
            for (int i = ans.size() - 1; i >= 0; i--)
            {
                if (ans[i] != 0)
                    cout << ans[i];
            }
            cout << "\n";
        }
        t--;
    }
}