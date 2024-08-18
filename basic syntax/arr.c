#include <stdio.h>

void arrPrint(double arr[], int size) {
    printf("[");
    for (size_t i = 0; i < size; i++) {
        printf("%.2lf", arr[i]);
        if (i != size - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

int main() {
    double arr[10] = {5.0, 10.0, 15.0, 25.0, 20.0};
    arr[2] = 20.0;
    arr[5] = 21.0;
    arr[6] = 22.0;
    arr[7] = 23.0;
    // arr[8] = 24.0;
    arr[9] = 25.0;
    // arrPrint(arr, sizeof(arr) / sizeof(arr[0]));

    int numbers[][3] = {{1,2,3},{2,3,4},{3,4,5}};
    numbers[1][1] = 16;
    for (int i=0; i < sizeof(numbers)/sizeof(numbers[0]); i++) {

        int size = sizeof(numbers[i])/sizeof(numbers[i][0]);

        printf("[");
        for (int j = 0; j < size; j++) {
            printf("%d", numbers[i][j]);
            if (j != size - 1) {
                printf(", ");
            }
        }
        printf("]\n");
    }

    return 0;
}
