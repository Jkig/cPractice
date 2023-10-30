#include <stdio.h>

int main(){
    long long a = 0;
    long long b = 1;
    long long inter;
    // printf("%d\n",a);
    for (int i=0; i<10; i++) {
        inter = a+b;
        a = b;
        b = inter;
        // printf("%d\n", a);
    }
    printf("%lld", a);
    return 0;
}