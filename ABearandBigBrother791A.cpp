#include<bits/stdc++.h>

using namespace std;

int main()
{
    int l, b, i, tmp = 0;
    cin>>l>>b;

    while(true){
        tmp ++;
        l *= 3;
        b *= 2;
        if(l>b) break;
    }
    cout<<tmp<<endl;
}
