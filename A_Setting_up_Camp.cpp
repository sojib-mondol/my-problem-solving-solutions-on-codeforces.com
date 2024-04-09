// bismillah
// Problem A codeforces contest link: https://codeforces.com/contest/1945

#include <bits/stdc++.h>

using namespace std;

int ans(int a, int b, int c)
{
    int result = a;
    int r = b % 3;
    if (r == 0)
    {
        result += b / 3;
        if (c % 3 == 0)
        {
            result += c / 3;
        }
        else
        {
            result += c / 3 + 1;
        }
    } else if (c >= 3 - r){
        b += (3 - r);
        c -= (3 - r);
        result += b / 3;
        if (c % 3 == 0)
        {
            result += c / 3;
        }
        else
        {
            result += c / 3 + 1;
        }
    } else {
        return -1;
    }
    
    return result;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        cout << ans(a, b, c) << "\n";
    }
}