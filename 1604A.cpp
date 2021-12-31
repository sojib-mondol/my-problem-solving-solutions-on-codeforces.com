#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int t,i,n,a[1000],k,index = 0;
    cin>>t;
    for(int tt = 1; tt<=t; tt++){
        index = 0;
        k = 1;
        cin >> n;
        for(i = 1; i <= n; i++){
            cin>>a[i];
            if(a[i]>k){
                index = index+a[i]-k;
                k = index + i;
            }
            k++;
        }
        cout<<index<<endl;
    }
}

