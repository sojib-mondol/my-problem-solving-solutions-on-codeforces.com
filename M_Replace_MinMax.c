#include <stdio.h>
#include <limits.h>

int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];
    int indexmin;
    int indexmax;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] < min) {
            min = arr[i];
            indexmin = i;
        }
        if(arr[i] > max) {
            max = arr[i];
            indexmax = i;
        }
    }

    arr[indexmin] = max;
    arr[indexmax] = min;

    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}