//bismillah
#include<bits/stdc++.h>

using namespace std;

int main(){

    int a, b, c, ex1=0, ex2=0, ex3=0, ex4=0, ex5=0;
    cin>>a>>b>>c;
    ex1=a+(b*c);
    ex2=a*(b+c);
    ex3=a*b*c;
    ex4=(a+b)*c;
    ex5=a+b+c;

    if(ex1>=ex2 && ex1>=ex3 && ex1>=ex4 && ex1>=ex5){
        cout<<ex1<<endl;
    }
    else if(ex2>=ex1 && ex2>=ex3 && ex2>=ex4 && ex2>=ex5){
        cout<<ex2<<endl;
    }
    else if(ex3>=ex5 && ex3>=ex2 && ex3>=ex4 && ex3>=ex1){
        cout<<ex3<<endl;
    }
    else if(ex4>=ex1 && ex4>=ex2 && ex4>=ex3 && ex4>=ex5){
        cout<<ex4<<endl;
    }
    else if(ex5>=ex1 && ex5>=ex2 && ex5>=ex3 && ex5>=ex4){
        cout<<ex5<<endl;
    }

    //cout<<ex1<<"  "<<ex2<<" "<<ex3<<" "<<ex4<<" "<<ex5<<endl;

    return 0;
}
