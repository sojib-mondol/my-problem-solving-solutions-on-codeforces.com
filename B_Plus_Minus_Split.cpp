#include <bits/stdc++.h>

using namespace std;

int plus_minus_split(string s)
{
    int p = 0, m = 0;
    for (auto c : s)
    {
        if (c == '+')
            p++;
        if (c == '-')
            m++;
    }
    int dif = abs(p - m);
    return dif;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int len;
        cin >> len;
        string s;
        cin >> s;
        cout << plus_minus_split(s) << endl;
    }

    return 0;
}