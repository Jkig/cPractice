#include <stdio.h>


void basics () {
    // all pointers need to point to so actual memeory, I can't have a pointer and use it without some stuff
    // This can work sometimes but you should NOT DO THIS
    /*
    int *ptr;// this is what we call an unitinialized pointer
    *ptr = 10;
    printf("%d\n", *ptr);
    */
    int baseValue = 0;
    int *ptr = &baseValue;
    *ptr = 10;

    printf("%d\n", baseValue);
    printf("%d\n", *ptr);

    baseValue = 7;

    printf("%d\n", baseValue);
    printf("%d\n", *ptr);

    // print the value of a pointer: (ptr the value itself means the address it holds)
    printf("%p\n", ptr);
    // dereferencing means going to that location in memeory and getting it

    // so here is an example of a double pointer, a pointer to a pointer
    int **doublePointer = &ptr;
    // value of dereferenced double pointer is the address of the original variable
    printf("%p\n", *doublePointer);// the value of the variable this points to (which happens to be the address of annother variable)
    printf("%p\n", &baseValue);
    
    printf("%d\n", baseValue);
    printf("%d\n", *ptr);
    printf("%d\n\n\n", **doublePointer);// the value of the variable this points to (which happens to be the address of annother variable)

    // you can change the value several ways:
    baseValue = 8;
    printf("%d\n%d\n%d\n", baseValue, *ptr, **doublePointer);
    *ptr = 9;
    printf("%d\n%d\n%d\n", baseValue, *ptr, **doublePointer);
    **doublePointer = 12;
    printf("%d\n%d\n%d\n", baseValue, *ptr, **doublePointer);
}

void arrayNotation(void) {
    int baseArray[5] = {0,1,2,3,4};

    int baseValue = 10;
    int *ptr = &baseValue;
    // I can access the pointer like an array
    
    printf("%d\n", ptr[0]);

    // we can change what we are pointing to:
    ptr = (int *) &baseArray;// its a warning if I don't do the casting
    printf("%d\n", ptr[0]);

    printf("%d,%d,%d,%d,%d\n", ptr[0], ptr[1], ptr[2], ptr[3], ptr[4]);// I can access the rest of the array

    // I can change the values of the array with the pointer:
    ptr[0] = 17;
    ptr[2] = 73;
    printf("%d,%d,%d,%d,%d\n", ptr[0], ptr[1], ptr[2], ptr[3], ptr[4]);// I can access the rest of the array
}


void changingAddresses(void) {
    char charArray[10];
    for (int i=0;i<10;i++){
        charArray[i] = i;
    }

    char *ptr = (char *) &charArray;
    *ptr = 17;
    printf("%d\n", *ptr);
    printf("%d\n", charArray[0]);
    ptr++;
    printf("%d\n", *ptr);
    ptr++;
    printf("%d\n\n", *ptr);

    ptr = (char *) charArray;
    *ptr = 19;
    printf("%d\n", *ptr);
    printf("%d\n", charArray[0]);
    ptr++;
    printf("%d\n", *ptr);
    ptr++;
    printf("%d\n\n", *ptr);

    ptr = (char *) &charArray[1];
    *ptr = 24;
    printf("%d\n", *ptr);
    printf("%d\n", charArray[0]);
    ptr++;
    printf("%d\n", *ptr);
    ptr++;
    printf("%d", *ptr);
}


void addressingPointers(void) {
    char charArray[16];

    char *ptr = charArray;



}

void castingPointers(void) {
    // You can increase the address by 1, and for a char pointer thats the next char, and for a int pointer its the next char, it actually goes smaller
    char charArray[16];
    int intArray[4];

    char *chptr = charArray;
    int *inptr = intArray;

    for (int i=0;i<16;i++){
        charArray[i] = i;
    }
    // print wiht %x
    *inptr = *chptr;
    for (int j=0;j<4;j++){// go to 4
        *inptr = *chptr;
        *inptr += *(chptr+1) << (8);
        *inptr += *(chptr+2) << (16);
        *inptr += *(chptr+3) << (24);

        
        // printf("%d\n", *inptr);
        chptr += 4;
        inptr++;
    }


    // Now I want to break it back up
    for (int i=0;i<16;i++){
        charArray[i] = i+11;
    }

    chptr = charArray;
    char *startInts = (char*) intArray;

    for (int i=0;i<16;i++){
        charArray[i] = i+11;
    }

    for (int i=0;i<16;i++){
        charArray[i] = *(startInts++);
        // *chptr = *(startInts++);
        why different?
    }

    for (int i=0;i<16;i++){
        printf("%d, ",charArray[i]);
    }

}

int main (void) {
    // basics();
    // arrayNotation();
    // changingAddresses();
    // addressingPointers();// TODO: I'm not done yet here
    castingPointers();// TODO: I'm not done yet here
    return 0;
}