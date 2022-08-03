#include "nqueens.h"

int count_queens(int n, int *map) {
    int size = n * n;
    int counter = 0;

    for (int i = 0; i < size; i++) {
        if (map[i])
            counter++;
    }
    return (counter);
}