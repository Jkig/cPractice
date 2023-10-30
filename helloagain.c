#include <stdio.h>
#include <stdbool.h>

int main() {
    bool wow = true;

    bool the;
    
    the = (false==wow);

    printf("1 is true, 0 is false: %d", the);
    return 0;
}