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
        int c = 0;
        int k = 0;
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int input;
            cin >> input;
            arr.push_back(input);
        }
        for (int i = 1; i < arr.size(); i++)
        {
            if (arr[i] > arr[i - 1])
                k = 1;
            else
            {
                k = 0;
                break;
            }
        }
        if (n == 1 || k == 1)
            cout << 0 << endl;

        else
        {
            for (int i = n - 2; i >= 0; i--)
            {
                while (arr[i] >= arr[i + 1])
                {
                    if (arr[i] == 0)
                        break;
                    arr[i] /= 2;
                    c++;
                }
            }

            for (int i = 1; i < n; i++)
            {
                if (arr[i] > arr[i - 1])
                    k = 1;
                else
                    break;
            }
            if (k == 0)
                cout << -1 << endl;
            else
            {
                cout << c << endl;
                c = 0;
            }
        }

        t--;
    }
}