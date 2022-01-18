#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, div, mod;

    cin>>n;
    if(n>=5 && n%5!=0){
        div = n/5;
        cout<<div+1<<endl;
    }
    else if(n%5==0 && n>=5){
        div = n/5;
        cout<<div<<endl;
    }
    else{
        cout<<1<<endl;
    }

    return 0;
}
