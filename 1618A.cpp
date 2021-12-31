#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){

    ll t, n[7], i;
    cin>>t;
    while(t--){

        for(i=0; i<7; i++) cin>>n[i];
        cout<<n[0]<<" "<<n[1]<<" ";
        if(n[0]+n[1] != n[2]) cout<<n[2]<<"\n";
        else cout<<n[3]<<"\n";

    }
}
