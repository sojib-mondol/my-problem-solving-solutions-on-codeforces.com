#include <bits/stdc++.h>

using namespace std;

bool equal(vector<int> v)
{
    int s1 = 0;
    int s2 = 0;
    for (int i = 0; i < v.size(); i = i + 2)
    {
        s1 += v[i];
    }

    for (int i = 1; i < v.size(); i = i + 2)
    {
        s2 += v[i];
    }

    cout<<s1<<"   -------- "<<s2<<" ---------"<< endl;
    return (s1 == s2);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> nums;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            nums.push_back(a);
        }

        cout << ((equal(nums) ? "YES\n" : "NO\n"));
    }
}