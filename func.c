#include <stdio.h>

void hello (char[], int);

int main() {
    hello("derek", 24);
    return 0;
}


void hello (char name[], int age) {
    printf("hello %s, you are %d years old\n", name, age);
}
