#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int time = 240, sum = 0, ans = 0;
    int dif = time - k;

    for (int i = 1; i <= n; i++)
    {
        sum += i * 5;
        if (sum <= dif)
        {
            ans++;
        }
        else
        {
            break;
        }
    }

    printf("%d\n", ans);
    return 0;
}