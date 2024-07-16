#include <iostream>

using namespace std;

void solution()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (arr[0] == arr[n - 1])
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            if (i == 1)
            {
                cout << "B";
            }
            else
            {
                cout << "R";
            }
        }
        cout << endl;
    }
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        solution();
    }
}
