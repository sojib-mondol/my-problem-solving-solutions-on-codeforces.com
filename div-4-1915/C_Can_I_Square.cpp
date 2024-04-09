// bismillah
// https://codeforces.com/contest/1915/problem/C
//  solition for problem C in c++

#include <bits/stdc++.h>

using namespace std;

bool isSqrt(vector<int> v)
{
    long long int sum = 0;
    for (auto e : v)
    {
        sum += e;
    }

    long long s = sqrt(sum);
    return (s * s == sum);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> num;
        for (int i = 0; i < n; i++)
        {

            int a;
            cin >> a;
            num.push_back(a);
        }

        cout << (isSqrt(num) ? "YES\n" : "NO\n");
    }
}
