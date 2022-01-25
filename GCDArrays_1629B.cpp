#include<bits/stdc++.h>
#define py cout<<"yes\n";
#define pn cout<<"no\n";
#define ll long long

using namespace std;

void asquare()
{
    ll l, r, k;
    cin>>l>>r>>k;

    if(l == r)
    {
        if(l > 1) {
            py;
        }
        else
        {
            pn;
        }
    }
    else
    {
        ll odd = (r-l+1)/2;
        ll even = (r-l+1)/2;

        if(r%2 == l%2)
        {
            if(r%2 == 1) odd++;
            else even++;
        }
        if(k >= odd) {
            py;
        }
        else {
            pn;
        }

    }
}

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int t;
    cin>>t;
    while(t--)
    {
        asquare();
    }
}
