#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int t;
    cin>>t;
    while(t--)
    {
        string s1, s2;
        int a, b;
 
        cin>>s1>>a;
        cin>>s2>>b;
 
        while(s1[s1.size()-1]=='0')   // whne '0' in the s1
        {
            a++;
            s1.pop_back();
        }
        while(s2[s2.size()-1]=='0')   // whne '0' in the s2
        {
            b++;
            s2.pop_back();
        }
 
        if(s1==s2)
        {
            if(a==b) cout<<"="<<endl;
            else if(a<b) cout<<"<"<<endl;
            else cout<<">"<<endl;
        }
        else
        {
            int x = s1.size()+a;
            int y = s2.size()+b;
 
            if(x==y)
            {
                if(s1>s2) cout<<">"<<endl;
                else cout<<"<"<<endl;
            }
            else if(x>y) cout<<">"<<endl;
            else cout<<"<"<<endl;
 
        }
 
    }
 
    return 0;
}