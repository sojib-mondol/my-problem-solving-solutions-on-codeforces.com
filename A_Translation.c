#include <stdio.h>
#include <string.h>

int main()
{
    char n[101];
    char n2[101];

    scanf("%s", n);
    scanf("%s", n2);

    int len = strlen(n);

    char i = 0;
    char j = len - 1;
    int f = 0;

    for (int i = 0; i < len; i++)
    {
        if (n[i] != n2[j])
        {
            f = 1;
        }
        j--;
    }

    if (f == 1)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }

    return 0;
}