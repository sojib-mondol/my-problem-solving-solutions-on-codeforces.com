#include <stdio.h>
#include <string.h>

int main()
{

    int n;
    scanf("%d", &n);

    while (n--)
    {
        char s[100];
        scanf("%s", s);
        int count = 0;

        int len = strlen(s);
        if (len <= 10)
        {
            printf("%s\n", s);
        }
        else
        {
            for (int i = 0; i < len; i++)
            {
                count++;
            }
            printf("%c%d%c\n", s[0], count - 2, s[count - 1]);
        }
    }
}