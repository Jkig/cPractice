#include <stdio.h>
// Here I need to practice stucts
// I want to probably impliment a linked list from screatch here for practice

typedef struct llNode {
    int val;
    struct llNode *next;

}



int main() {
    printf("Wow")

    struct llNode tail = {.val = 2}
    struct llNode head = {.val = 1, .*next = tail}



    return 0;
}