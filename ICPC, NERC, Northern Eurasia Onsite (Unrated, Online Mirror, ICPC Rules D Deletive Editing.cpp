#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        string str1, str2;
        cin >> str1 >> str2;
        string ans = "";
        int arr[26] = {0};
        for (auto c : str1)
            arr[c - 'A']++;

        for (auto c : str2)
            arr[c - 'A']--;

        for (auto c : str1)
        {
            if (arr[c - 'A'] == 0)
                ans += c;
            else
                arr[c - 'A']--;
        }
        if (ans == str2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        t--;
    }
}