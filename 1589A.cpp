#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, u, v, x = 0, y = 0;
    cin>>t;
    while(t--){
        cin>>u>>v;
        printf("-%d %d\n", x=u*u, y=v*v);
    }
    return 0;
}
