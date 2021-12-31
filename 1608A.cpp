#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define lld long double
#define fl(i,n) for(int i = 0; i < n; i++)
#define rl(i, m, n) for(int i = 0; i >= m; i--)
#define py cout<<"Yes\n";
#define pn cout<<"No\n";
#define pi 3.14159265358973238
using namespace std;

void asquare(){
    ll n;
    cin>>n;
    if(n==1) cout<<"1\n";
    else{
        fl(i,n)cout<<i+2<<" ";
        cout<<"\n";
    }
}

int main(){
    ll t;
    cin>>t;
    while(t--){

        asquare();
    }

    return 0;
}


