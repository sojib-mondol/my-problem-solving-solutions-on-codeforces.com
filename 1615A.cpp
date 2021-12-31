#include<iostream>

using namespace std;

int main(){
    int T, n, a, i, j;
    cin>>T;
    while(T--){
        cin>>n;
        int sum = 0;
        for(i = 1; i <= n; i ++){
        cin>>a;
        sum += a;
        }
        if(sum % n == 0) cout<<"0\n";
        else cout<<"1\n";


    }

    return 0;


}
