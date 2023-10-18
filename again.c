#include <stdio.h>

int main() {
    int x = 190;
    float y = 9.6;
    float z = x+y;
    printf("%f\n", z);

    char grade = 'B';

    char name[] = "Derek";

    printf("your grade was %c, thats ok, %s\n", grade, name);

    // we can assign chars with askii: (and use constantstoo)
    const char E = 101;
    
    printf("%c\n", E);
    // we can print the askii table:
    for (int i=1; i<128; i++) {
        printf("ASKII: %d corresponds to char: %c\n", i, i);
    }
    return 0;
}