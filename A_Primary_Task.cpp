#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int first_two_digits = n;
        while (first_two_digits >= 100)
        {
            first_two_digits /= 10;
        }

        int third_digit = -1;
        int temp = n;
        while (temp >= 1000)
        {
            temp /= 10;
        }
        
        third_digit = temp % 10;
        
        if (n >= 102)
        {
            if (first_two_digits == 10 && third_digit >= 1)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        } else {
            cout<<"NO\n";
        }

    }

    return 0;

}