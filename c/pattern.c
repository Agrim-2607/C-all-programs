/*
Goal pattern-*******
              *****
               ***
                *
*/

#include <stdio.h>

int main() {
    int rows = 4; 

    for (int i = rows; i >= 1; --i) {
        for (int space = 0; space < rows - i; ++space) {
            printf(" ");
        }

        for (int j = 0; j < 2 * i - 1; ++j) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}