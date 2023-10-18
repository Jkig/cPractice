#include <stdio.h>

int main() {
    int a = 5;
    int b = 2;

    printf("We need to be carefull here, as it gives an int %d\n", a/b);
    printf("do something like this: %f\n", a/ (float) b);
    float bb = 2;
    printf("or this: %f\n", a/bb);

    // this stuff is where I need to be careful about the statically typed language
    // as most of my resent practice is dynamic, this could be a problem for me

    return 0;
}