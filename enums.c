#include <stdio.h>

// Define an enumeration
enum Color {
    RED,
    GREEN,
    BLUE
};

// Function that takes an enum as a parameter
void printColor(enum Color color) {
    printf("%d :: ", color);
    switch (color) {
        case RED:
            printf("The color is red.\n");
            break;
        case GREEN:
            printf("The color is green.\n");
            break;
        case BLUE:
            printf("The color is blue.\n");
            break;
        default:
            printf("Unknown color.\n");
    }
}

int main() {
    enum Color myColor = GREEN;
    printColor(myColor);

    myColor += 1;
    printColor(myColor);
    myColor += 1;
    printColor(myColor);
    myColor = 0;
    printColor(myColor);
    myColor += 1;
    printColor(myColor);
    return 0;
}
