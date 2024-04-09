#include <bits/stdc++.h>

using namespace std;

string winner(int a, int b)
{
    if ((a + b) % 2 == 0)
    {
        return "Bob\n";
    }
    else
    {
        return "Alice\n";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << winner(a, b);
    }

    return 0;
}