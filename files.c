#include <stdio.h>

int main() {
    /*
    FILE *pF = fopen("test.txt", "a");
    // a appends, w writes a new file
    fprintf(pF, "\nsponge bob squared pantaloons");

    fclose(pF);
    */
    /*
    if (remove("test.txt") == 0) {
        printf("successful delete");
    }
    else {
        printf("fail?");
    }
    */
    FILE *pf = fopen("other notes", "r");
    char buffer[255];

    if (pf == NULL) {
        printf("File not found");
    }
    else {
        while (fgets(buffer, 255, pf) != NULL){
            printf("%s", buffer);
        }
    }

    fclose(pf);
    return 0;
}