//bismillah
//https://codeforces.com/contest/1915/problem/A
// solition for problem A in c++

#include <bits/stdc++.h>

using namespace std;

int unique(int a, int b, int c)
{
    if (a == b)
    {
        return c;
    }
    else if (a == c)
    {
        return b;
    }
    else
    {
        return a;
    }
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        cout << unique(a, b, c) << endl;
    }
}
