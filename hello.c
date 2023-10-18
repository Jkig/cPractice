#include <stdio.h>

int main(){
    int a = 0;
    int b = 1;
    printf("%d", a);
    printf("\n");
    printf("%d", b);
    printf("\n");
    for(int i = 0; i<10; i+=1){
        printf("%d", a+b);
        printf("\n");
        int c = b;
        b = a+b;
        a = c;
    }
    return 0;
}