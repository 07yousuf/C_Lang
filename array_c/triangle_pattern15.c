#include <stdio.h>

int main() {
    int rows, i, j, space;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // print spaces
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // print asterisks
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}