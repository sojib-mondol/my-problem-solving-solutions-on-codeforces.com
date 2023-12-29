#include <bits/stdc++.h>

using namespace std;

bool isVowel(char c)
{
    return (c == 'a' || c == 'e');
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        set<int> ind;
        for (int i = 1; i < n; i++)
        {
            if (isVowel(s[i]) && !isVowel(s[i - 1]))
            {
                ind.insert(i - 2);
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << s[i];
            if (ind.count(i))
            {
                cout << '.';
            }
        }
        cout << "\n";
    }
}
