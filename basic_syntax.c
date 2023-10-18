#include <stdio.h>

// Here i'll practice with all the standard datatypes in c, and some conversions?


void printArr(int numbers[]) {
    for (int i=0; i<10;i=i+1) {
        printf("%d", numbers[i]);
        printf("\n");
    }

}

void arrays() {
    int numbers[10];

    for (int i=0; i<10;i=i+1) {
        numbers[i] = i+10;
    }
    printArr(numbers);
}


void testWhile() {
    int i=0;
    while (i<20) {
        printf("%d", i);
        printf("\n");
        if (i%2 == 0) {
            i += 3;
        } else{
            i += 1;
        }
    }
}


void testStr() {
    char myString[] = "hello world";
    printf("%s", myString);
    printf(", c is a little odd\n\n");
    printf("I'm understanding a little better why c++ went to cout\n");
    printf("But I do like python's print statements better than that too\n");
    printf("%c", myString[0]);
}


int func1 (int number) {
    return number*3+7;
}

int func2 (int number) {
    printf("number: ");
    printf("%d", number);
    printf("\n");
    printf("number floor divide (/) 2: ");
    printf("%d", number/2);
    printf("\nnumber modulo (%%) 2: ");
    printf("%d", number%2);
    printf("\n");

    return number * 2;
}

int main() {
    /*
    int a = func2(func1(5));
    printf("%d", a);
    */

    
    return 0;
}