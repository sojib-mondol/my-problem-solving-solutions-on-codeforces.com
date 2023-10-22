#include <stdio.h>

int main()
{

    float a, b;
    scanf("%f %f", &a, &b);

    float actual = 0;
    actual = b / (1 - a / 100);
    printf("%.2f\n", actual);

    return 0;
}
