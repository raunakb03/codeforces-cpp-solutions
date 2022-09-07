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
        if (n == 0 || n == 1 || n == 2 || n == 4)
            cout << -1 << "\n";

        else
        {
            int nf = 0, nt = 0;
            int ns = n / 7;
            int rem = n % 7;
            if (rem % 3 == 0)
                nt = rem / 3;
            if (rem % 5 == 0)
                nf = rem / 5;

            if (rem == 1)
            {
                nt++;
                ns--;
                nf++;
                rem = 0;
            }
            else if (rem == 2)
            {
                nt += 3;
                ns--;
                rem = 0;
            }
            else if (rem == 4)
            {
                nt += 2;
                nf++;
                ns--;
                rem = 0;
            }

            cout << nt << " " << nf << " " << ns << "\n";
        }
        t--;
    }
}
