#include <stdio.h>
#include <string.h>

int main()
{

    char s[1001];
    scanf("%s", s);

    int len = strlen(s);

    int i = 0;
    int j = len - 1;
    int flag = 0;

    while (i <= j)
    {
        if (s[i] != s[j])
        {
            flag = 1;
        }
        i++;
        j--;
    }

    if (flag == 1)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }

    return 0;
}
