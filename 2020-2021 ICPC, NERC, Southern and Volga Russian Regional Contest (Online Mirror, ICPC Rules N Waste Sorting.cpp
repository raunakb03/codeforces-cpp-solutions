#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int pa, pl, ot, npa, npl, noth, nopa, nopl;
        cin >> pa >> pl >> ot >> npa >> npl >> noth >> nopa >> nopl;
        pa -= npa;
        npa = 0;
        pl -= npl;
        npl = 0;
        ot -= noth;
        noth = 0;
        if (pa >= 0)
        {
            nopa -= pa;
            pa = 0;
            if (nopa > 0)
            {
                if (ot >= nopa)
                {
                    ot -= nopa;
                    nopa = 0;
                }
                else
                {
                    nopa -= ot;
                    ot = 0;
                }
            }
        }
        if (pl >= 0)
        {
            nopl -= pl;
            pl = 0;
            if (nopl > 0)
            {
                if (ot >= nopl)
                {
                    ot -= nopl;
                    nopl = 0;
                }
                else
                {
                    nopl -= ot;
                    ot = 0;
                }
            }
        }
        if (npa > 0 || nopa > 0 || npl > 0 || nopl > 0 || noth > 0 || pa < 0 || pl < 0 || ot < 0)
            cout << "No"
                 << "\n";
        else
            cout << "YES"
                 << "\n";
        t--;
    }
}