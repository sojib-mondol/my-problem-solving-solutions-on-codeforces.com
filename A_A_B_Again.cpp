#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, sum  = 0;
        cin>>n;
        while(n>0){
            m = n % 10;
            sum = sum + m;
            n = n / 10;
        }
        cout<<sum<<endl;
    }
}