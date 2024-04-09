#include <bits/stdc++.h>

using namespace std;

long long int minBurles(int n, int a, int b)
{

    int ans = 0;
    int ans2 = n * a;
    if (n % 2 != 0)
    {
        ans = ((n/2)*b)+a;
    } else{
        ans = (n/2)*b;

    }
    if(ans <= ans2){
        return ans;
    }else {
        return ans2;
    }

}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        cout << minBurles(n, a, b) << endl;
    }

    return 0;
}

