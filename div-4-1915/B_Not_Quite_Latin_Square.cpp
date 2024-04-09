// bismillah
// https://codeforces.com/contest/1915/problem/B
//  solition for problem B in c++

#include <bits/stdc++.h>

using namespace std;

char mising(char arr[3][3])
{
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == 'A')
                a++;
            if (arr[i][j] == 'B')
                b++;
            if (arr[i][j] == 'C')
                c++;
        }
    }
    if (a == 3 && b == 3)
        return 'C';
    else if (a == 3 && c == 3)
        return 'B';
    else
        return 'A';
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char arr[3][3];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> arr[i][j];
            }
        }

        cout << mising(arr) << endl;
    }
}