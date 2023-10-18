#include <stdio.h>

void passReferance(int *pointer) {
    printf("You are %d years old", *pointer);
}
// and if we pass by referance we just pass in 8 bytes, instead of a whole array, which may be may faster, as we don't need to copy all that memory


int main() {
    /*
    char a = 'X';
    short b = 2;
    char c[5];

    printf("%lu bytes\n", sizeof(a));
    printf("%lu bytes\n", sizeof(b));
    printf("%lu bytes\n", sizeof(c));


    printf("address of a is: %p\n", &a);
    printf("address of b is: %p\n", &b);
    printf("address of c is: %p\n", &c);
    */
    // address changes by the size of the variable (wich is constant for each datatype)

    int age = 24;

    printf("address = %p\n", &age);
    printf("value = %d\n", age);

    int *pAge = NULL;// assign pointer to NULL if not initializing with a value (I think so compiler can catch errors better?)
    pAge = &age;

    printf("its also %p\n", pAge);
    printf("by reference value is %d\n", *pAge);

    printf("size of any pointer is: %lu", sizeof(pAge));

    printf("\n\n\n");

    passReferance(pAge);

    return 0;
}



/*
* Some notes:

* i noticed we don't store data types with the variable, we have raw bits at our address, and the datatype is elsewhere
*** but this is because, for example, chars are just ints, so we in our program choose how to decode
*** for other data types, esp. float, we need to be more carefull about it (i mean compiler programmers were..) as this could be read in different ways
*** I guess you need one bit for +/-, (or unsigned??? no, difference actually, but that one byte is somewhere,,,,, (program always knows if its unsigned in 1 bit, memory sometimes knows +/- bye ##))
*** pretty cool stuff, and i'm starting to get a feel for why we are so fast in c


*/