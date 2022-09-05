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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int elem = arr[n - 1];
        int c = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] > elem)
            {
                c++;
                elem = arr[i];
            }
        }
        cout << c << endl;
        t--;
    }
}