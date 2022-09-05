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
        vector<int> p;
        int max = 0;
        int index = -1;
        for (int i = 0; i < n; i++)
        {
            int input;
            cin >> input;
            p.push_back(input);
        }
        int k = 0;
        for (int i = 0; i < n - 1; i++)
        {

            if (p[i] != p[i + 1])
            {
                k = 1;
                break;
            }
        }
        if (k == 0)
        {
            cout << -1 << "\n";
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (i != 0 && i != n - 1)
                {
                    if ((p[i] > p[i - 1] || p[i] > p[i + 1]) && p[i] >= max)
                    {
                        max = p[i];
                        index = i;
                    }
                }
                else if (i == 0)
                {
                    max = p[i];
                    index = 0;
                }
                else if (i == n - 1)
                {
                    if (p[i] > p[i - 1] && p[i] > max)
                    {
                        max = p[i];
                        index = i;
                    }
                }
            }
            cout << index + 1 << "\n";
        }
        t--;
    }
}