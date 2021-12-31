#include<bits/stdc++.h>
#include<string.h>
#include<vector>

using namespace std;

int main(){
    long long int n, ch, ch2;
    string in;
    cin>>n;

    while(n--){
    cin>>in;
    ch = in.size();

    if(in.substr(0,ch/2) + in.substr(0, ch/2) == in) cout<<"YES\n";
    else cout<<"NO\n";

    }
  
    return 0;
}
