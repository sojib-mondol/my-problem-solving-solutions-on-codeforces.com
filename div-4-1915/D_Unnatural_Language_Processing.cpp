// simple aproch

#include <bits/stdc++.h>

using namespace std;

string unnatural(string s, int n)
{
    string x = "";
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a' || s[i] == 'e')
        {
            x += 'V';
        }
        else
        {
            x += 'C';
        }
    }

    for (int i = n - 1; i > 0; i--)
    {
        if (i > 3)
        {
            if (x[i] == 'C' && x[i - 1] == 'V' && x[i - 2] == 'C')
            {
                s.insert(i - 2, ".");
                i = i - 2;
            }
        }
        if (i > 2)
        {
            if (x[i] == 'V' && x[i - 1] == 'C')
            {
                s.insert(i - 1, ".");
                i = i - 1;
            }
        }
    }

    return s;
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

        cout << unnatural(s, n) << endl;
    }
}


// #include <bits/stdc++.h>

// using namespace std;

// bool isVowel(char c)
// {
//     return (c == 'a' || c == 'e');
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         string s;
//         cin>>s;
//         set<int> ind;
//         for (int i = 1; i < n; i++)
//         {
//             if (isVowel(s[i]) && !isVowel(s[i - 1]))
//             {
//                 ind.insert(i - 2);
//             }
//         }

//         for (int i = 0; i < n; i++)
//         {
//             cout << s[i];
//             if (ind.count(i))
//             {
//                 cout << '.';
//             }
//         }
//         cout << "\n";
//     }
// }

