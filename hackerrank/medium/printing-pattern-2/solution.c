#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int size = 2 * n - 1;

    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            int distance = row;
            if (size - 1 - row < distance) distance = size - 1 - row;
            if (col < distance) distance = col;
            if (size - 1 - col < distance) distance = size - 1 - col;

            printf("%d", n - distance);
            if (col < size - 1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}
