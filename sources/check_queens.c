#include "nqueens.h"

int check_queens(int n, int *map, int index) {
    int size = n * n;
    for (int i = 0; i < size; i++) {
        if (map[i]) {
            if (check_queen(n, i, index))
                return (1);
        }
    }
    return (0);
}