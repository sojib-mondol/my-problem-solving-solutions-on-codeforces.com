#include <stdio.h> 

int main() {

    int n, tmp, mod;
    scanf("%d", &n);
 
    mod = n%10; 
    tmp = n/10; 
 
    if(mod % tmp == 0 || tmp % mod == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
 
    return 0;

}
