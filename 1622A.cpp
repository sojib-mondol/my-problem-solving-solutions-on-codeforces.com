#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ll T;
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    cin>>T;

    while(T--)
    {
        ll a, b, c, sum = 0;
        cin>>a>>b>>c;
        sum = a+b+c;

        if(b + c == a) cout<<"YES\n";
        else if(b == c && a%2==0) cout<<"YES\n";
        else if(a + c == b) cout<<"YES\n";
        else if(a == c && b%2 == 0) cout<<"YES\n";
        else if(a + b == c) cout<<"YES\n";
        else if(a == b  && c%2==0) cout<<"YES\n";
        else cout<<"NO\n";

    }

           return 0;
}


