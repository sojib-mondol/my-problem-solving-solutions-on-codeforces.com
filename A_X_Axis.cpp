// https://codeforces.com/contest/1986/problem/A

#include <bits/stdc++.h>

using namespace std;

int find_max(int &a, int &b, int &c)
{
    int max;
    if (a >= b && a >= c)
    {
        max = a;
    }
    else if (b >= a && b >= c)
    {
        max = b;
    }
    else
    {
        max = c;
    }

    return max;
}

int find_min(int &a, int &b, int &c)
{
    int min;
    if (a <= b && a <= c)
    {
        min = a;
    }
    else if (b <= a && b <= c)
    {
        min = b;
    }
    else
    {
        min = c;
    }

    return min;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int max_v = find_max(a, b, c);
        int min_v = find_min(a, b, c);
        int mid_v = a + b + c - min_v - max_v;

        int ans1 = mid_v - min_v;
        int ans2 = max_v - mid_v;

        int result = ans1 + ans2;

        cout << result << endl;
    }
}