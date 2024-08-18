#include <stdio.h>

int binarySearch (int *numbers, int target) {
    int low = 0;
    int high = sizeof(numbers);

    while (high > low) {
        if (numbers[(low+high)/2] == target) {
            return (low+high)/2;
        }
        if (numbers[(low+high)/2] < target) {
            low = (low+high)/2 + 1;
        } else {
            high = (low+high)/2 - 1;
        }
    }

    return -1;
}


int main() {
    int numbers[] = {1,3,4,5,7,8,9,11,12,13,15,16,20,25,26,27,28,33};
    int target = 11;

    printf("%d", binarySearch(numbers, target));
    return 0;
}